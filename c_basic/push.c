#include<stdio.h>

int push(char [], int*, char , int);
int pop(char [], int *, int);

void main()
{
int n=10;
char s[10];
char x,y;
int top=0,i=100;
int op=0;
while(op<5){
	printf("Enter operation you want to perform\n");
	printf("1.push\n2.pop\n3.pip\n4.change\n5.Quit\n");
	scanf("%d",&op);
	switch(op);
	{
	case 1:
	printf("Enter the element that you want to push:\n");
	scanf("%c", &x);
	scanf("%c", &y);
	i= push(s,&top,x,n);
	break;

	case 2:
	printf("Poped elements is %c",pop(s, &top,n));
	break;
}

}

}

//function definition
int push(char a[],int *t, char e, int n)
{
if(*t>=n)
{
printf("Stack overflow!!\n");
return 0;
}
else
{
*t = *t+1;
printf("top changed to = %d\n", *t);
a[*t] = e;
return 1;
}
}

int pop(char a[], int *t, int n)
{
if(*t==0)
{
printf("stack underflow!!\n");
return 0;
}
else
{
*t = *t-1;
return a[*t+1];
}
}










