#include<stdio.h>
int sum( int n1, int n2);
int main() {

  int a = 5, b = 3, c = 4, d = 8, result, e;

 printf(" Addition is %d\n", sum(a,b));
  result = sum(c, d);
  e = sum(9,8);
  printf("%d\n", result);
  printf("%d", e);
  return 0;
}
int sum( int n1, int n2)
{
  int addition;
  addition = n1 + n2;
  return addition;

}