#include <stdio.h>
int sum_of_naturals(int num)
{
	if(num<=1)
		return num;
	return num + sum_of_naturals(num-1);
}
int main(int argc, char const *argv[])
{
	int num;

	scanf("%d",&num);

	int f = sum_of_naturals(num);

	printf("%d ",f);
	return 0;
}