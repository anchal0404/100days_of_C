/*
Name:Anchal Rathore
Description: 
Date:
Sample INPUT and OUTPUT:
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int row,col;
    printf("Enter row and col:");
    scanf("%d %d",&row,&col);
    int arr[row][col];
    printf("Enter elements for 2D array:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("arr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int max = arr[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j] >max)
            {
                max = arr[i][j];
            }
        }
    }
    printf("Max element = %d",max);
    return 0;
}
