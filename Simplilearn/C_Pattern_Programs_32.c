//Pattern 32: Full Diamond
#include<stdio.h>

void main(){

    int i,j,k,rows=5;

    for(i=1;i<=rows;i++)

    {

    for(j=1;j<=rows-i;j++){

        printf(" ");

}

if(i%2==1){

        for(k=1;k<=2*i-1;k++){

        printf("*");

    }

        }else{

            for(k=1;k<=2*i-1;k++){

        printf("-");

    }

        }

printf("\n");

    }

    for(i=rows;i>=1;i--)

    {

    for(j=rows;j>=i;j--){

    printf(" ");

    }

    if(i%2==1){

        for(k=2*i-2;k>1;k--){

        printf("-");

        }

    }else{

        for(k=2*i-2;k>1;k--){

        printf("*");

        }

    }

    printf("\n");

    }

}  

