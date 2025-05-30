#include<stdio.h>
int main() {
  int marks[3],i;
  for ( i = 0; i<3; i++)
  {
    printf("Enter the marks of %d student:", i+1);
    scanf("%d", &marks[i]);
  }
  for ( i = 0; i<3; i++)
  {
    printf("marks of %d are %d\n", i+1,marks[i]);
  }
  
  return 0;


}