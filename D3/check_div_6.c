/*
Name:Anchal Rathore
Description: Check if a large number is divisible by 6 or not
Date:08/12/2023
Sample INPUT and OUTPUT:
N = 12345
No
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("N = ");
    scanf("%d",&num);
    if (num%6==0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
