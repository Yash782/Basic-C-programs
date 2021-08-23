#include <stdio.h>

int main()
{
    int i, j;

    /* Iterate through rows */
    for(i=1; i<=4; i++)
    {
        /* Print spaces in decreasing order of row */
        for(j=i; j<4; j++)
        {
            printf(" ");
        }

        /* Print star in increasing order or row */
        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        /* Move to next line */
        printf("\n");
    }

    return 0;
}
