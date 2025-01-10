#include<stdio.h>   //standard input output
#include<stdlib.h>  //standard library
#include<unistd.h>  //universal standard
#include<fcntl.h>   //file control

int main()
{
    char Name [30];

    int fd = 0; //fd = file descriptor

    printf("Enter the name of file that you want to creat : \n");
    scanf("%s",Name);

    fd = creat(Name, 0777); //it contains two parameters 1)file name 2)0777 is permission for all
    if(fd == -1)
    {
        printf("Unable to Create File \n");
    }
    else
    {
        printf("File is created with FD %d \n",fd);
    }
    
    return 0;
}