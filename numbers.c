#include<stdio.h>
int main() {

  int num = 1;
  while (num<=10)
  {
    printf("%d\n", num);
    num++;
  }
  printf("First loop has ended\n");

  int num2 = 100;
  while (num2>0)
  {
    printf("%d\n", num2);
    num2--;
  }

  printf("Second loop has ended");
  return 0;
  
}