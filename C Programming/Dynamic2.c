#include<stdio.h>
#include<stdlib.h>  //for malloc,calloc,realloc & free

int main()
{
    int Arr[5]; //Static Memory Allocation  //20byte Memory(5*4=20)
    
    int Size = 0;
    
    int * ptr = NULL;
    
    printf("Enter Number Of Elements:\n");
    scanf("%d",&Size);
    
    ptr = (int *)calloc(Size , sizeof(int));    //("int * "is Type Casting )
    
    //Use the Memory
    
    free(ptr);  //Free Up the Dynamic Memory Allocation i.e Deallocate the Memory
    
    return 0;
}