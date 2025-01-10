#include<stdio.h>   //standard input output
#include<stdlib.h>  //standard library
#include<unistd.h>  //universal standard
#include<fcntl.h>   //file control

int main()
{
    char Name [30];
    
    int fd = 0; //fd = file descriptor

    printf("Enter the name of file that you want to Open : \n");
    scanf("%s",Name);

    fd = open(Name, O_RDWR); //macro 
    /*
        list of macors for file handling
        1) O_RDONLY =>READ MODE
        2) O_WRONLY =>WRITE MODE
        3) O_RDWR => READ + WRITE MODE
    */
    if(fd == -1)
    {
        printf("Unable to Open File \n");
    }
    else
    {
        printf("File is Opened with FD %d \n",fd);
    }

    close(fd);
    
    return 0;
}