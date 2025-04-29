#include<stdio.h>
int main() {

  int num,rem;
  printf("Enter the num: ");
  scanf("%d", &num);

  rem=num%2;
  if (rem==0)
  {
    printf("The entered number is even");
  }
  else
  {
    printf("The entered number is odd");
  }

  return 0;
}