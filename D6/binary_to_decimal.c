#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num =11011;
    
    int base = 1;
    int deci = 0;
    while (num!=0)
    {
       deci = deci + (num%10)*base;
       num=num/10;
       base=base*2;
    }
    printf("%d\n",deci);
    return 0;
}
