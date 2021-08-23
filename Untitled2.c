#include<stdio.h>
main()
{
    int a, b;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    if(a>b)
        printf("A (%d) is greater",a);
    if (b>a)
        printf("B (%d) is greater",b);
    if (a==b)
        printf("Both numbers are equal");
}
