#include<stdio.h>
int main()
{
 int amount; printf("Please input amount for withdraw : ");
 scanf("%d",&amount);
 printf("\nRequired note of Rs. 500: %d", amount /500);
 printf("\nRequired notes of Rs. 100 : %d", (amount % 500)/100);
 printf("\nRequired notes of Rs. 50 : %d", (amount % 100) / 50);
 printf("\nRequired notes of Rs. 10 : %d", (((amount % 100) % 50) / 10));
 printf("\nAmount still remaining Rs. : %d", (((amount % 100) % 50) % 10));

}
