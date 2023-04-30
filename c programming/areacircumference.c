/*A program that accepts the radius of a circle and computes both its area and circumference*/
#include<stdio.h>
#include<stdlib.h>

float r, a, c;

/*Constant keyword*/
const float pi=3.142;

float area(float x);
float circumference(float x);

int main()
{
/*Program accepts the radius*/
printf("Enter the prefered radius:\n");
scanf("%f", &r);/*%f - conversion specifier*/

/*Function call*/
a=area(r);
c=circumference(r);

printf("area=%f, circumference=%f",a,c);

return 0;

}

float area(float x)
{
    return(pi*r*r);
}

float circumference(float x)
{
    return(pi*2*r);
}
