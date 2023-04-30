#include<stdio.h>
#include<stdlib.h>

#define u 1000
#define l 0
#define i 10

int f,c;
 main()
{
while(f<=u)
{
  c=5*(f-32)/9;
printf("%d\t %d\n" , f ,c);
f=f+1;
}


return 0;
}
