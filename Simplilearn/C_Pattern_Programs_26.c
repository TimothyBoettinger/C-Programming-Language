//Pattern 26: Right-Angle Triangle Alphabet Pattern
#include<stdio.h>

void main()

{

    int i,j,rows=5;

    int alphabet=64; 

    for(i=1;i<=rows;i++)

    {

        for(j=1;j<=i;j++)

        {

            printf("%c",(char)(j+alphabet));

        }

        printf("\n");

    }

}

