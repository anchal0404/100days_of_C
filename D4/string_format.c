/*
Name:Anchal Rathore
Description: Scan string
Date:10/12/2023
Sample INPUT and OUTPUT:
C
Language
Welcome to C!!
C
Language
Welcome to C!!
*/

#include<stdio.h>
#include<stdarg.h>
int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char ch;
    char sen[30];
    char str[50];
    
    scanf(" %c",&ch);
    while(getchar() != '\n');

    scanf("%s",str);
    while(getchar() != '\n');
    fgets(sen,sizeof(sen),stdin);
    
    printf("%c\n",ch);
    printf("%s\n",str);
    puts(sen);
    return 0;
}