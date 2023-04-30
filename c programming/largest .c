#include<stdio.h>
#include<stdlib.h>

int a, b, c ,largest;

int main()
{
printf("enter the values of a,b,c:\n");
scanf("%d %d %d", &a,&b ,&c );

if(a>b>c)
printf("Largest is a");
else if(b>a>c)
printf("Largest is b");
else
printf("Largest is c");

return 0;

}
