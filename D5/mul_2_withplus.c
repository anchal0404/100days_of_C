/*
Name:Anchal Rathore
Description: Write a C program to multiply two numbers using plus operator
Date:20.12.2023
Sample INPUT and OUTPUT:6 7
42
*/
#include<stdio.h>
int mul_two(int ,int);
int main(int argc, char const *argv[])
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);

    int res = mul_two(num1,num2);
    printf("Mul = %d",res);

    return 0;
}

int mul_two(int num1,int num2)
{
    int mul=0;
    for (int i = 0; i <num2; i++)
    {
        mul+=num1;
    }
    return mul;
    
}
