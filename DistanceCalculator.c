#include<stdio.h>
int main()
{
 float meter,feet,inches,centimeter,km;

 printf("Enter the distance In Kilometer ");
 scanf("%f",&km);

 meter = km * 1000;
 feet = km * 3280.84;
 inches = km * 39370.1;
 centimeter = km * 100000;

 printf("\nThe distance in Feet: %f", feet);
 printf("\nThe distance in Inches: %f", inches);
 printf("\nThe distance in meter: %f", meter);
 printf("\nThe distance in centimeter: %f", centimeter);

}
