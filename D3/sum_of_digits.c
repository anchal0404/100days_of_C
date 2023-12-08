/*
Name:Anchal Rathore
Description: 
Date:
Sample INPUT and OUTPUT:
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,digit,sum=0;
    printf("Enter the number:");
    scanf("%d",&num);

    while (num!=0)
    {
        digit = num%10;
        sum+=digit;
        num/=10;
    }
   
    printf("Sum = %d",sum);
    
    
    
    return 0;
}
