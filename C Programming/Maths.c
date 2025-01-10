#include<stdio.h>

int Addition(int No1, int No2)
{
    
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;
}
int main()
{
    printf("Inside the main Function\n");

    int A = 10;
    int B = 11;
    int Ret = 0;

    Ret = Addition(A,B);

    printf("Answer is: %d\n",Ret);

    return 0;
}
