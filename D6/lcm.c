#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num1,num2,max=0,lcm = 0;
    scanf("%d %d",&num1,&num2);
    if (num1>num2)
    {
        max =num1;
    }
    else
    {
        max = num2;
    }
    while (1)
    {
        if (max%num1==0 && max%num2==0)
        {
            printf("LCM = %d",max);
            break;
        }
        max++;
    }
    
    
    return 0;
}
