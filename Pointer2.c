#include<stdio.h>
int main()
{
    char ch = 'A';
    int i = 11;
    float f = 89.99f;
    double d = 90.99;

    char * cptr = &ch;
    int * iptr = &i;
    float * fptr = &f;
    double * dptr =&d;
    
    return 0;
}