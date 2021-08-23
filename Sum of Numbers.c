#include<stdio.h>
main()
{
    int a,b,c=0;
    printf("Enter any number: ");
    scanf("%d",&a);

    while (a>0)
    {
        b=a%10;
        a=a/10;
        c=c+b;
    }
    printf("%d",c);
}
