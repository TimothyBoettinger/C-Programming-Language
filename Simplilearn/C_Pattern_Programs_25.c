//Pattern 25: Square Number Pattern
#include <stdio.h>

int main()

 {

int rows = 5;

int i, j;

for (int i = 1; i <= rows; i++) {

int num;

if (i % 2 == 0) {

num = 0;

for (int j = 1; j <= rows; j++) {

printf("%d",num);

num = (num == 0) ? 1 : 0;

}

} else {

num = 1;

for (int j = 1; j <= rows; j++) {

printf("%d",num);

num = (num == 0) ? 1 : 0;

}

}

printf("\n");

}

}

