#include<stdio.h>
main()
{

    int p,c,m,b,cs,x,y;

    printf("Enter marks of Phy: ");
    scanf("%d", &p);

    printf("Enter marks of Chem: ");
    scanf("%d", &c);

    printf("Enter marks of Maths: ");
    scanf("%d", &m);

     printf("Enter marks of Bio: ");
    scanf("%d", &b);

     printf("Enter marks of CS: ");
    scanf("%d", &cs);

    x=(p+c+m+b+cs);
    y=(x*100)/500;
    printf("%d Percent\n",y);

    if (y>=90)
    {
        printf(" A Grade ");
    }
    else if (y>=80)
    {
        printf(" B Grade ");
    }
    else if (y>=70)
    {
        printf(" C Grade ");
    }
    else if (y>=60)
    {
        printf(" D Grade ");
    }
    else if (y>=50)
    {
        printf(" E Grade ");
    }
    else
    {
        printf("F Grade ");
    }
}
