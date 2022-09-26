// Program for finding Simple Interest using function.
#include<stdio.h>
void interest(int,int,int);

int fa;

void main()
{
int pa, r,t;
printf("Enter the Principal Amount:- ");
scanf("%d", &pa);
printf("Enter the Rate: ");
scanf("%d", &r);
printf("Enter the Time:- ");
scanf("%d",&t);
interest(pa,r,t);
}

void interest(a,b,c)
{
fa= a*b*c;
printf("Simple Interest is %d",fa);
}
