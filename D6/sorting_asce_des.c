#include <stdio.h>

int sort_asc_desc(int arr[],int size)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j <size-1-i ; ++j)
		{
			if (arr[j+1]<arr[j])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < size/2; ++i)
	{
		printf("%d ",arr[i]);
	}

	for (int i = size-1; i >=size/2 ; i--)
	{
		printf("%d ",arr[i]);
	}
}

int main(int argc, char const *argv[])
{
	int size;
	int arr[size];

	scanf("%d",&size);

	for (int i = 0; i < size; ++i)
	{
		scanf("%d",&arr[i]);
	}

	sort_asc_desc(arr,size);
	
	return 0;
}