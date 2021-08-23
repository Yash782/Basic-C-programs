#include<stdio.h>
main()
{

    int p,c,m,b,cp,x,y,avg;

    printf("Enter marks of Phy: ");
    scanf("%d", &p);

    printf("Enter marks of Chem: ");
    scanf("%d", &c);

    printf("Enter marks of Maths: ");
    scanf("%d", &m);

     printf("Enter marks of Bio: ");
    scanf("%d", &b);

     printf("Enter marks of CP: ");
    scanf("%d", &cp);

    x=(p+c+m+b+cp);
    y=(x*100)/500;
    avg=x/5;
    printf("Total= %d",x);
    printf("\n%d% Percent",y);
    printf("\nAverage marks =%d ",avg);
}
