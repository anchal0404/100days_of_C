#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num1,num2,min=0,gcd = 0;
    scanf("%d %d",&num1,&num2);
    if (num1<num2)
    {
        min =num1;
    }
    else
    {
        min = num2;
    }

    for (int i = 1; i<=num1 && i<=num2; ++i)
    {
        if((num1%i==0) && (num2%i==0))
        {
            gcd = i;
        }
        
    }
    printf("GCD = %d\n",gcd);
    
    return 0;
}
