#include<stdio.h>
main()
{
    int r,c;

    for (r=1;r<=5;r++)
    {
        for(c=1;c<=5; c++)
        {
            if(c==1 || c==5|| r+c==8&& r<5 || r+c==6 && r>2)
                printf("*");
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
