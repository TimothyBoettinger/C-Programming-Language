//Pattern 11: Right Diagonal Star Pattern
#include <stdio.h>

int main()

 {

          int i, j;

for (i = 1; i <= 5; i++) {

for (j = 0; j < 5 - i; j++) {

printf(" "); //Print blank space

}

printf("*\n");//Print new line

}

}
