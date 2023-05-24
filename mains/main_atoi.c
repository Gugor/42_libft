

#include "../libft.h"

int main(void)
{

    //Test 1: str < max && str +
	//str es positivo y menor al maximo de int
	printf("\n");
	printf("\33[1;35m---------------------------------\33[1;0m\n");
	printf("\33[1;35mTest 1 : str < max && str +\33[1;0m\n");
	//Variables
	char t1_str[50] = "\e06050";
    printf("\n_____Variables_____\n");
    printf("char str = \"%s\"\n",t1_str);
    printf("\n");
	//Init
    printf("Preparing test ft_\n");
	int test1_ft  = ft_atoi(t1_str);
    printf("Preparing test so_\n");
	int test1_o   = atoi(t1_str);
	if(test1_ft == test1_o)
	{
		printf("\33[1;32m[SUCCESS]\33[1;0m\n");
    		printf("ft_ = \33[1;36m%i\33[1;0m\nso = \33[1;36m%i\33[1;0m\n", test1_ft, test1_o);
	}
	else
	{
    		printf("\33[1;31m[FAIL]\33[1;0m\n");
    		printf("ft_ = \33[1;36m%i\33[1;0m\nso = \33[1;36m%i\33[1;0m\n",test1_ft, test1_o);
	}
    //Test 2: str > max
	//str es positivo y menor al maximo de int
	printf("\n");
	printf("\33[1;35m---------------------------------\33[1;0m\n");
	printf("\33[1;35mTest 3 : str < max && str +\33[1;0m\n");
	//Variables
	char t2_str[50] = "23456789012345";
    printf("\n_____Variables_____\n");
    printf("char str = \"%s\"\n",t2_str);
    printf("\n");
	//Init
    printf("Preparing test ft_\n");
	int test2_ft  = ft_atoi(t2_str);
    printf("Preparing test so_\n");
	int test2_o   = atoi(t2_str);
	if(test2_ft == test2_o)
	{
		printf("\33[1;32m[SUCCESS]\33[1;0m\n");
    		printf("ft_ = \33[1;36m%i\33[1;0m\nso = \33[1;36m%i\33[1;0m\n", test2_ft, test2_o);
	}
	else
	{
    		printf("\33[1;31m[FAIL]\33[1;0m\n");
    		printf("ft_ = \33[1;36m%i\33[1;0m\nso = \33[1;36m%i\33[1;0m\n",test1_ft, test1_o);
	}
    //Test 3: -str < max && -str > min
	//str es negativo menor a max y mayor a min 
	printf("\n");
	printf("\33[1;35m---------------------------------\33[1;0m\n");
	printf("\33[1;35mTest 3 : str < max && str +\33[1;0m\n");
	//Variables
	char t3_str[50] = "-23456";
    printf("\n_____Variables_____\n");
    printf("char str = \"%s\"\n",t3_str);
    printf("\n");
	//Init
    printf("Preparing test ft_\n");
	int test3_ft  = ft_atoi(t3_str);
    printf("Preparing test so_\n");
	int test3_o   = atoi(t3_str);
	if(test3_ft == test3_o)
	{
		printf("\33[1;32m[SUCCESS]\33[1;0m\n");
    	printf("ft_ = \33[1;36m%i\33[1;0m\nso = \33[1;36m%i\33[1;0m\n", test3_ft, test3_o);
	}
	else
	{
    		printf("\33[1;31m[FAIL]\33[1;0m\n");
    		printf("ft_ = \33[1;36m%i\33[1;0m\nso = \33[1;36m%i\33[1;0m\n",test3_ft, test3_o);
	}
    //Test 4: -str < max && -str > min && is giberish before
	//str is negative greater than min and less than max and before has gibberish 
	printf("\n");
	printf("\33[1;35m---------------------------------\33[1;0m\n");
	printf("\33[1;35mTest 4 : -str < max && -str > min && is giberish before\33[1;0m\n");
	//Variables
	char t4_str[50] = "-2147483649asdfasdfasdf";
    printf("\n_____Variables_____\n");
    printf("char str = \"%s\"\n",t4_str);
    printf("\n");
	//Init
    printf("Preparing test ft_\n");
	int test4_ft  = ft_atoi(t4_str);
    printf("Preparing test so_\n");
	int test4_o   = atoi(t4_str);
	if(test4_ft == test4_o)
	{
		printf("\33[1;32m[SUCCESS]\33[1;0m\n");
    	printf("ft_ = \33[1;36m%i\33[1;0m\nso = \33[1;36m%i\33[1;0m\n", test4_ft, test4_o);
	}
	else
	{
    		printf("\33[1;31m[FAIL]\33[1;0m\n");
    		printf("ft_ = \33[1;36m%i\33[1;0m\nso = \33[1;36m%i\33[1;0m\n",test4_ft, test4_o);
	}
    return (0);
}
