#include<stdio.h>

void main()
{
int a=10,*p,**q;
p=&a;
q=&p;
printf("Value of a is %d",a);
printf("address of a is %d",p);

}
