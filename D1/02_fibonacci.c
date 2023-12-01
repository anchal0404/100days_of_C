/*
Name:Anchal Rathore
Description:WAP to generate positive Fibonacci numbers
Date: 1/12/2023
Sample Input:Enter a number:30
Sample Output: 0 1 1 2 3 5 8 13 21
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,first = 0,second = 1,next = 0,count = 0;
    //Prompt the user to enter the num.
    printf("Enter a number:");
    scanf("%d",&num);

    //Num positive
    if (num<0)
    {
        printf("Invalid Input");
        return 1;
    }
    
    //Fibonacci series.
    while (next<=num)
    {
        printf("%d ",next);
        first = second;
        second = next;
        next = first + second;
        count++;
    }
    return 0;
}
