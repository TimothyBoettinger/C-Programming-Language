//Pattern 23: Floyd’s Triangle
#include <stdio.h>

int main()

 {

int rows = 5;

int i, j, k = 1;

for (i = 1; i <= 5; i++) {

for (j = 1; j < i + 1; j++) {

printf("%d",k++); //Floyd’s triangle logic(prints K value and increments on every iteration)

}

printf("\n");

}

}

