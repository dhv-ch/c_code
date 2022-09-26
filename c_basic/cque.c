#include<stdio.h>

int enqueue(char [], int *, int *, int, char);
char dequeue(char [], int *, int *, int);
//void display(char,int *,int *);


int n=4;

void main()
{
int Fr=0,Rr=0,op=0;
char q[n];
char y;

while(op<4)
{
	printf("Enter the opereation\n");
	printf("1.Enqueue\n2.Dequeue\n3.display\n");
	scanf("%d", &op);
	switch(op)
	{
		case 1:
		printf("Enter the element you want to insert: \n");
		scanf("\n%c", &y);
		enqueue(q, &Fr, &Rr,n,y);
		break;

		case 2:
		printf("Deleted element from queue is %c\n", dequeue(q,&Fr,&Rr,n));
		break;		
		
		/*case 3:
		display(q,&Fr,&Rr);
		break;*/

		default:
		printf("Invalid operation");

	}
}

}

//function def
int enqueue(char a[], int *f, int *r, int n, char x)
{
if(*r==n)
{
	*r=1;
	printf("rear = %d\n",*r);
	printf("front = %d\n",*f);
	
}
else
{
	*r = *r+1;
	printf("rear = %d\n",*r);
	printf("front = %d\n",*f);
}

if(*f==*r)
{
	printf("Queue Overflow!!\n");
	return 0;
}

a[*r] = x;
if(*f==0)
{
*f=1;
printf("front = %d\n",*f);
return 1;
}
}


char dequeue(char a[], int *f, int *r, int n)
{
char z;
if(*f==0)
{
	printf("Queue underflow!!\n");
	return 0;
}

z = a[*f];
if(*f==*r)
{
	*f=0;
	*r=0;
	printf("rear = %d",*r);
	printf("front = %d",*f);
	return z;
}

if(*f==n)
{
	*f=1;
	printf("front = %d",*f);
}
else
{
	*f = *f+1;
	printf("front = %d",*f);
	return z;
}

}


/*void display(char a[],int *f,int *r)
{
int i=*f;

if(*f==0 && *r==0)
{
printf("Queue ios empty\n");
}

else
{
printf("Queue is as follows:\n");
while(i<=*r)
{
printf("%d",a[*f]);
}
}

}*/












