#include<stdio.h>
main()
{
    int a,p,l,b;
    printf("Enter the length: ");
    scanf("%d",&l);
    printf("Enter the breath: ");
    scanf("%d",&b);
    p=(l+b)*2;
    printf("Perimeter is: %d units",p);
    a=b*l;
    printf("\nArea is: %d units",a);
}
