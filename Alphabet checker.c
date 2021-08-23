#include<stdio.h>
main()
{
    char c ;
    int x;
    printf ("Enter the char: ");
    scanf("%c", &c);
    x=c;

    if (x>=65 && x<=90 || x>=97 && x<=122)
    {
        printf ("%c is a alphabet",c);

    }
    else
    {
        printf ("%c is not a alphabet",c);
    }

}
