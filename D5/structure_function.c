/*
Name:Anchal Rathore
Description: Write a C Program to understand how structure members sent to function
Date:20.12.2023
Sample INPUT and OUTPUT:
Name   - John   Rollno - 12     Marks  - 87
Name   - Max Payne      Rollno - 18     Marks  - 90
*/
#include<stdio.h>
#include<string.h>


struct Student
{
    int roll_id;
    float marks;
    char name[20];
};
void display(char name[20],int ,int );
int main(int argc, char const *argv[])
{
    struct Student s1 = {3,45.5,"Krishna"};
    struct Student s2;
    strcpy(s2.name,"Raghav");
    s2.roll_id = 18;
    s2.marks = 44.24;
    display(s1.roll_id,s1.marks,s1.name);
    display(s2.roll_id,s2.marks,s2.name);

    return 0;
}

void display(char name[],int roll_id,int marks)
{
    printf("Name - %s\t",name);
    printf("Roll_No - %d\t",roll_id);
    printf("Marks - %.2f\n",marks);
}

