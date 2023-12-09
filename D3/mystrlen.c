/*
Name:Anchal Rathore
Description: Program to count vowels in a string (Iterative and Recursive)
Date:
Sample INPUT and OUTPUT:
Input : abc de
Output : 2

Input : geeksforgeeks portal
Output : 7
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    char str[30];
    printf("Enter String :");
    scanf("%[^\n]",str);
    int i,count=0;
    while (str[i]!='\0')
    {
        if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            count++;
        }
        i++;
    }
    printf("Size = %d",count);
    
    return 0;
}
