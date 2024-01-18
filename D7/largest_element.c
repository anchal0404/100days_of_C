#include<stdio.h>
void swap(int *num1,int *num2)
{
	*num1 = *num1 ^ *num2;
	*num2 = *num1 ^ *num2;
	*num1 = *num1 ^ *num2;

}
int main(int argc, char const *argv[])
{
	int row,col;
	scanf("%d %d",&row,&col);

	int arr[row][col];

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col ; ++j)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			if(arr[j+1]<arr[j])
			{
				swap(&j,&j+1);
			}
		}
	}

	printf("Largest %d",arr[row-1][col-1]);
	return 0;
}