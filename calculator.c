#include<stdio.h>
int main() {

  float num1,num2,sum,sub,mul,div;

  printf("Enter the first number: ");
  scanf("%f", &num1);
  printf("Enter the second number: ");
  scanf("%f", &num2);
  sum= num1+num2;
  sub= num1-num2;
  mul= num1*num2;
  div= num1/num2;

  printf("Sum of %f and %f is %f", num1,num2,sum);
  printf("\nSub of %f and %f is %f", num1,num2,sub);
  printf("\nMul of %f and %f is %f", num1,num2,mul);
  printf("\nDiv of %f and %f is %f", num1,num2,div);

  return 0;

}