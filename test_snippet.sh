#!/bin/bash
//Test 4: c es \\0 y s es \"\"
//c se encuentra en s y devuelve puntero
printf("\n");
printf("\33[1;35m---------------------------------\33[1;0m\n");
printf("\33[1;35mTest 4 : c es \\0 y s es \"\"\33[1;0m\n");
//Test 4 Variables
char t4_str[50] = "";
char t4_c       = '\0';
int t4_len      = 50;
//Test 4 init
void *test4_ft  = ft_memchr(t4_str, t4_c, t4_len);
void *test4_o   = memchr(t4_str, t4_c, t4_len);
if(test4_ft == test4_o)
{
	printf("\33[1;32m[SUCCESS]\33[1;0m\n");
    printf("ft_memchr = \33[1;36m%s\33[1;0m\nmemchr = \33[1;36m%s\33[1;0m\n", test4_ft, test4_o);
}
else
{
    printf("\33[1;31m[FAIL]\33[1;0m\n");
    printf("ft_memchr = \33[1;36m%s\33[1;0m\nmemchr = \33[1;36m%s\33[1;0m\n",test4_ft, test4_o);
}
