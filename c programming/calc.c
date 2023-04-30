#include <stdio.h>
#include <stdlib.h>
int a, oper, b ,sum ,difference , multiplication , division;
main()
{
printf("enter first integer between 1 and 50\n ");
scanf("%d",&a);
printf("enter operator:+ - * / \n ");
scanf("c",&oper);
printf("enter first integer between 1 and 50\n ");
scanf("%d",&b);
if(oper=='+')
    {
    sum=a+b;
    printf("%d",&sum);
}else
    if(oper=='-')
        {
        difference=a-b;
        printf("%d",&difference);
    }else
        if(oper=='*')
        {
            multiplication=a*b;
            printf("%d",&multiplication);
        }else
            if(oper=='/'){
                division=a/b;
                printf("%d",&division);
            }


return 0;
}


