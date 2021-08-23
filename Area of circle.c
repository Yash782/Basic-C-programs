#include<stdio.h>
main()
{
    float a,d,r,c;
    printf("Enter the radius of circle: ");
    scanf("%f",&r);
    a=3.14*r*r;
    d=r*2;
    c=2*a;
    printf("Diameter of circle is %f units",d);
    printf("\nArea of circle is %f units",a);
    printf("\nCircumference of circle is %f units ",c);
}
