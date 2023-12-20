/*
Name:Anchal Rathore
Description: HCF of two numbers
Date:20/12/2023
Sample INPUT and OUTPUT:12 30
HCF = 6
*/
#include<stdio.h>
int gcd(int,int);
int main(int argc, char const *argv[])
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int hcf = gcd(num1,num2);
    printf("HCF = %d",hcf);
    return 0;
}

int gcd(int num1,int num2)
{
    int min=0;
    if(num1>num2)
    {
        min = num2;
    }
    else
    {
        min = num1;
    }

    int gcd = 0;
    for (int i = 2; i <= min; i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            gcd = i;
        }
    }
    return gcd;
    
}
