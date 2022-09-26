// Program for swapping numbers using another variable.
#include<stdio.h>

void swap(int,int);
int temp;
void main()
{
int a,b;
printf("Enter two numbers:- ");
scanf("%d %d", &a,&b);
printf("before swapping a is %d and b is %d",a,b);
swap(a,b);
}

void swap(c,d)
{
temp=c;
c=d;
d=temp;
printf("Aftre swapping a is %d and b is %d",c,d);
}
