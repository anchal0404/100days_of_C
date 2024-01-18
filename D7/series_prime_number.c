#include<stdio.h>

int series_prime(int num2)
{
	int flag = 1;
	for (int i = 2; i*i <= num2; ++i)
	{
		if(num2%i == 0)
		{
			flag = 0;
			break;
		}
		
	}
	return flag;
}
int main(int argc, char const *argv[])
{
	int num1,num2;
	scanf("%d %d",&num1,&num2);

	for (int i = num1; i <= num2; ++i)
	{
		int j = series_prime(i);
		if(j == 1)
			printf("%d ",i);
	}
	return 0;
}