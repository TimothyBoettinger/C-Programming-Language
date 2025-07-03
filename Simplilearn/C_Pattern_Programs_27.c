//Pattern 27: Inverted Right-Angle Triangle
#include <stdio.h>

int main()

{

    int rows=5;

    int alphabet = 65; 

    for (int i = rows - 1; i >= 0; i--)

    {

        for (int j = 0; j <= i; j++)

        {

            printf("%c ", (char)alphabet + j);

        }

        printf("\n");

    }

}

