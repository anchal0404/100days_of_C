#include<stdio.h>

int main(int argc, char const *argv[])
{
    int rev=0,num,original_num;
    scanf("%d",&num);
    original_num= num;
    while (num!=0)
    {
        rev = rev*10+(num%10);
        num/=10;
    }
    if(rev ==original_num)
        printf("Palindrom\n");
    else
        printf("Not palindrom\n");
    
    return 0;
}
