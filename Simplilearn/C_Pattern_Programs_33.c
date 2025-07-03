//Pattern 33: Christmas Tree Pattern 
#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

#include <time.h>

#define RefRate 20000

#define randomness 5 

void clrscr()

{

    system("@cls||clear");

}

// Print a random character giving preference 

// to *

void printLeaf()

{

    char ltypes[5] = { '*', '+', 'o', '.', 'O' };

    int temp = rand() % randomness;  

    // Giving preference to *

    if (temp == 1)

        printf("%c ", ltypes[rand() % 5]);

    else

        printf("%c ", ltypes[1]);

}  

void tri(int f, int n, int toth)

{

    int i, j, k = 2 * toth - 2;

  

    for (i = 0; i < f - 1; i++)

        k--;  

    // number of rows

    for (i = f - 1; i < n; i++) {  

        // space handler

        for (j = 0; j < k; j++)

            printf(" ");  

        // decrementing k after each loop

        k = k - 1;  

        // number of columns, printing stars

        for (j = 0; j <= i; j++)

            printLeaf();  

        printf("\n");

    }

}  

// Prints multiple triangles

void printTree(int h)

{

    int start = 1, stop = 0, diff = 3;

    while (stop < h + 1) {

        stop = start + diff;

        tri(start, stop, h);

        diff++;

        start = stop - 2;

    }

}  

// Prints bottom part.

void displayLog(int n)

{

    int i, j, k = 2 * n - 4;  

    for (i = 1; i <= 6; i++) {

        // space handler

        for (j = 0; j < k; j++)

            printf(" ");  

        for (j = 1; j <= 6; j++)

            printf("#");  

        printf("\n");

    }

}  

// Driver code

int main()

{

    srand(time(NULL));

    int t = 6;  

    printf("\n*********MERRY CHRISTMAS*********\n\n");

    // refresh loop

    while (1) {

        clrscr();

        printTree(t);  

        displayLog(t);

        usleep(RefRate);

    }

    return 0;

}
