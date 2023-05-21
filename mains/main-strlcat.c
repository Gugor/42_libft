
#include "../libft.h"

int main()
{
    //Test 1: src + dstsize < dst && dstsize != 0 
	//c se encuentra en s y devuelve puntero
	printf("\n");
	printf("\33[1;35m---------------------------------\33[1;0m\n");
	printf("\33[1;35mTest 1 : src + dstsize < dst && dstsize != 0\33[1;0m\n");
	//Test 4 Variables
	char t1_dst1[20] = "This and ";
	char t1_src1[5]  = "that";
    char t1_dst2[20] = "This and ";
    char t1_src2[5]  = "that";
	int t1_dstsize   = 11;
	//Init
	size_t test1_ft  = ft_strlcat(t1_dst1, t1_src1, t1_dstsize);
	size_t test1_o   = strlcat(t1_dst2, t1_src2, t1_dstsize);
	if(test1_ft == test1_o && memcmp(t1_dst1, t1_dst2, sizeof(t1_dst1)) > 0)
	{
    	printf("\33[1;32m[SUCCESS]\33[1;0m\n");
	    printf( "\33[1;33m>>Are equals?:\33[1;0m \33[1;36m%d\33[1;0m\33[1;31m =>\33[1;0m \33[1;36m%d\33[1;0m /\33[1;0m \33[1;36m%d\33[1;0m\n---\n",test1_ft == test1_o, ft_strncmp(t1_dst1, t1_dst2, sizeof(t1_dst1)), strncmp(t1_dst1, t1_dst2, sizeof(t1_dst1)));
        printf("ft_ = \33[1;36m\"%s\"\33[1;0m\nso = \33[1;36m\"%s\"\33[1;0m\n", t1_dst1, t1_dst2);
        printf("ft_ = \33[1;36m%zu\33[1;0m\nso = \33[1;36m%zu\33[1;0m\n", test1_ft, test1_o);
	}
	else
	{
    	printf("\33[1;31m[FAIL]\33[1;0m\n");
	printf( "\33[1;33m>>Are equals?:\33[1;0m \33[1;36m%d\33[1;0m\33[1;31m =>\33[1;0m \33[1;36m%d\33[1;0m /\33[1;0m \33[1;36m%d\33[1;0m\n---\n",test1_ft == test1_o, ft_strncmp(t1_dst1, t1_dst2, sizeof(t1_dst1)), strncmp(t1_dst1, t1_dst2, sizeof(t1_dst1)));
        printf("ft_ = \33[1;36m\"%s\"\33[1;0m\nso = \33[1;36m\"%s\"\33[1;0m\n", t1_dst1, t1_dst2);
        printf("ft_ = \33[1;36m%zu\33[1;0m\nso = \33[1;36m%zu\33[1;0m\n", test1_ft, test1_o);
	}
}
