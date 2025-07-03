//Pattern 30: Left Half Diamond Pattern 
#include<stdio.h>

void main(){

    int i,j,k,rows=5;

    for(i=0;i<rows;i++)

    {

    for(j=0;j<rows-i;j++){

        printf(" ");

}

if(i%2==0){

        for(k=0;k<=i;k++){

        printf("*");

    }

        }else{

            for(k=0;k<=i;k++){

        printf("-");

    }

        }

printf("\n");

    }

    for(i=rows-1;i>0;i--)

    {

    for(j=rows;j>=i;j--){

    printf(" ");

    }

    if(i%2==0){

        for(k=i;k>0;k--){

        printf("-");

        }

    }else{

        for(k=i;k>0;k--){

        printf("*");

        }

    }

    printf("\n");

    }   

}  

