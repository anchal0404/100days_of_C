/*
Name:Anchal Rathore
Description: 
Date:
Sample INPUT and OUTPUT:
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
