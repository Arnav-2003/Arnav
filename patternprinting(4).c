#include<stdio.h>
int main() {

  int i,j;

  for ( i = 6; i>=4; --i)
  {
    for ( j = 3; j<i; ++j)
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}