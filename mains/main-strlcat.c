
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
	    printf( "\33[1;33m>>Are equals?:\33[1;0m \33[1;36m%d\33[1;0m\33[1;31m =>\33[1;0m \33[1;36m%d\33[1;0m /\33[1;0m \33[1;36m%d\33[1;0m\n---\n",test1_ft == test1_o, ft_memcmp(t1_dst1, t1_dst2, sizeof(t1_dst1)), memcmp(t1_dst1, t1_dst2, sizeof(t1_dst1)));
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
    //Test 2: n > src + dst 
	//n es mayor al largo de src mas dst
	printf("\n");
	printf("\33[1;35m---------------------------------\33[1;0m\n");
	printf("\33[1;35mTest 2 : \n > src + dst\33[1;0m\n");
	//Variables
	char t2_dst1[20] = "This and ";
	char t2_src1[5]  = "that";
    char t2_dst2[20] = "This and ";
    char t2_src2[5]  = "that";
	int t2_dstsize   = 13;
	//Init
	size_t test2_ft  = ft_strlcat(t2_dst1, t2_src1, t2_dstsize);
	size_t test2_o   = strlcat(t2_dst2, t2_src2, t2_dstsize);
	if(test2_ft == test2_o && memcmp(t2_dst1, t2_dst2, sizeof(t2_dst1)) > 0)
	{
    	printf("\33[1;32m[SUCCESS]\33[1;0m\n");
	    printf( "\33[1;33m>>Are equals?:\33[1;0m \33[1;36m%d\33[1;0m\33[1;31m =>\33[1;0m \33[1;36m%d\33[1;0m /\33[1;0m \33[1;36m%d\33[1;0m\n---\n",test2_ft == test2_o, ft_memcmp(t2_dst1, t2_dst2, sizeof(t2_dst1)), memcmp(t2_dst1, t2_dst2, sizeof(t2_dst1)));
        printf("ft_ = \33[1;36m\"%s\"\33[1;0m\nso = \33[1;36m\"%s\"\33[1;0m\n", t2_dst1, t2_dst2);
        printf("ft_ = \33[1;36m%zu\33[1;0m\nso = \33[1;36m%zu\33[1;0m\n", test2_ft, test2_o);
	}
	else
	{
    	printf("\33[1;31m[FAIL]\33[1;0m\n");
	    printf( "\33[1;33m>>Are equals?:\33[1;0m \33[1;36m%d\33[1;0m\33[1;31m =>\33[1;0m \33[1;36m%d\33[1;0m /\33[1;0m \33[1;36m%d\33[1;0m\n---\n",test2_ft == test2_o, ft_memcmp(t2_dst1, t2_dst2, sizeof(t2_dst1)), memcmp(t2_dst1, t2_dst2, sizeof(t2_dst1)));
        printf("ft_ = \33[1;36m\"%s\"\33[1;0m\nso = \33[1;36m\"%s\"\33[1;0m\n", t2_dst1, t2_dst2);
        printf("ft_ = \33[1;36m%zu\33[1;0m\nso = \33[1;36m%zu\33[1;0m\n", test2_ft, test2_o);
	}
    //Test 3: n > src + dst + 1 
	//n es mayor al largo de src mas dst
	printf("\n");
	printf("\33[1;35m---------------------------------\33[1;0m\n");
	printf("\33[1;35mTest 3 : n > src + dst + 1\33[1;0m\n");
	//Variables
	char t3_dst1[20] = "This and ";
	char t3_src1[5]  = "that";
    char t3_dst2[20] = "This and ";
    char t3_src2[5]  = "that";
	int t3_dstsize   = 14;
	//Init
	size_t test3_ft  = ft_strlcat(t3_dst1, t3_src1, t2_dstsize);
	size_t test3_o   = strlcat(t3_dst2, t3_src2, t2_dstsize);
	if(test3_ft == test3_o && memcmp(t3_dst1, t3_dst2, sizeof(t3_dst1)) > 0)
	{
    	printf("\33[1;32m[SUCCESS]\33[1;0m\n");
	    printf( "\33[1;33m>>Are equals?:\33[1;0m \33[1;36m%d\33[1;0m\33[1;31m =>\33[1;0m \33[1;36m%d\33[1;0m /\33[1;0m \33[1;36m%d\33[1;0m\n---\n",test3_ft == test3_o, ft_memcmp(t3_dst1, t3_dst2, sizeof(t3_dst1)), memcmp(t3_dst1, t3_dst2, sizeof(t3_dst1)));
        printf("ft_ = \33[1;36m\"%s\"\33[1;0m\nso = \33[1;36m\"%s\"\33[1;0m\n", t3_dst1, t3_dst2);
        printf("ft_ = \33[1;36m%zu\33[1;0m\nso = \33[1;36m%zu\33[1;0m\n", test3_ft, test3_o);
	}
	else
	{
    	printf("\33[1;31m[FAIL]\33[1;0m\n");
	    printf( "\33[1;33m>>Are equals?:\33[1;0m \33[1;36m%d\33[1;0m\33[1;31m =>\33[1;0m \33[1;36m%d\33[1;0m /\33[1;0m \33[1;36m%d\33[1;0m\n---\n",test3_ft == test3_o, ft_memcmp(t3_dst1, t3_dst2, sizeof(t3_dst1)), memcmp(t3_dst1, t3_dst2, sizeof(t3_dst1)));
        printf("ft_ = \33[1;36m\"%s\"\33[1;0m\nso = \33[1;36m\"%s\"\33[1;0m\n", t3_dst1, t3_dst2);
        printf("ft_ = \33[1;36m%zu\33[1;0m\nso = \33[1;36m%zu\33[1;0m\n", test3_ft, test3_o);
    }
    //Test 4: n > src + dst + 1 
	//n es mayor al largo de src mas dst
	printf("\n");
	printf("\33[1;35m---------------------------------\33[1;0m\n");
	printf("\33[1;35mTest 4 : n > src + dst + 1\33[1;0m\n");
	//Variables
	char t4_dst1[20] = "Silence is ";
	char t4_src1[5]  = "Gold";
    char t4_dst2[20] = "Silence is ";
    char t4_src2[5]  = "Gold";
	int t4_dstsize   = 24;
	//Init
	size_t test4_ft  = ft_strlcat(t4_dst1, t4_src1, t4_dstsize);
	size_t test4_o   = strlcat(t4_dst2, t4_src2, t4_dstsize);
	if(test4_ft == test4_o && memcmp(t4_dst1, t4_dst2, sizeof(t4_dst1)) > 0)
	{
    	printf("\33[1;32m[SUCCESS]\33[1;0m\n");
	    printf( "\33[1;33m>>Are equals?:\33[1;0m \33[1;36m%d\33[1;0m\33[1;31m =>\33[1;0m \33[1;36m%d\33[1;0m /\33[1;0m \33[1;36m%d\33[1;0m\n---\n",test4_ft == test4_o, ft_memcmp(t4_dst1, t4_dst2, sizeof(t4_dst1)), memcmp(t4_dst1, t4_dst2, sizeof(t4_dst1)));
        printf("ft_ = \33[1;36m\"%s\"\33[1;0m\nso = \33[1;36m\"%s\"\33[1;0m\n", t4_dst1, t4_dst2);
        printf("ft_ = \33[1;36m%zu\33[1;0m\nso = \33[1;36m%zu\33[1;0m\n", test4_ft, test4_o);
	}
	else
	{
    	printf("\33[1;31m[FAIL]\33[1;0m\n");
	    printf( "\33[1;33m>>Are equals?:\33[1;0m \33[1;36m%d\33[1;0m\33[1;31m =>\33[1;0m \33[1;36m%d\33[1;0m /\33[1;0m \33[1;36m%d\33[1;0m\n---\n",test4_ft == test4_o, ft_memcmp(t4_dst1, t4_dst2, sizeof(t4_dst1)), memcmp(t4_dst1, t4_dst2, sizeof(t4_dst1)));
        printf("ft_ = \33[1;36m\"%s\"\33[1;0m\nso = \33[1;36m\"%s\"\33[1;0m\n", t4_dst1, t4_dst2);
        printf("ft_ = \33[1;36m%zu\33[1;0m\nso = \33[1;36m%zu\33[1;0m\n", test4_ft, test4_o);
    }
}
