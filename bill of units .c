#include<stdio.h>

float calculatebill(int units);

int main(){

    int units;
    float bill;

    printf("Enter units consumed \n");
    scanf(" %d",&units );
    
    bill=calculatebill(units);
    
    printf("The units consumed is %d \n",units);
    printf("The Bill is ksh %.2lf \n", bill);
    
return 0;
}


float  calculatebill (int units){

    float  bill;
    
if (units <=100)
    bill=units*10;
else if (units<=200)
    bill=units*15;
else
    bill=units*20;
    
 return bill;
 }               