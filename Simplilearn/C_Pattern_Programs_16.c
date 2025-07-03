//Pattern 16: Inverted Star Pyramid
#include <stdio.h>

int main()

 {          

int rows = 5;

int i,j,k;

//Row input

for (int i = rows; i >= 1; i--) {

for (int j = i; j < rows; j++) {

printf(" "); //Print Spaces

}

for (int k = 1; k <= (2 * i - 1); k++) {

if (k == 1 || i == rows || k == (2 * i - 1)) { //logic to print Pattern

printf("*"); //Ture prints star

} else {

printf(" "); //False prints spaces

}

}

printf("\n");

}

}
