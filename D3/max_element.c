/*
Name:Anchal Rathore
Description: Program to find the maximum element in a Matrix
Date:08/12/2023
Sample INPUT and OUTPUT:
Input: max[4][4] = {{1, 2, 3, 4},
                    {25, 6, 7, 8},
                    {9, 10, 11, 12},
                    {13, 14, 15, 16}};
Output: 25

Input: mat[3][4] = {{9, 8, 7, 6},
                    {5, 4, 3, 2},
                    {1, 0, 12, 45}};
Output: 45
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
