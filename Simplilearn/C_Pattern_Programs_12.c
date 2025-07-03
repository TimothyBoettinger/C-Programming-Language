//Pattern 12: X Star Pattern 
#include <stdio.h>

int main()

 {

          int i, j, rows =5;

for (i = rows; i >= 1; i--) {

for (j = i; j < rows; j++) {

printf(" ");//print spaces

}

for (j = 1; j <= (2 * i - 1); j++) {

if (j == 1 || j == (2 * i - 1))//Logic for printing star

printf("*");

else

printf(" ");//if logic fails print space

}

printf("\n");

}

//Lower Inverted V pattern

for (i = 2; i <= rows; i++) {

for (j = i; j < rows; j++) {

printf(" ");//Print spaces

}

for (j = 1; j <= (2 * i - 1); j++) {

if (j == 1 || j == (2 * i - 1))//Logic for printing star

printf("*");

else

printf(" ");//if logic fails print space

}

printf("\n");

}

}
