#include<stdio.h>
int linearsearch(int arr[], int size, int value);
int main() {

  int a[10] = {9,8,7,0,6,5,3,2,4,1};
  int result, key;

  printf("Enter the number to find");
  scanf("%d", &key);

  result = linearsearch(a,10,key);
  if (result == -1)
  {
    printf("Not found");
  }
  else 
  {
    printf("The number %d is found at index %d", key, result);
  }
  return 0;  
}

int linearsearch(int arr[], int size, int value)
{
  int i;
  for ( i = 0; i < size ; i++)
  {
    if (arr[i] == value)
    {
      return i;
    }

  }
  return -1;
  
}