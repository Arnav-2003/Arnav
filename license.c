#include<stdio.h>
int main() {

  int age;
  printf("Welcome to ARTO, please enter your age: ");
  scanf("%d", &age);

  if (age<18)
  {
    printf("You are not eligible for license because you are too young\n");
  }
  else if (age>70)
  {
    printf("You are not eligible for license because you are too old\n");
  }
  else
  {
    printf("You are eligible for license\n");
  }

  printf("Your age is: %d", age);
  return 0;
  
}