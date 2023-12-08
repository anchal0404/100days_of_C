/*
Name:Anchal Rathore
Description: Count number of even and odd elements in an array
Date:08/12/2023
Sample INPUT and OUTPUT:
Input: 
int arr[5] = {2, 3, 4, 5, 6}
Output: 
Number of even elements = 3    
Number of odd elements = 2  
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int size,e_count=0,o_count=0;
    printf("Enter elements of array: ");
    scanf("%d",&size);
    int arr[size];

    for (int  i = 0; i < size; i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        if ((arr[i] & 1) == 0)
        {
            e_count++;
        }
        else
        {
            o_count++;
        }
    }
    printf("Number of even elements = %d\n",e_count);
    printf("Number of odd elements = %d\n",o_count);
    return 0;
}
