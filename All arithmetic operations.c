#include<stdio.h>
main()
{
    int a,b,c,d;
    printf("Press 1 for addition, 2 for subtraction, 3 for divide, 4 to multiple: ");
    scanf("%d", &a);
    printf("\nEnter 1st number: ");
    scanf("%d",&b);
    printf("\nEnter 2nd number: ");
    scanf("%d",&c);
    if (a==1)
    {
        d=b+c;
    }
    if (a==2)
    {
        d=b-c;
    }
    if (a==3)
    {
        d=b/c;
    }
    if (a==4)
    {
        d=b*c;
    }
    printf("Answer is %d : ",d);
}
