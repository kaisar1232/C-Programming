#include<stdio.h>

int Multiplication(int No1, int No2)
{
    int Ans = 0;
    Ans = No1 * No2;
    return Ans;
}
int main()
{
    int Value1 = 0;
    int Value2 = 0;
    int Ret = 0;
    
    printf("Enter 1st Number\n");
    scanf("%d",&Value1);
    
    printf("Enter 2nd Number\n");
    scanf("%d",&Value2);

    Ret = Multiplication(Value1,Value2);

    printf("Answer is:%d\n",Ret);

    return 0;
}