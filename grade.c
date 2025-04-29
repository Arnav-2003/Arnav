#include<stdio.h>
int main() {

  int marks;
  printf("Enter the marks: ");
  scanf("%d", &marks);

  if (marks>=90)
  {
    printf("grade Excellent");
  }
  else if (marks>=80)
  {
    printf("grade A");
  }
  else if (marks>=70)
  {
    printf("grade B");
  }
  else if (marks>=60)
  {
    printf("grade C");
  }
  else if (marks>=50)
  {
    printf("grade D");
  }
  else
  {
    printf("fail");
  }

  return 0;
  
}