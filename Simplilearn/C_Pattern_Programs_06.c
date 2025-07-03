//Pattern 6: Mirrored Arrow-Shaped Star Pattern
#include <stdio.h>

int main()

 {t

int i, j,k, rows = 5;

           for (int i = 1; i <= rows; i++) {

for (int j = i; j < rows; j++) { //Rows Loop

printf(" "); // Blank Space

}

for (int k = 1; k <= i; k++) { //Cols Loop

printf("*"); // Prints *

}

printf("\n");

}

for (int i = rows; i >= 1; i--) {

for (int j = i; j <= rows; j++) { //Rows Loop

printf(" ");  // Prints blank spaces

}

for (int k = 1; k < i; k++) { //Col Loop

printf("*"); //prints * and blank space

}

            printf("\n"); //New line

 }

}
