//Pattern 8: Inverted Pyramid
#include <stdio.h>

int main()

 {

int i, j,k, rows = 5;

           for (int i = 0; i <= rows - 1; i++) { //For loop for Rows

for (int j = 0; j <= i; j++) { //For loop for Col

printf(" "); // blank space

}

for (int k = 0; k <= rows - 1 - i; k++) { 

printf("*"  " "); //prints * and blank space

}

            printf("\n"); //New line

 }

}
