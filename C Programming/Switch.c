#include<stdio.h>

int main()
{
    int Standard = 0;

    printf("Enter Your Standard:\n");
    scanf("%d",&Standard);

    switch (Standard)
    {
        case 1:
        printf("Your Exam Is At 7 AM \n");
        break;

        case 2:
        printf("Your Exam Is At 8 AM \n");
        break;
        
        case 3 :
        printf("Your Exam Is At 9 AM \n");
        break;
        
        case 4 :
        printf("Your Exam Is At 10 AM \n");
        break;

        default:
        printf("Wrong Choice\n");

    }

    return 0;

}