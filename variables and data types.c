//variables and and data types 

#include <stdio.h>

int main (){
    //declare and initialize variables 
    char grade = 'A';//%c
    char name[15]=("joseph");//%s
    int age = 20;//%d
    float marks =70 ;//%f
    double pi = 3.142;//%lf 
    
    printf("the grade is %c \n",grade);
    printf("my name is %s \n",name );
    printf("I am %d years old \n",age);
    printf("I scored %.2f marks in my KCSE \n",marks);
    printf("the value of pi is %.3lf \n",pi);
    return 0;
}    