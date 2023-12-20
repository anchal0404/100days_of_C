#include <stdio.h>
#include <string.h>
/*
Name:Anchal Rathore
Description: Students Marks Sum
Date:10/12/2023
Sample INPUT and OUTPUT:
3
3
2
5
b
Output 
8
*/
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) 
{
  //Write your code here.
  int sum_b=0;
  int sum_g=0;
  for (int i = 0; i < number_of_students; i++)
  {
    if(i%2==0)
    {
        sum_b += marks[i];
    }
    else
    {
        sum_g += marks[i];
    }
    
  }
  
  if (gender == 'b')
  {
    return sum_b;
  }
  else if(gender == 'g')
  {
    return sum_g;
  }

  return -1;
}

int main() {
    int number_of_students;
    char gender;
    int sum;
    printf("Enter number of students:");
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
    
    printf("Enter ther marks of student:");
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    printf("Enter the gender of students:");
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}