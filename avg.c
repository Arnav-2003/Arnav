#include<stdio.h>
int main() {

  float num1,num2,num3,avg;

  printf("Enter the first number: ");
  scanf("%f", &num1);
  printf("Enter the second number: ");
  scanf("%f", &num2);
  printf("Enter the third number: ");
  scanf("%f", &num3);
  
  avg=(num1+num2+num3)/3;
  printf("Avg of %f and %f and %f is %f", num1,num2,num3,avg);

  return 1;
}