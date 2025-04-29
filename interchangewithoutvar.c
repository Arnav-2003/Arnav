#include<stdio.h>
int main() {

  int a,b;

  printf("Enter num1 = ", a);
  scanf("%d", &a);

  printf("Enter num2 = ", b);
  scanf("%d", &b);

  a=a+b;
  b=a-b;
  a=a-b;

  printf("Initial value of a is %d\n", a);
  printf("Initial value of b is %d\n", b);

  return 0;
}