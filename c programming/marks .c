#include<stdio.h>
#include<stdlib.h>

int a, b, c , avg;

int main()
{
printf("enter the values of a,b,c:\n");
scanf("%d %d %d", &a,&b ,&c );
avg=(a+b+c)/3;
if(avg >=50)
printf("Pass");
else
printf("Fail");
return 0;

}
