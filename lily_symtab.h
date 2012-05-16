#ifndef LILY_SYMTAB_H
# define LILY_SYMTAB_H

# include "lily_error.h"
# include "lily_opcode.h"

typedef struct {
    char *str;
    int size;
} lily_strval;

typedef struct {
    int *code;
    struct lily_var_t *first_arg;
    struct lily_var_t *last_arg;
    int pos;
    int len;
} lily_method_val;

/* This is where the raw data gets stored. Anything not an integer or a number
   is stored in ptr and cast appropriately. */
typedef union {
    int integer;
    double number;
    void *ptr;
} lily_value;

/* Indicates what kind of value is being stored. */
typedef struct lily_class_t {
    char *name;
    int id;
    struct lily_storage_t *storage;
    struct lily_sig_t *sig;
} lily_class;

typedef struct lily_func_sig_t {
    struct lily_sig_t *ret;
    struct lily_sig_t **args;
    int num_args;
    int is_varargs;
} lily_func_sig;

typedef struct lily_sig_t {
    lily_class *cls;
    union {
        lily_func_sig *func;
        struct lily_sig_t *value_sig;
    } node;
} lily_sig;

#define VAR_SYM      0x01
#define LITERAL_SYM  0x02
#define STORAGE_SYM  0x04
#define S_IS_NIL     0x10

/* All symbols have at least these fields. The vm and debugging functions use
   this to cast and grab common info. */
typedef struct lily_sym_t {
    int id;
    int flags;
    lily_sig *sig;
    lily_value value;
} lily_sym;

/* Literals are syms created to hold values that the lexer finds. These syms
   always have a value set. */
typedef struct lily_literal_t {
    int id;
    int flags;
    lily_sig *sig;
    lily_value value;
    struct lily_literal_t *next;
} lily_literal;

/* These are created by keywords (initialization), or by user declaration. They
   always have a class, but don't have a value at parse-time. Builtin symbols
   have line_num == 0. */
typedef struct lily_var_t {
    int id;
    int flags;
    lily_sig *sig;
    lily_value value;
    char *name;
    int line_num;
    struct lily_var_t *next;
} lily_var;

/* These hold the results of a vm op. An usage example would be holding the
   result of a plus operation. Each expression has a different id (expr_num) to
   keep the same storage from being used twice in an expression. Storages are
   circularly-linked, and held in the class that they are of (integer storages
   are in the integer class). */
typedef struct lily_storage_t {
    int id;
    int flags;
    lily_sig *sig;
    lily_value value;
    int expr_num;
    struct lily_storage_t *next;
} lily_storage;

typedef struct {
    /* The first symbol in the table (for itering from). */
    lily_var *var_start;
    /* The last symbol (for adding to). */
    lily_var *var_top;
    lily_class **classes;
    /* The function containing commands outside of functions. */
    lily_var *main;
    lily_literal *lit_start;
    lily_literal *lit_top;
    int next_var_id;
    int next_lit_id;
    int next_storage_id;
    int *lex_linenum;
    lily_excep_data *error;
} lily_symtab;

/* Sync with keywords in lily_seed_symtab.h. */
#define KEY_IF      0
#define KEY_ELIF    1
#define KEY_ELSE    2
#define KEY_RETURN  3

#define KEY_LAST_ID 3

/* Sync with classname_seeds in lily_seed_symtab.h. */
#define SYM_CLASS_INTEGER  0
#define SYM_CLASS_NUMBER   1
#define SYM_CLASS_STR      2
#define SYM_CLASS_FUNCTION 3
#define SYM_CLASS_OBJECT   4
#define SYM_CLASS_METHOD   5

#define SYM_LAST_CLASS     5

lily_class *lily_class_by_id(lily_symtab *, int);
lily_class *lily_class_by_name(lily_symtab *, char *);
void lily_free_symtab(lily_symtab *);
int lily_keyword_by_name(char *);
lily_literal *lily_new_literal(lily_symtab *, lily_class *);
lily_symtab *lily_new_symtab(lily_excep_data *);
lily_var *lily_new_var(lily_symtab *, lily_class *, char *);
lily_var *lily_var_by_name(lily_symtab *, char *);
int lily_try_add_storage(lily_symtab *, lily_class *);
void lily_reset_main(lily_symtab *);
#endif
