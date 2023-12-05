/*
Name:Anchal Rathore
Description : WAP to check if number is perfect or not
Date : 01.12.2023
Sample Input:Enter a number: 6
Sample Output:Yes, entered number is perfect number
*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,sum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    for (int i = 1; i < num; i++)
    {
        if (num%i==0)
        {
            sum+=i;
        }
        else
        {
            continue;
        }
    }
    if (sum==num)
    {
       printf("Yes,entered number is perfect number.\n");
    }
    else
    {
        printf("No,entered number is not a perfect number.\n");
    }
    return 0;
}
