#include<stdio.h>

void Display()      //Display Is User Defined function....And void Is Return Value...
{
    printf("My Name Is Kaisar Attar\n");
}

int main()      //It Is Entry Point Function...
{
    printf("Inside the Main Function\n");

    Display();    //It IS Function Call...

    printf("End Of Main\n");

    return 0;           //It Shows To OS That Code Successfully Completed...
}