/*
Name:Anchal Rathore
Description: C Program to print value and address of elements of an array without pointer
Date:20.12.2023
Sample INPUT and OUTPUT:
Enter the array 5 elements : 5
3
8
9
1

Array elements with their addresses ::
Value of arr[0] = 5     Address of arr[0] = 000000000062FE30
Value of arr[1] = 3     Address of arr[1] = 000000000062FE34
Value of arr[2] = 8     Address of arr[2] = 000000000062FE38
Value of arr[3] = 9     Address of arr[3] = 000000000062FE3C
Value of arr[4] = 1     Address of arr[4] = 000000000062FE40
*/
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array elements with their address::\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Value of arr[%d] = ",i);
        printf("%d",arr[i]);
        printf("   Address of arr[%d] = ",i);
        printf("%p",&arr[i]);
        printf("\n");
    }
    return 0;
}

