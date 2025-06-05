#include<stdio.h>
int main(){

  int marks[2][2][2];

  for (int row = 0; row < 2; row++)
  {
    for (int col = 0; col < 2; col++)
    {
      for (int x = 0; x < 2; x++)
      {
         printf("Enter the marks of Student: %d, Class: %d, Subject: %d:", row+1, col+1, x+1);
      scanf("%d", &marks[row][col][x]);
      
      }
      
      
    }
    
  }
  return 0;
}