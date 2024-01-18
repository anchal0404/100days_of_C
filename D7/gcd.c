#include<stdio.h>

int gcd(int num1,int num2)
{
	if(num2>num1)
		return gcd(num2,num1);
	if(num2==0)
		return num1;
	else
		return gcd(num2,num1%num2);
}
int main(int argc, char const *argv[])
{
	int num1,num2;
	gcd(num1,num2);

	return 0;
}