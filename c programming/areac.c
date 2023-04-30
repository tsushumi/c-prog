/*A program that accepts the radius of a circle and computes both its area and circumference*/
#include<stdio.h>
#include<stdlib.h>

float r, a, c;

int main()
{
/*Program accepts the radius*/
printf("Enter the preferred radius:\n");
scanf("%f", &r);/*%f - conversion specifier*/

/*Function call*/
a=3.142*r*r;
c=3.142*2*r;

printf("area=%f, circumference=%f",a,c);

return 0;

}
