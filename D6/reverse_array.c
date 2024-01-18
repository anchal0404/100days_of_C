#include <stdio.h>

int main(int argc, char const *argv[])
{
	int size;
	scanf("%d",&size);

	int arr[size];

	for (int i = 0; i < size; ++i)
	{
		scanf("%d",&arr[i]);
	}

	int j = size - 1;

	for (int i = 0; i < size/2; ++i)
	{
			int temp = arr[i];
			arr[i]  = arr[j];
			arr[j] = temp;
			j--;
	}

	for (int i = 0; i < size; ++i)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}