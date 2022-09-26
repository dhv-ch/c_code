#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
int *p;
p = (int*)malloc(sizeof(int));
printf("hi %d\n",*p);

printf("address %p\n",p);
*p=25;
printf("hi %d\n",*p);

int *q;
q = (int*)calloc(1,sizeof(int));
printf("%p\n",q);
printf("hi %d\n",*q);
}
