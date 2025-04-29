#include<stdio.h>
int main() {

  float BS,DA,HA,GS;
  
  

  printf("Ramesh's BS is: ");
  scanf("%f", &BS);

  DA= 0.4*BS;
  HA= 0.2*BS;
  
  GS= BS+HA+DA;

  printf("Ramesh's GS is %f", GS);

  return 0;

}