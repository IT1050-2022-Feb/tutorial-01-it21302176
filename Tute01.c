/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float eng,math;
  float total,average;

  printf("Enter marks of two sub:\n");
  scanf("%f%f",&eng, &math);

  total=eng+math;
  printf("Total marks=%.2f\n",total);

  average=total/2.0;
  printf("Average =%.2f\n",average);
  return 0;
}

