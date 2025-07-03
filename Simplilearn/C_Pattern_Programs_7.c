#include <stdio.h>

int main()

 {

int i, j, rows = 5;

           for (int i = 0; i < rows; i++) {

for (int j = rows - i; j > 1; j--) { //Loop for blank space

printf(" "); //Print Space

}

for (int j = 0; j <= i; j++) { //loop for star

    printf("* "); //prints * and blank space

}

            printf("\n"); //New line

 }

}

