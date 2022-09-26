#include<stdio.h>

//function signature
int push(char [],int *, char , int );
char pop(char [], int *);
char pip(char [], int *, int);
char change(char [],int *, char , int);

//main function
void main()
{
int n=10;
char s[n+1],x;
int top=0;
int op=0;

while(op<5)
{
printf("Enter operation you want to perform\n");
printf("1.Push\n2.Pop\n3.Peep\n4.Change\n5.Quite\n");
scanf("%d",&op);
switch(op)
{
case 1:
printf("Enter an element to push\n");
scanf("\n%c", &x);
push(s,&top,x,n);
break;

case 2:
printf("Character poped %c\n",pop(s,&top));
break;

}





}
//end main
}

// push function
int push(char a[],int *t, char e, int n)
{
if(*t>n)
{
printf("Stack Overflow!!");
return 0;
}
else
{
*t = *t +1;
a[*t] = e;
return 1;
}
}

//pop function
char pop(char a[], int *t)
{
          //printf("%c", a[1]);
if(*t==0)
{
printf("stach underflow\n");
return 0;
}
else
{
*t = *t-1;
return a[*t+1];
}
}








