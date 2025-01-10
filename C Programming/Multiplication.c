#include<stdio.h>

int main()
{
    int Value1 = 0 , Value2 = 0 ;
    int Ret = 0;
    
    printf("Enter Fist Number\n");
    scanf("%d",&Value1);
    
    printf("Enter Second Number\n");
    scanf("%d",&Value2);

    Ret = Value1 * Value2;
    
    printf("Answer is: %d\n",Ret);

    return 0;
}
