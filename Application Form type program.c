#include<stdio.h>
main()
{
    char name [30];
    int age;
    printf("Enter your name\n");
    scanf("%s",name);
    printf("Enter your age\n");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("%s you can apply", name);
    }
    else
    {
        printf("%s you can't apply",name);
    }
}
