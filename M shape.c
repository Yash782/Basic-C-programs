#include<stdio.h>
main()
{
    int r,c;

    for (r=1; r<=5; r++)
    {
        for (c=1; c<=5; c++)
        {
            if(c==1 || c==5 || r==c && c<4 || r+c==6 && r<4)
                printf("*");
            else
            {
                printf(" ");
            }

        }
         printf("\n");


    }


}

