#include<stdio.h>
main()
{
    int A,B,C;

    printf("Enter a number: ");
    scanf("%d%d%d",&A,&B,&C);

    if (A >= B && A >= C)
        printf("(%d)A is the largest number.", A);

    if (B >= A && B >= C)
        printf("(%d) B is the largest number.", B);

    if (C >= A && C >= B)
        printf("(%d) C is the largest number.", C);

  }
