#include<stdio.h>   //standard input output
#include<stdlib.h>  //standard library
#include<unistd.h>  //universal standard
#include<fcntl.h>   //file control

int main()
{
    char Name [30];
    
    int fd = 0; //fd = file descriptor
    int iRet  = 0 ;
    char Data [30] = {'\0'};
    

    printf("Enter the name of file that you want to read : \n");
    scanf("%s",Name);

    fd = open(Name, O_RDWR); //macro 
    
    iRet = read(fd,Data,10);
    
    printf("%d bytes gets successfully read  \n",iRet);
    
    printf("%s \n",Data);
    
    close(fd);
    
    return 0;
}