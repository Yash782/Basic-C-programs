#include<stdio.h>
main()
{
    int a,b;
    printf("Enter 1st number A: ");
    scanf("%d",&a);
    printf("Enter 2nd number B: ");
    scanf("%d",&b);
    a=a-b;
    b=b+a;
    a=b-a;
    printf("A=%d",a);
    printf("\nB=%d",b);
}
