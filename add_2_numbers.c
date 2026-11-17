//function add 2 numbers 
#include <stdio.h>
//function prototype 
int addition (int x,int y);

int main()
{
    int a,b,result;
//function call    
    printf("Enter number 1 \n");
    scanf("%d",&a);
    printf("Enter number 2 \n");
    scanf("%d",&b);
    
    result=addition(a,b);
    
    printf("addition result %d", result);
    
    return 0 ;
}    

//function definition 
int addition (int x,int y)
{
    int sum;
    sum=x+y;
    return sum;
}
