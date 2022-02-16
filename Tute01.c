/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1;
	int mark2;
	
	printf("enter mark1:");
	scanf("%d",&mark1);
	printf("enter mark2:");
	scanf("%d",&mark2);
	 
	 int sum = mark1+mark2;
	 int avarage= sum/2.0f;
	 
	 printf("sum is %d\n", sum);
	 printf(" avarage is %d", avarage);


  return 0;
}

