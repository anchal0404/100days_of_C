/*
Name:Anchal Rathore
Description: Priting X pattern.
Date:05/12/2023
Sample INPUT and OUTPUT:
Enter the number:5
1   5
 2 4
  3
 2 4
1   5
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    /*Prompting from the user*/
    printf("Enter the number:");
    scanf("%d",&n);
    int i,j;

    //Loops for printing the pattern.
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            //Condition for printing numeric value.
            if((i==j) || (i+j == n+1))
            {
                printf("%d",j);
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
