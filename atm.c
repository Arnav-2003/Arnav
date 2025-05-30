#include<stdio.h>
int main() {

  int pin,i;
  
  for ( i = 1; i <=3; i++)
  {
    
    printf("\nEnter the pin:");
    scanf("%d", &pin);
    if (pin==1234)
    {
      printf("\nCollect your cash");
      break;
    }
    else if (i==3)
    {
      printf("Your card is blocked");
      
    }
    else 
    {
      printf("Incorrect pin, please try again\n");
    }
    
    
  }
  
   
  return 0;
  
    
}


