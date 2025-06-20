#include<stdio.h>
int BinarySearch(int arr[], int size, int value);
int main () {

  int a[10] = {4,8,9,10,11,13,15,18,20,23};
  int find, result;
  
  printf("Enter value to search\t");
  scanf("%d", &find);

  result = BinarySearch(a,10,find);
  if (result == -1)
  {
    printf("Not found");
  }
  else 
  {
    printf("The number %d is found at index %d", find, result);
  }
  return 0;  
}
int BinarySearch(int arr[], int size, int value)
{
  int low = 0, high = size-1, mid;
  while (low<=high)
  {
    mid = (high+low)/2;
    if (arr[mid] == value)
    {
      return mid;
    }
    else if (arr[mid]< value)
    {
      low = mid +1;
    }
    else 
    {
      high = mid -1;
    }
    
  }
  return -1;
}
