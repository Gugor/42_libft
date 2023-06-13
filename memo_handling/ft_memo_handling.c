#include "../libft.h"

//#define LOG_MEMO_ALLOC(ptr,size) printf("Allocated %d bytes at %p\n",size, ptr)
//#define LOG_MEMO_DEALLOC(ptr) printf("Deallocated memory at %p\n",ptr)
typedef struct
{
    char *CONTENT;
    char *CONTEXT;
    size_t SIZE;
} S_MEMO_ALLOC;
typedef struct
{
    char *CONTENT;
    char *CONTEXT;
    size_t SIZE;
} S_MEMO_DEALLOC;

void LOG_MEMO_ALLOC(char *ptr,size_t size)
{
   static S_MEMO_ALLOC MEMO_ALLOC;
    size_t LOG_SIZE;

    if(MEMO_ALLOC.CONTENT != NULL)
        LOG_SIZE = 2; //1 + NULL
    else
        LOG_SIZE = strlen(MEMO_ALLOC.CONTENT);
    printf("Allocated %zu bytes  at %p for %s \n ", MEMO_ALLOC.SIZE, MEMO_ALLOC.CONTENT, MEMO_ALLOC.CONTEXT);
    MEMO_ALLOC.CONTENT = realloc(ptr, (LOG_SIZE + 1) * sizeof(MEMO_ALLOC.CONTENT));

}

void LOG_MEMO_DEALLOC(char *ptr,char *context)
{
    static S_MEMO_DEALLOC MEMO_DEALLOC;
    size_t LOG_SIZE;

    if(MEMO_DEALLOC.CONTENT != NULL)
        LOG_SIZE = 2; //1 + NULL
    else
        LOG_SIZE = strlen(MEMO_DEALLOC.CONTENT);
    printf("Deallocated  at %p [%s]\n ",  MEMO_DEALLOC.CONTENT, MEMO_DEALLOC.CONTEXT);
    MEMO_DEALLOC.CONTENT = realloc(ptr, (LOG_SIZE + 1) * sizeof(MEMO_DEALLOC.CONTENT));
}
