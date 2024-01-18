#include <stdio.h>

int is_prime(int num)
{
	int flag = 0;
	for (int i = 2; i*i <= num ; i++)
	{
		if(num%i==0)
		{
			flag = 1;
			break;
		}
	}

	if (!flag)
	{
		return 1;
	}
	else
		return 0;
}


int main(int argc, char const *argv[])
{
	int num;
	scanf("%d",&num);

	int ret = is_prime(num);

	if (ret)
	{
		printf("Prime number\n");
	}
	else
	{
		printf("Not a prime number\n");
	}

	return 0;
}