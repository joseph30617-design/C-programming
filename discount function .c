#include <stdio.h>

double calculatediscount (double amount);

int main (){
    
    double purchase_amount,discount,final_amount;
    
    printf("Enter purchase_amount \n");
    scanf(" %lf",&purchase_amount);
    
    discount =calculatediscount(purchase_amount);
    final_amount =purchase_amount-discount;
    
    printf("The purchase_amount: %.2lf\n",purchase_amount );
    printf("The discount is %.2lf \n",discount );
    printf("The final_amount is %.2lf \n",final_amount);
    
    return 0;
   }
   
double calculatediscount(double amount){

double discount ;

if (amount <=500)
    discount =amount * 0.05;
else if (amount <=9999)
    discount=amount * 0.1;
 else 
    discount=amount * 0.15;
  return discount;
}   