/* Contents autogenerated by dyna_tools.py */
#include "lily_api_dyna.h"

const char *lily_builtin_dynaload_table[] = {
    "\0\0"
    ,"R\0stdin\0File"
    ,"R\0stderr\0File"
    ,"R\0stdout\0File"
    ,"F\0print\0[A](A)"
    ,"F\0calltrace\0:List[String]"
    ,"F\0assert\0(Boolean,*String)"
    ,"N\0AssertionError\0< Exception"
    ,"C\02Boolean"
    ,"m\0to_i\0(Boolean):Integer"
    ,"m\0to_s\0(Boolean):String"
    ,"C\01Byte"
    ,"m\0to_i\0(Byte):Integer"
    ,"C\04ByteString"
    ,"m\0each_byte\0(ByteString,Function(Byte))"
    ,"m\0encode\0(ByteString,*String):Option[String]"
    ,"m\0size\0(ByteString):Integer"
    ,"m\0slice\0(ByteString,*Integer,*Integer):ByteString"
    ,"N\01DivisionByZeroError\0< Exception"
    ,"m\0<new>\0(String):DivisionByZeroError"
    ,"C\01Double"
    ,"m\0to_i\0(Double):Integer"
    ,"C\01Dynamic"
    ,"m\0<new>\0[A](A):Dynamic"
    ,"E\04Either\0[A, B]"
    ,"m\0is_left\0[A,B](Either[A,B]):Boolean"
    ,"m\0is_right\0[A,B](Either[A,B]):Boolean"
    ,"m\0left\0[A,B](Either[A,B]):Option[A]"
    ,"m\0right\0[A,B](Either[A,B]):Option[B]"
    ,"V\0Left\0(A)"
    ,"V\0Right\0(B)"
    ,"N\03Exception\0"
    ,"m\0<new>\0(String):Exception"
    ,"3\0message\0String"
    ,"3\0traceback\0List[String]"
    ,"C\07File"
    ,"m\0close\0(File)"
    ,"m\0each_line\0(File,Function(ByteString))"
    ,"m\0open\0(String,String):File"
    ,"m\0print\0[A](File,A)"
    ,"m\0read\0(File,*Integer):ByteString"
    ,"m\0read_line\0(File):ByteString"
    ,"m\0write\0[A](File,A)"
    ,"C\01Function"
    ,"m\0doc\0(Function(1)):String"
    ,"C\013Hash"
    ,"m\0clear\0[A,B](Hash[A,B])"
    ,"m\0delete\0[A,B](Hash[A,B],A)"
    ,"m\0each_pair\0[A,B](Hash[A,B],Function(A,B))"
    ,"m\0get\0[A,B](Hash[A,B],A,B):B"
    ,"m\0has_key\0[A,B](Hash[A,B],A):Boolean"
    ,"m\0keys\0[A,B](Hash[A,B]):List[A]"
    ,"m\0map_values\0[A,B,C](Hash[A,B],Function(B=>C)):Hash[A,C]"
    ,"m\0merge\0[A,B](Hash[A,B],Hash[A,B]...):Hash[A,B]"
    ,"m\0reject\0[A,B](Hash[A,B],Function(A,B=>Boolean)):Hash[A,B]"
    ,"m\0select\0[A,B](Hash[A,B],Function(A,B=>Boolean)):Hash[A,B]"
    ,"m\0size\0[A,B](Hash[A,B]):Integer"
    ,"N\01IndexError\0< Exception"
    ,"m\0<new>\0(String):IndexError"
    ,"C\04Integer"
    ,"m\0to_bool\0(Integer):Boolean"
    ,"m\0to_byte\0(Integer):Byte"
    ,"m\0to_d\0(Integer):Double"
    ,"m\0to_s\0(Integer):String"
    ,"N\01IOError\0< Exception"
    ,"m\0<new>\0(String):IOError"
    ,"N\01KeyError\0< Exception"
    ,"m\0<new>\0(String):KeyError"
    ,"C\022List"
    ,"m\0clear\0[A](List[A])"
    ,"m\0count\0[A](List[A],Function(A=>Boolean)):Integer"
    ,"m\0delete_at\0[A](List[A],Integer)"
    ,"m\0each\0[A](List[A],Function(A)):List[A]"
    ,"m\0each_index\0[A](List[A],Function(Integer)):List[A]"
    ,"m\0fill\0[A](Integer,A):List[A]"
    ,"m\0fold\0[A](List[A],A,Function(A,A=>A)):A"
    ,"m\0insert\0[A](List[A],Integer,A)"
    ,"m\0join\0[A](List[A],*String):String"
    ,"m\0map\0[A,B](List[A],Function(A=>B)):List[B]"
    ,"m\0pop\0[A](List[A]):A"
    ,"m\0push\0[A](List[A],A)"
    ,"m\0reject\0[A](List[A],Function(A=>Boolean)):List[A]"
    ,"m\0select\0[A](List[A],Function(A=>Boolean)):List[A]"
    ,"m\0size\0[A](List[A]):Integer"
    ,"m\0shift\0[A](List[A]):A"
    ,"m\0slice\0[A](List[A],*Integer,*Integer):List[A]"
    ,"m\0unshift\0[A](List[A],A)"
    ,"E\012Option\0[A]"
    ,"m\0and\0[A,B](Option[A],Option[B]):Option[B]"
    ,"m\0and_then\0[A,B](Option[A],Function(A=>Option[B])):Option[B]"
    ,"m\0is_none\0[A](Option[A]):Boolean"
    ,"m\0is_some\0[A](Option[A]):Boolean"
    ,"m\0map\0[A,B](Option[A],Function(A=>B)):Option[B]"
    ,"m\0or\0[A](Option[A],Option[A]):Option[A]"
    ,"m\0or_else\0[A](Option[A],Function(=>Option[A])):Option[A]"
    ,"m\0unwrap\0[A](Option[A]):A"
    ,"m\0unwrap_or\0[A](Option[A],A):A"
    ,"m\0unwrap_or_else\0[A](Option[A],Function(=>A)):A"
    ,"V\0Some\0(A)"
    ,"V\0None\0"
    ,"N\01RuntimeError\0< Exception"
    ,"m\0<new>\0(String):RuntimeError"
    ,"C\024String"
    ,"m\0format\0(String,1...):String"
    ,"m\0ends_with\0(String,String):Boolean"
    ,"m\0find\0(String,String,*Integer):Option[Integer]"
    ,"m\0html_encode\0(String):String"
    ,"m\0is_alnum\0(String):Boolean"
    ,"m\0is_alpha\0(String):Boolean"
    ,"m\0is_digit\0(String):Boolean"
    ,"m\0is_space\0(String):Boolean"
    ,"m\0lower\0(String):String"
    ,"m\0lstrip\0(String,String):String"
    ,"m\0parse_i\0(String):Option[Integer]"
    ,"m\0replace\0(String,String,String):String"
    ,"m\0rstrip\0(String,String):String"
    ,"m\0slice\0(String,*Integer,*Integer):String"
    ,"m\0split\0(String,*String):List[String]"
    ,"m\0starts_with\0(String,String):Boolean"
    ,"m\0strip\0(String,String):String"
    ,"m\0to_bytestring\0(String):ByteString"
    ,"m\0trim\0(String):String"
    ,"m\0upper\0(String):String"
    ,"C\02Tuple"
    ,"m\0merge\0(Tuple[1],Tuple[2]):Tuple[1,2]"
    ,"m\0push\0[A](Tuple[1],A):Tuple[1,A]"
    ,"N\01ValueError\0< Exception"
    ,"m\0<new>\0(String):ValueError"
    ,"Z"
};

