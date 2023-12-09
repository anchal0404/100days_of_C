/*
Name:Anchal Rathore
Description: Program for Sum of the digits of a given number
Date:08/12/2023
Sample INPUT and OUTPUT:
Enter the number:687
Sum = 21
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
