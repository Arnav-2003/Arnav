#include<stdio.h>
int main() {

  int length,breadth,area,perimeter;

  printf("The length of the rectangle: ");
  scanf("%d", &length);
  printf("The breadth of the rectangle: ");
  scanf("%d", &breadth);

  area = length*breadth;
  printf("The area of the rectangle is %d\n", area);

  perimeter = 2*(length+breadth);
  printf("The perimeter of the recatngle is %d\n", perimeter);

  return 0;
 
}
