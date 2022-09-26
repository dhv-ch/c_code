#include<stdio.h>
void main()
{
int a=10,*p,**q;
p=&a;
q=&p;
printf("value of a is %d\n", a);
printf("address  of a is %p\n",p);
printf("value of p gives a's value is %d\n",*p);
printf("%p\n",*q);
printf("address of p is %p\n",q);

}
