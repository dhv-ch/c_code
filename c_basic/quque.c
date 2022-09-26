#include<stdio.h>

int enqueue(char [], int *, int *, int, char);
char dequeue(char [], int *, int *);


int n=5;

void main()
{
int Fr=0,Rr=0,op=0;
char q[n];
char y;

while(op<3)
{
	printf("Enter the opereation\n");
	printf("1.Enqueue\n2.Dequeue\n");
	scanf("%d", &op);
	switch(op)
	{
		case 1:
		printf("Enter the element you want to insert: \n");
		scanf("\n%c", &y);
		enqueue(q, &Fr, &Rr,n,y);
		break;

		case 2:
		printf("Deleted element from queue is %c\n", dequeue(q,&Fr,&Rr));
		break;		
		
		default:
		printf("Invalid operation");

	}
}

}

//function def
int enqueue(char a[], int *f, int *r, int n, char x)
{
if(*r>=n)
{
printf("Queue overflow!!\n");
return 0;
}
else
{
*r= *r+1;
printf("rear=%d\n",*r);
a[*r] = x;
if(*f==0)
{
*f = *f+1;
}
return 1;
}

}


char dequeue(char a[], int *f, int *r)
{
char z;
if(*f==0)
{
printf("Queue underflow!!\n");
return 0;
}
else
{
z = a[*f];
if(*f==*r)
{
*f=0;
*r=0;
}
else
{
*f = *f+1;
printf("front %d",*f);
}
}
return z;
}








