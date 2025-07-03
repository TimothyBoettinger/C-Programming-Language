//Pattern 9: Diamond Star Pattern
#include <stdio.h>

int main()

 {

int  j,x, rows=5 ,blank=1;

blank = rows - 1;

          for (j = 1; j <= rows; j++) {

for (x = 1; x <= blank; x++) {

printf(""); //print blank space

}

blank--;

for (x = 1; x <= 2 * j - 1; x++) {

printf("*"); //prints * and blank space

}

            printf("\n"); //New line

 }

blank = 1;

for (j = 1; j <= rows - 1; j++) {

for (x = 1; x <= blank; x++) {

printf(" "); //Print Spaces

}

blank++;

for (x = 1; x <= 2 * (rows - j) - 1; x++) {

printf("*"); //Print Star

}

printf("\n"); //Print new line

}

}
