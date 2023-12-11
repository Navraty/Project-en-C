#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array{
    int size;
    char**array;
}string_array;
#endif

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array{
    int size;
    int ** array;
}s_integer_array;
#endif

s_integer_array*my_count_on_it(string_array*param_1){
    s_integer_array*taille = malloc(sizeof(s_integer_array));

    int taill_str = param_1-> size; 
    taille-> size = taill_str;
    taille-> array = malloc(sizeof(int)*taill_str);
for (int i = 0; i <taill_str, i++){
    int str_size = strlen(param_1 -> array[i]);
    taille->array[i] = str_size;

}

return taille;
}