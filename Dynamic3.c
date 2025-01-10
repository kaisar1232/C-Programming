#include<stdio.h>
#include<stdlib.h>  //for malloc,calloc,realloc & free

int main()
{
    int * ptr = NULL;
    
    ptr = (int *)malloc(5 * sizeof(int));    //("int * "is Type Casting )
    
    //Use the Memory
    ptr = (int *) realloc(ptr, 10 * sizeof(int));   //Increasing Memory
    
    ptr = (int *)realloc(ptr,3 * sizeof(int));      //Decreasing Memory
    
    free(ptr);  //Free Up the Dynamic Memory Allocation i.e Deallocate the Memory
    
    return 0;
}