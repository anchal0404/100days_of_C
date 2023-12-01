/*
Name:Anchal Rathore
Description:WAP to check if number is odd or even
Date: 1/12/2023
Sample Input:Enter the value of 'n' : -2
Sample Output: -2 is negative even number.
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the value of 'n': ");
    scanf("%d",&num);

    //Conditional statement for checking number even of odd and negative and positive.
    if(num>0) //Check for positive number.
    {
        //Even 
        if(num%2==0)
        {
            printf("%d is positive even number",num);
        }
        else
        {
            printf("%d is positive odd number",num);
        }
    }
    //Check for negative num
    else if(num<0)
    {
        //Even
        if (num%2==0)
        {
            printf("%d is negative even number",num);
        }
        //odd
        else
        {
            printf("%d is negative odd number",num);
        }
    }
    //For number zero
    else
    {
        printf("%d is neither odd nor even",num);
    }
    return 0; //Successful execution of program without any error.
}
