//Pattern 15: Pyramid Star Pattern
#include <stdio.h>

int main()

 {       

int rows = 5;

int i,j,k;

for (int i = 1; i <= rows; i++) {

for (int j = i; j < rows; j++) {

printf(" ");

}

for (int k = 1; k <= (2 * i - 1); k++) {

if (k == 1 || i == rows || k == (2 * i - 1)) {

//Logic for printing Pattern

printf("*"); //Print Star

} else {

printf(" ");  //Print Spaces

}

}

printf("\n");

}

}
