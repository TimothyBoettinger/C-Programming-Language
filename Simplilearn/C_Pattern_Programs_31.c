//Pattern 31: Triangle Pattern
#include<stdio.h>

void main()

{    

int i,j,rows=5,k;

    for(i=0;i<rows;i++){

    for(k=1;k<rows-i;k++){

    printf(" ");

    }

    printf("*");

    for(j=0;j<=i-1;j++){

            printf("-");

    }

    for(j=1;j<i;j++){

    printf("-");

    }

    if(i>0){

    printf("*");

    }

    printf("\n");

    }

} 

