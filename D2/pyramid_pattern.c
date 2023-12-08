/*
Name:Anchal Rathore
Description: WAP to print pyramid pattern
Date:
Sample INPUT and OUTPUT:
*/
#include<stdio.h>
/*int main(int argc, char const *argv[])
{
    int n;
    printf("Enter 'n':");
    scanf("%d",&n);
    for (int i = 4; i < n; i++)
    {
        if (i%4==0)
        {
            printf("%d\n",i);
        }
        
    }
        
    return 0;
}*/
/*
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}*/

int main(int argc, char const *argv[])
{
    int n,pro;
    printf("Enter the n value:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1;j <11; j++)
        {
            pro=j*i;
            printf("%d ",pro);
        }
        printf("\n");
    }
    
    return 0;
}

