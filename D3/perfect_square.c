

/*
Name:Anchal Rathore
Description: Check if given number is perfect square
Date:
Sample INPUT and OUTPUT:
Input : n = 2500
Output : Yes
Explanation: 2500 is a perfect square of 50

Input : n = 2555
Output : No
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,flag = 0,val;
    printf("N = ");
    scanf("%d",&num);

    if ( num == 1 || num == 0)
    {
        printf("Perfect square");
    }
    int i=2;
    while (i<=num)
    {
        if(num==(i*i))
        {   flag = 1;
            printf("%d is a Perfect Square of %d\n",num,i);
            break;
        }
        i++;
    }
    if(flag == 0)
        printf("Not a perfect square\n");
    return 0;
}
