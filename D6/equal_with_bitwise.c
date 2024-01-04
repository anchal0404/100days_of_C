#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    if (!(num1^num2))
    {
        printf("Equal\n");
    }
    else
        printf("Not equal\n");
    
    return 0;
}
