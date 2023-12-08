/*
Name:Anchal Rathore
Description: Printing triangle pattern
Date:05.12.2023
Sample INPUT and OUTPUT:
Enter the number: 6
1 2 3 4 5 6
7    8
9   10
11  12
13 14
15

*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,j,count=0;
    printf("Enter the number: ");
    scanf("%d",&n);

    for (i = 1; i <= n; i++)
    {
        for ( j = i; j <= n; j++)
        {
            if(i == 1 || i == j || j==n )
            {
                ++count;
                printf("%d ",count);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        
    }
    
    
    return 0;
}
