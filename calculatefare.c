//calculate bill
#include <stdio.h>

//function prototype 
int calculatefare(int distance,int price);

int main ()
{
    int distance;
    int price=50;
    float total;
    
//function call

    printf("Enter distance traveled in Km: \n");
    scanf(" %d", &distance);   
     
     
     total=calculatefare(distance,price);
    
    printf("The total is ksh. %.2f\n" ,total);
    return 0 ;
}
//function definition
   int calculatefare(int distance ,int price)
{
    int amount;
    
  amount=distance*price;
    
    return amount;
 }
 
    