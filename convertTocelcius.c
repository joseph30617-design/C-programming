#include <stdio.h>

//function prototype
int convertTocelcius(int degrees,int F);

//call function

int main ()
{
    int degrees;
    int F;
    int result;
    
    printf("Enter fahrenheight \n");
    scanf("%d" ,&F);
    
    result=convertTocelcius(degrees,F);
    
    printf("The answer is %d " ,result);
    
    return 0;
}
//function definition 

int convertTocelcius(int degrees,int F)
{
    int C;
    
    C=(F-32)*5/9;
    
    return C;

}
