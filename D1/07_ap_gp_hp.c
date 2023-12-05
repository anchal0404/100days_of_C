/*
Name:Anchal Rathore
Description : WAP WAP to generate AP, GP, HP series
Date : 01.12.2023
Sample Input:Enter the First Number 'A': 2
             Enter the Common Difference / Ratio 'R': 3
             Enter the number of terms 'N': 5
Sample Output:
AP = 2, 5, 8, 11, 14
GP = 2, 6, 18, 54, 162
HP = 0.500000, 0.200000, 0.125000, 0.090909, 0.071428
*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    /*Variable declaration*/
    int A,N;
    float R,t,denom;
    /*Prompting values from the user.*/
    printf("Enter the First number 'A': ");
    scanf("%d",&A);

    printf("Enter the common difference/Ratio 'R': ");
    scanf("%f",&R);

    printf("Enter the number of terms 'N': ");
    scanf("%d",&N);
    
    //For AP series
    t = A;
    printf("AP = %d ",(int)t);
    for (int i = 1; i < N; i++)
    {
        t += R;
        printf(", %d",(int)t);   
    }
    printf("\n");

    //For GP Series
    t = A;
    printf("GP = %d ",(int)t);
    for (int i = 1; i < N; i++)
    {
        t*=R;
        printf(", %d",(int)t);
    }
    printf("\n");

    //HP series
    t = 1/(float)A;
    printf("HP = %f ",t);
    for (int i = 1; i < N; i++)
    {
        denom = A + (i*R);
        t = (float)1/denom;
        printf(" ,%f",t);
    }
    return 0;
}
