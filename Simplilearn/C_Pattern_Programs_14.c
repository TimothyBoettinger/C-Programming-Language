//Pattern 14: V Star Pattern
#include <stdio.h>

int main()

 {

int n = 5;

int i, j;

for (i = n - 1; i >= 0; i--) {

for (j = n - 1; j > i; j--) {

printf(" "); //Print Space

}

printf("*"); //Print star

for (j = 1; j < (i * 2); j++)

printf(" ");//Print space

if (i >= 1)

printf("*");

printf("\n");//Enter newline

}

}
