//Pattern 24: Pascals Program
#include<stdio.h>

void main() {

    int rows=5, temp=1,i,j,k;

    for (i=0; i<rows; i++) {

        for (j=1; j<= rows-i; j++)

            printf(" ");

        for (k=0; k<=i; k++) {

            if (k==0 || i==0)

                temp = 1;

            else

                temp=temp*(i-k+1)/k;

            printf("%2d", temp);

        }

        printf("\n");

    }

} 

