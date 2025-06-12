#include<stdio.h>
int main() {

  float a,b,c,sum1,sum2,sum3;

  printf("Enter the first side=\t ");
  scanf("%f", &a);
  printf("Enter the second side=\t ");
  scanf("%f", &b);

  printf("Enter the third side= ");
  scanf("%f", c);

  sum1=a+b;
  sum2=b+c;
  sum3=a+c;

  if (a==0||b==0||c==0)
  {
    printf("Triangle is not possible");
  }
  else if (sum1>c&&sum2>a&&sum3>b)
  {
    printf("The triangle is possible");
  }
  else 
  {
    printf("The triangle is not possible");
  }
  
  return 0;

}