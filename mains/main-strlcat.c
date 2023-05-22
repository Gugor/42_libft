
#include "../libft.h"

int main()
{
    //Test 1: src + dstsize < dst && dstsize != 0 
	//c se encuentra en s y devuelve puntero
	printf("\n");
	printf("\33[1;35m---------------------------------\33[1;0m\n");
	printf("\33[1;35mTest 1 : src + dstsize < dst && dstsize != 0\33[1;0m\n");
	//Variables
	char t1_dst1[20] = "This and ";
	char t1_src1[5]  = "that";
    char t1_dst2[20] = "This and ";
    char t1_src2[5]  = "that";
	size_t t1_dstsize   = 11;
    printf("\n____Variables____\n");
    printf("char dst[20] = \"%s\" (%zu)\nchar src[5] = \"%s\" (%zu)\nsize_t dstsize = %zu\n\n",t1_dst1,ft_strlen(t1_dst1),t1_src1,ft_strlen(t1_src1),t1_dstsize);
	//Init
	size_t test1_ft  = ft_strlcat(t1_dst1, t1_src1, t1_dstsize);
	size_t test1_o   = strlcat(t1_dst2, t1_src2, t1_dstsize);
	if(test1_ft == test1_o && memcmp(t1_dst1, t1_dst2, t1_dstsize) == 0)
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
	printf("\33[1;35mTest 2 : n > src + dst\33[1;0m\n");
	//Variables
	char t2_dst1[20] = "This and ";
	char t2_src1[5]  = "that";
    char t2_dst2[20] = "This and ";
    char t2_src2[5]  = "that";
	size_t t2_dstsize   = 13;
    printf("\n____Variables____\n");
    printf("char dst[20] = \"%s\" (%zu)\nchar src[5] = \"%s\" (%zu)\nsize_t dstsize = %zu\n\n",t2_dst1,ft_strlen(t2_dst1),t2_src1,ft_strlen(t2_src1),t2_dstsize);
	//Init
	size_t test2_ft  = ft_strlcat(t2_dst1, t2_src1, t2_dstsize);
	size_t test2_o   = strlcat(t2_dst2, t2_src2, t2_dstsize);
	if(test2_ft == test2_o && memcmp(t2_dst1, t2_dst2, t2_dstsize) == 0)
	{
    	printf("\33[1;32m[SUCCESS]\33[1;0m\n");
	    printf( "\33[1;33m>>Are equals?:\33[1;0m \33[1;36m%d\33[1;0m\33[1;31m =>\33[1;0m \33[1;36m%d\33[1;0m /\33[1;0m \33[1;36m%d\33[1;0m\n---\n",test2_ft == test2_o, ft_memcmp(t2_dst1, t2_dst2, sizeof(t2_dst1)), memcmp(t2_dst1, t2_dst2, sizeof(t2_dst1)));
        printf("ft_ = \33[1;36m\"%s\"\33[1;0m\nso = \33[1;36m\"%s\"\33[1;0m\n", t2_dst1, t2_dst2);
        printf("ft_ = \33[1;36m%zu\33[1;0m\nso = \33[1;36m%zu\33[1;0m\n", test2_ft, test2_o);
	}
	else
	{
    	printf("\33[1;31m[FAIL]\33[1;0m\n");
	    printf( "\33[1;33m>>Are equals?:\33[1;0m \33[1;36m%d\33[1;0m\33[1;31m =>\33[1;0m \33[1;36m%d\33[1;0m /\33[1;0m \33[1;36m%d\33[1;0m\n---\n",test2_ft == test2_o, ft_memcmp(t2_dst1, t2_dst2,t2_dstsize), memcmp(t2_dst1, t2_dst2,t2_dstsize));
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
	size_t t3_dstsize   = 14;
    printf("\n____Variables____\n");
    printf("char dst[20] = \"%s\" (%zu)\nchar src[5] = \"%s\" (%zu)\nsize_t dstsize = %zu\n\n",t3_dst1,ft_strlen(t3_dst1),t3_src1,ft_strlen(t3_src1),t3_dstsize);
	//Init
	size_t test3_ft  = ft_strlcat(t3_dst1, t3_src1, t3_dstsize);
	size_t test3_o   = strlcat(t3_dst2, t3_src2, t3_dstsize);
	if(test3_ft == test3_o && memcmp(t3_dst1, t3_dst2, t3_dstsize) == 0)
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
	char t4_dst1[20]    = "Silence is ";
	char t4_src1[5]     = "Gold";
    char t4_dst2[20]    = "Silence is ";
    char t4_src2[5]     = "Gold";
	size_t t4_dstsize   = 16;
    printf("\n____Variables____\n");
    printf("char dst[20] = \"%s\" (%zu)\nchar src[5] = \"%s\" (%zu)\nsize_t dstsize = %zu\n\n",t4_dst1,ft_strlen(t4_dst1),t4_src1,ft_strlen(t4_src1),t4_dstsize);
	//init
    printf("Preparing test ft_...\n");
	size_t test4_ft  = ft_strlcat(t4_dst1, t4_src1, t4_dstsize);
    printf("Preparing test so_...\n");
	size_t test4_o   = strlcat(t4_dst2, t4_src2, t4_dstsize);
    printf("Evaluating test...\n");
	if(test4_ft == test4_o && ft_memcmp(t4_dst1, t4_dst2, t4_dstsize) == 0)
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
    //Test 5: n < src + dst && src == dst 
	//n es menor al largo de src mas dst
	printf("\n");
	printf("\33[1;35m---------------------------------\33[1;0m\n");
	printf("\33[1;35mTest 5 : n < src + dst && src == dst\33[1;0m\n");
	//Variables
	char t5_dst1[20]    = "Silence is BOLD";
	char t5_src1[20]     = "Silence is BOLD";
    char t5_dst2[20]    = "Silence is BOLD";
    char t5_src2[20]     = "Silence is BOLD";
	size_t t5_dstsize   = 20;
    printf("\n____Variables____\n");
    printf("char dst[20] = \"%s\" (%zu)\nchar src[5] = \"%s\" (%zu)\nsize_t dstsize = %zu\n\n",t5_dst1,ft_strlen(t5_dst1),t5_src1,ft_strlen(t5_src1),t5_dstsize);
	//init
    printf("Preparing test ft_...\n");
	size_t test5_ft  = ft_strlcat(t5_dst1, t5_src1, t5_dstsize);
    printf("Preparing test so_...\n");
	size_t test5_o   = strlcat(t5_dst2, t5_src2, t5_dstsize);
    printf("Evaluating test...\n");
	if(test5_ft == test5_o && ft_memcmp(t5_dst1, t5_dst2, t5_dstsize) == 0)
	{
    	printf("\33[1;32m[SUCCESS]\33[1;0m\n");
	    printf( "\33[1;33m>>Are equals?:\33[1;0m \33[1;36m%d\33[1;0m\33[1;31m =>\33[1;0m \33[1;36m%d\33[1;0m /\33[1;0m \33[1;36m%d\33[1;0m\n---\n",test5_ft == test5_o, ft_memcmp(t5_dst1, t5_dst2, sizeof(t5_dst1)), memcmp(t5_dst1, t5_dst2, sizeof(t5_dst1)));
        printf("ft_ = \33[1;36m\"%s\"\33[1;0m\nso = \33[1;36m\"%s\"\33[1;0m\n", t5_dst1, t5_dst2);
        printf("ft_ = \33[1;36m%zu\33[1;0m\nso = \33[1;36m%zu\33[1;0m\n", test5_ft, test5_o);
	}
	else
	{
    	printf("\33[1;31m[FAIL]\33[1;0m\n");
	    printf( "\33[1;33m>>Are equals?:\33[1;0m \33[1;36m%d\33[1;0m\33[1;31m =>\33[1;0m \33[1;36m%d\33[1;0m /\33[1;0m \33[1;36m%d\33[1;0m\n---\n",test5_ft == test5_o, ft_memcmp(t5_dst1, t5_dst2, sizeof(t5_dst1)), memcmp(t5_dst1, t5_dst2, sizeof(t5_dst1)));
        printf("ft_ = \33[1;36m\"%s\"\33[1;0m\nso = \33[1;36m\"%s\"\33[1;0m\n", t5_dst1, t5_dst2);
        printf("ft_ = \33[1;36m%zu\33[1;0m\nso = \33[1;36m%zu\33[1;0m\n", test4_ft, test4_o);
    }
}
