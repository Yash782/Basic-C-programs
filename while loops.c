#include<stdio.h>
main()
{
    int a,b,i;
    i=1;
    printf ("Enter a number: ");
    scanf ("%d",&a);
    while (i<=10)
    {
        b=a*i;
        printf("\n %d",b);
        i=i+1;
    }
}
