/*
Name:Anchal Rathore
Description:WAP to generate negitive Fibonacci numbers
Date: 1/12/2023
Sample Input:Enter a number:-8
Sample Output: 0 1 -1 2 -3 5 -8
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,first = 0,second = 1,next = 0,count = 0;
    //Prompt the user to enter the num.
    printf("Enter a number:");
    scanf("%d",&num);

    //Num negative
    if (num>0)
    {
        printf("Invalid Input");
        return 1;
    }
    
    //Negative Fibonacci series.
    while (next<=-num && next>=num)
    {
        printf("%d ",next);
        first = second;
        second = next;
        next = first - second;
        count++;
    }
    return 0;
}