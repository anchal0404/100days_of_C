#include<stdio.h>

int factorial(int num)
{
	if(num == 1)
		return 1;
	return (num*factorial(num-1));
}

int main(int argc, char const *argv[])
{
	int num;
	scanf("%d",&num);
	int f = factorial(num);
	printf("%d",f);
	return 0;
}