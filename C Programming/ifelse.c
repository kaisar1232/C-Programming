#include<stdio.h>

int main()
{
    int Standard = 0;

    printf("Enter Your Standard \n");
    scanf("%d",&Standard);

    if (Standard == 1)
    {
        printf("Your Exam Is At: 7 AM \n");
    }
    else if (Standard == 2)
    {
        printf("You Exam is At: 8 AM \n");
    }
    else if (Standard == 3)
    {
        printf("Your Exam Is At: 9 AM \n");
    }
    else if (Standard == 4)
    {
        printf("Your Exam IS At: 10 AM \n");
    }
    else
    {
        printf("No Exam Available For Your Standard...\n");
    }

    return 0;
 
}