//Pattern 28: Pyramid Alphabet Pattern
#include <stdio.h>

int main()

{

      int i,j,rows=5;

    int alphabet=64;

    for (int i = 0; i <= 4; i++) {

int alphabet = 65; //ASCII value of “A”

for (int j = 4; j > i; j--) {

printf(" "); //Print Space

}

for (int k = 0; k <= i; k++) {

printf("%2c",(char) (alphabet + k)); //Print Alphabet

}

printf("\n");

}

}


