#include<stdio.h>   //standard input output
#include<stdlib.h>  //standard library
#include<unistd.h>  //universal standard
#include<fcntl.h>   //file control

int main()
{
    char Name [30];
    
    printf("Enter the name of file that you want to Delete : \n");
    scanf("%s",Name);

    unlink(Name); 
    
    return 0;
}