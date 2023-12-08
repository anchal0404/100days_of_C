/*
Name:Anchal Rathore
Description: 
Date:
Sample INPUT and OUTPUT:
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,rev;
    printf("N = ");
    scanf("%d",&n);

    int num=n;
    while(n!=0)
    {
        int rem = n%10;
        rev = rev*10 + rem;
        n/=10;
    }
    
    if (num==rev)    
    {
        printf("Palindrome");
    }
    else
    {
        printf("NO");
    }
    
    
    return 0;
}
