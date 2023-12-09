/*
Name:Anchal Rathore
Description: Difference between sum of the squares of first n natural numbers and square of sum
Date:09/10/2023
Sample INPUT and OUTPUT:
Input : n = 3
Output : 22
Sum of first three numbers is 3 + 2 + 1 = 6
Square of the sum =  36
Sum of squares of first three is 9 + 4 + 1 = 14
Absolute difference = 36 - 14 = 22

Input : n = 10
Output : 2640
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,sum=0,sq_sum=0;
    printf("n = ");
    scanf("%d",&n);

    printf("Sum = ");
    for (int i = 1; i <=n; i++)
    {
        sum+=i;
        sq_sum += (i*i);
    }
    int sum_sq = (sum*sum);
    int diff = sum_sq - sq_sum ;
    printf("Absolute difference = %d - %d = %d",sq_sum,sum_sq,diff);

    
    return 0;
}
