//Pattern 21: Half Diamond Star Pattern
#include<stdio.h>

int main()  

{  

    int rows=5,i,j;  

    //prints upper half diamond

    for( i=1;i<=rows;i++)  

    {  

      for( j=1;j<=i;j++)

      {

          printf("*");

      }

      printf("\n"); 

     } 

    //prints lower-half diamond

    for( i=rows-1;i>=1;i--){

       for( j=1;j<=i;j++){

           printf("*");  

            }  

       printf("\n");  

    }     

    return 0;  

}

