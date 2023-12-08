/*
Name:Anchal Rathore
Description: Program to print the given digit in words
Date:08/12/2023
Sample INPUT and OUTPUT:
Input: N = 1234 
Output: One Two Three Four
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,digit;
    printf("N = ");
    scanf("%d",&num);

    while(num!=0)
    {
        digit = (digit*10)+ (num%10);
        num/=10;
    }
    while (digit!=0)
    {
        switch (digit%10)
        {
        case 0:
            printf("Zero");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        default:
            break;
        }
        digit = digit/10;
    }
    

    return 0;
}