void *lily_builtin_loader(lily_state *s, int id)
{
    switch (id) {
        case 1: load_var_stdin(s); return NULL;
        case 2: load_var_stderr(s); return NULL;
        case 3: load_var_stdout(s); return NULL;
        case 4: return lily_builtin_print;
        case 5: return lily_builtin_calltrace;
        case 6: return lily_builtin_assert;
        case 9: return lily_builtin_Boolean_to_i;
        case 10: return lily_builtin_Boolean_to_s;
        case 12: return lily_builtin_Byte_to_i;
        case 14: return lily_builtin_ByteString_each_byte;
        case 15: return lily_builtin_ByteString_encode;
        case 16: return lily_builtin_ByteString_size;
        case 17: return lily_builtin_ByteString_slice;
        case 19: return lily_builtin_DivisionByZeroError_new;
        case 21: return lily_builtin_Double_to_i;
        case 23: return lily_builtin_Dynamic_new;
        case 25: return lily_builtin_Either_is_left;
        case 26: return lily_builtin_Either_is_right;
        case 27: return lily_builtin_Either_left;
        case 28: return lily_builtin_Either_right;
        case 32: return lily_builtin_Exception_new;
        case 36: return lily_builtin_File_close;
        case 37: return lily_builtin_File_each_line;
        case 38: return lily_builtin_File_open;
        case 39: return lily_builtin_File_print;
        case 40: return lily_builtin_File_read;
        case 41: return lily_builtin_File_read_line;
        case 42: return lily_builtin_File_write;
        case 44: return lily_builtin_Function_doc;
        case 46: return lily_builtin_Hash_clear;
        case 47: return lily_builtin_Hash_delete;
        case 48: return lily_builtin_Hash_each_pair;
        case 49: return lily_builtin_Hash_get;
        case 50: return lily_builtin_Hash_has_key;
        case 51: return lily_builtin_Hash_keys;
        case 52: return lily_builtin_Hash_map_values;
        case 53: return lily_builtin_Hash_merge;
        case 54: return lily_builtin_Hash_reject;
        case 55: return lily_builtin_Hash_select;
        case 56: return lily_builtin_Hash_size;
        case 58: return lily_builtin_IndexError_new;
        case 60: return lily_builtin_Integer_to_bool;
        case 61: return lily_builtin_Integer_to_byte;
        case 62: return lily_builtin_Integer_to_d;
        case 63: return lily_builtin_Integer_to_s;
        case 65: return lily_builtin_IOError_new;
        case 67: return lily_builtin_KeyError_new;
        case 69: return lily_builtin_List_clear;
        case 70: return lily_builtin_List_count;
        case 71: return lily_builtin_List_delete_at;
        case 72: return lily_builtin_List_each;
        case 73: return lily_builtin_List_each_index;
        case 74: return lily_builtin_List_fill;
        case 75: return lily_builtin_List_fold;
        case 76: return lily_builtin_List_insert;
        case 77: return lily_builtin_List_join;
        case 78: return lily_builtin_List_map;
        case 79: return lily_builtin_List_pop;
        case 80: return lily_builtin_List_push;
        case 81: return lily_builtin_List_reject;
        case 82: return lily_builtin_List_select;
        case 83: return lily_builtin_List_size;
        case 84: return lily_builtin_List_shift;
        case 85: return lily_builtin_List_slice;
        case 86: return lily_builtin_List_unshift;
        case 88: return lily_builtin_Option_and;
        case 89: return lily_builtin_Option_and_then;
        case 90: return lily_builtin_Option_is_none;
        case 91: return lily_builtin_Option_is_some;
        case 92: return lily_builtin_Option_map;
        case 93: return lily_builtin_Option_or;
        case 94: return lily_builtin_Option_or_else;
        case 95: return lily_builtin_Option_unwrap;
        case 96: return lily_builtin_Option_unwrap_or;
        case 97: return lily_builtin_Option_unwrap_or_else;
        case 101: return lily_builtin_RuntimeError_new;
        case 103: return lily_builtin_String_format;
        case 104: return lily_builtin_String_ends_with;
        case 105: return lily_builtin_String_find;
        case 106: return lily_builtin_String_html_encode;
        case 107: return lily_builtin_String_is_alnum;
        case 108: return lily_builtin_String_is_alpha;
        case 109: return lily_builtin_String_is_digit;
        case 110: return lily_builtin_String_is_space;
        case 111: return lily_builtin_String_lower;
        case 112: return lily_builtin_String_lstrip;
        case 113: return lily_builtin_String_parse_i;
        case 114: return lily_builtin_String_replace;
        case 115: return lily_builtin_String_rstrip;
        case 116: return lily_builtin_String_slice;
        case 117: return lily_builtin_String_split;
        case 118: return lily_builtin_String_starts_with;
        case 119: return lily_builtin_String_strip;
        case 120: return lily_builtin_String_to_bytestring;
        case 121: return lily_builtin_String_trim;
        case 122: return lily_builtin_String_upper;
        case 124: return lily_builtin_Tuple_merge;
        case 125: return lily_builtin_Tuple_push;
        case 127: return lily_builtin_ValueError_new;
        default: return NULL;
    }
}

#define register_builtin(p) lily_register_package(p, "builtin", lily_builtin_dynaload_table, lily_builtin_loader);
