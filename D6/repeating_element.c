#include <stdio.h>

int main(int argc, char const *argv[])
{
	int size;

	scanf("%d",&size);

	for (int i = 0; i < size; ++i)
	{
		scanf("%d",&arr[i]);
	}

	int nrr[size];

	for (int i = 0; i < size; ++i)
	{
		if (nrr[i] == 0)
		{
			int count = 1;
			for (int j = i+1; j < size; ++j)
			{
				if (arr[i]==arr[j])
				{
					count++;
					nrr[j] = 1;
				}
			}
			if(count>1)
				printf("%d ",arr[i]);
		}
	}
	return 0;
}