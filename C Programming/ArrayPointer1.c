#include<stdio.h>

int main()
{
    int Arr[5] = {10,20,30,40,50};


    printf("Base Address of array is: %d\n",Arr);
    printf("Base Address of array is: %d\n",&Arr);
    printf("Base Address of array is: %d\n",&(Arr[0]));

    printf("First Element is: %d\n",Arr[0]);
    printf("Second Element is: %d\n",Arr[1]);
    printf("Third Element is: %d\n",Arr[2]);

    printf("%d\n",Arr[2]);
    printf("%d\n",*(Arr + 2));
    printf("%d\n",*(2 + Arr));
    printf("%d\n",2[Arr]);
        
    return 0;
}