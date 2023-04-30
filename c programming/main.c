/*A program to calculate the product of two numbers*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a,b,c,d,e,f,g;

int product(int x, int y);
int sum(int x, int y);
int division(int x, int y);

int main()
{
    /*Input the first number*/
    printf("Enter a number between 1 and 100:");
    scanf("%d", &a);

    /*Input the second number*/
    printf("Enter a number between 1 and 100:");
    scanf("%d", &b);

    /*Calculate and display the product*/
    c=product(a, b);
    printf("%d times %d=%d\n", a, b, c);

    /*Calculate and display the sum*/
    d=sum(a, b);
    printf("%d plus %d=%d\n", a, b, d);

    /*Calculate and display the quotient*/
    e=division(a, b);
    printf("%d divide %d=%d\n", a, b, e);

    /*Calculate and display the square*/
    f=pow(a, 2);
    printf("Square=%d", f);

    return 0;
}

/*Function returns the product of its two arguments*/
int product(int x, int y)
{
    return (x*y);
}

/*Function returns the sum of its two arguments*/
int sum(int x, int y)
{
    return(x+y);
}


/*Function returns the quotient of its two arguments*/
int division(int x, int y)
{
    return(x/y);
}
