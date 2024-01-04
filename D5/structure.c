/*
Name:Anchal Rathore
Description: Printing  structure of Students
Date:20.12.2023
Sample INPUT and OUTPUT:
S1 : 2 33.40 Anchal
S2 : 4 22.00 Lila
S3 : 6 55.00 Kilo
*/
#include<stdio.h>
struct Student
{
    int roll_id;
    float marks;
    char name[20];
};

int main(int argc, char const *argv[])
{
    struct Student s1 = {2,33.4,"Anchal"};
    struct Student s2 = {4,22,"Lila"};
    struct Student s3 = {6,55,"Kilo"};
    printf("S1 : %d %.2f %s\n",s1.roll_id,s1.marks,s1.name);
    printf("S2 : %d %.2f %s\n",s2.roll_id,s2.marks,s2.name);
    printf("S3 : %d %.2f %s\n",s3.roll_id,s3.marks,s3.name);
    return 0;
}

