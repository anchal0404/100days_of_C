/*
Name:Anchal Rathore
Description: 
Date:
Sample INPUT and OUTPUT:
*/
#include<stdio.h>
int sum_ele(int *);
int main(int argc, char const *argv[])
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }

    int sum = sum_ele(arr);
    printf("Sum = %d",sum);
    return 0;
}

int sum_ele(int arr[10])
{
    int sum=0;
    for (int i = 0; i < 10; i++)
    {
        sum+=arr[i];
    }
    return sum;
}
