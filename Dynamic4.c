#include<stdio.h>
#include<stdlib.h>  

int main()
{
    int * ptr = NULL;
       
    ptr = (int * ) realloc(NULL,  5 * sizeof(int));   //It Behaves Like  malloc
    //Use the Memory
    ptr = (int * )realloc(ptr,0);   //free

    return 0;
}