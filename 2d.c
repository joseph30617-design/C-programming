#include <stdio.h>

int main (){

int marks [3][3]={6,2,7,8,1,5,3,4,2};
int i;
int j;

    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    
    printf("%d ",marks[i][j]);
    
    }
    printf("\n");
    }
    
    return 0;
    }