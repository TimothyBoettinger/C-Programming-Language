//Pattern 17: Hollow Square Pattern
#include <stdio.h>

int main()

 {       

int n=10,m=10;

int i, j;

for (i = 1; i <= n; i++) {

for (j = 1; j <= m; j++) {

if (i == 1 || i == n || j == 1 || j == m) //Logic to print 

printf("*"); //Tue?, print star

else

printf(" "); //Tue?, print space

}

printf("\n");

}

}




