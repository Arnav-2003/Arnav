#include<stdio.h>
int main() {

  int a,b,c;
  
  printf("Enter num1 = ");
  scanf("%d", &a);

  printf("Enter num2 = ");
  scanf("%d", &b);

  printf("Initially value of a is %d\n", a);
  printf("Initially value of b is %d\n", b);

  c=a;
  a=b;
  b=c;

  printf("Interchange the value of a in %d\n", a);
  printf("Interchange the value of b in %d\n", b);

  return 0;

}