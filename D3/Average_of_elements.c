/*
Name:Anchal Rathore
Description: Program for average of an array(iterative and recursive)
Date:08/12/2023
Sample INPUT and OUTPUT:
Input : arr[] = {1, 2, 3, 4, 5}
Output : 3
Sum of the elements is 1+2+3+4+5 = 15 
and total number of elements is 5.
So average is 15/5 = 3
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int size,sum=0;
    float average; 
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
        sum+=arr[i];
    }
    printf("Sum of the elements is %d\n",sum);
    average = (float)sum/size;
    printf("Average = %f",average);

    
    
    return 0;
}
