#include<stdio.h>
#pragma pack(1) //we can use this beacuse we use char
                //ine the below Struct Student
struct Student
{
    int RollNo;   
    char Division;
    int Age;
    float Marks;
    int Salary;
};

int main()
{
    struct Student Amit;
    

    printf("Size of object is %d\n",sizeof(Amit));

    
    
    return 0;
}
