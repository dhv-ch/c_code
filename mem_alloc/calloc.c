#include<stdio.h>
#include<stdlib.h>

void main()
{
int n,*p,m;
printf("How many numbers:\n");
scanf("%d", &n);
p = (int *)calloc(n,sizeof(int));
for(int i=0;i<n;i++)
{
scanf("%d",p+i);
}

printf("How many more numbers you wants to add?\n");
scanf("%d",&m);
p= (int *)realloc(p,(n+m)*sizeof(int));
for(int i=n;i<n+m;i++)
{
scanf("%d",p+i);
}

int sum = 0;
for(int i=0;i<n+m;i++)
{
sum = sum + *(p+i);
}
printf("sum is %d\n",sum);
}
