//Pattern 18: Hollow Square Pattern
#include <stdio.h>  

int main()  

{  

    int i,j, rows=10;     

    for(i=1;i<=rows;i++)  

    {  

        for(j=1;j<=rows;j++)  

        {  

            if(i==1 ||i==rows||j==1||j==rows-i+1||i==j||j==rows)  

            {  

            printf("*");  

            }  

            else  

            {  

                printf(" ");  

            }                   

            }        

        printf("\n");  

    }        

    return 0;  

}  
