//Pattern 22: Right-Angle Triangle Number Pattern
#include <stdio.h>

int main()

 {

int rows = 5;

int i, j, k = 1;

for (int i = 1; i <= rows; i++) {

for (int j = 1; j <= i; j++) {

printf("%d", j); //Print j value and space

}

printf("\n");

}

}
