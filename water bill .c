#include <stdio.h>

float calculatebill (int units);

int main(){

float bill;
int units;

    printf("Enter water  units consumed\n");
    scanf(" %d", &units);
    
    bill=calculatebill(units);
    
    printf("\nThe water  units consumed is %.2d\n", units);
    printf("\nThe water bill is %.2f\n", bill);
    
    return 0;
  }
  
float calculatebill(int units){
    
    float bill;
if (units<=30){
    bill=units*20;
    }
else if (units<=60){
    bill =units*25;
   }
else {
    bill=units*30;
   }
   
   return bill;
   }