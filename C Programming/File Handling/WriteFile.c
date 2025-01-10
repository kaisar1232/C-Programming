#include<stdio.h>   //standard input output
#include<stdlib.h>  //standard library
#include<unistd.h>  //universal standard
#include<fcntl.h>   //file control

int main()
{
    char Name [30];
    
    int fd = 0; //fd = file descriptor
    int iRet  = 0 ;
    char Data [] = "Marvellous Infosystems";

    printf("Enter the name of file that you want to Write : \n");
    scanf("%s",Name);

    fd = open(Name, O_RDWR); //macro 

    iRet = write(fd,Data,22);//here we also use stdlen funtion
    
    printf("%d bytes gets successfully written into the file \n",iRet);

    close(fd);
    
    return 0;
}