#include<stdio.h>
main()
{
   char ch;
    int x;
    printf ("Enter the char: ");
    scanf("%c", &ch);
    x=ch;

    if (x>=65 && x<=90 )
    {
        printf ("It is a capital alphabet");
    }
    else if (x>=33 && x<=64)
    {
        printf("It is a special character");
    }

    else if (x>=97 && x<=122)
    {
        printf("It is a lower case alphabet");
    }

    else if (x>= 45 && x<=57)
    {
        printf ("It is a number");

    }



}
