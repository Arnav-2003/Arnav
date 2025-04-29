#include<stdio.h>
int main() {

  float gs,bs,ta,hra;
  printf("Enter Basic Salary = \t");
  scanf("%f", &bs);

  ta=bs*(0.4);
  printf("Travelling Allowance= %f \t", ta);

  hra=bs*(0.2);
  printf("\nHouse rent allowance= %f\t", hra);

  gs=bs+ta+hra;
  printf("\nGross Salary= %f\t", gs);

  return 0;

}