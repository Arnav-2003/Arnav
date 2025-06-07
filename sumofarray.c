#include<stdio.h>
int main() {

  int a[2][3],sum=0, i,j;

  printf("Elements of matrix = ");

  for ( i = 0; i < 2; i++)
  {
    for ( j = 0; j < 3; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
    printf("Matrix is:\n");

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d\t", a[i][j]);
      sum = sum + a[i][j];
    }
   printf("\n");
  }
   printf("\nSum = %d", sum);
  return 0;
  
}