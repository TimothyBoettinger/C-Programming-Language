//Pattern 29: Half Diamond Pattern Using Star and Hyphen Symbol
#include<stdio.h>

void main(){

    int i,j,k,rows=5;  

    for(i=1;i<=rows;i++)

    {

        if(i%2==0){

        for(j=1;j<=i;j++){

            printf("-");

    }

        }else{

            for(j=1;j<=i;j++){

        printf("*");

    }

        }

printf("\n");

    }

    for(i=rows;i>1;i--)

    {

        if(i%2==0){

        for(j=i;j>1;j--){

            printf("*");

        }

        }

        else{

            for(j=i;j>1;j--){

        printf("-");

        }

        }

    printf("\n");

    }

}

