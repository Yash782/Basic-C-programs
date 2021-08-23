#include<stdio.h>

main()
{
    int a, b, c ;

    printf("Enter a three digit number: ");
    scanf("%d",&a);

    b=a%100;
    b=b%10;


    printf("%d",b);

}




