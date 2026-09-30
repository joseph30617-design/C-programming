#include <stdio.h>

float calculatetax(float gross_salary);

int main (){
    
    float gross_salary;
    float tax;
    float net_salary;
    
    printf("Enter the gross_salary \n");
    scanf("%f",&gross_salary);
    
    tax=calculatetax(gross_salary);
    net_salary=gross_salary-tax;
    
    printf("The gross_salary is ksh %.2f \n", gross_salary);
    printf("The tax is ksh %.2f \n",tax);
    printf("The net_salary paid is ksh %.2f\n",net_salary);
    
 return 0;
 }   
 float calculatetax(float gross_salary){
 float tax;
 
if (gross_salary <=30000)
    tax=gross_salary *0.05;
else if (gross_salary<=59999)
    tax=gross_salary *0.1;
else 
    tax=gross_salary * 0.15;
    
  return tax;
 }          