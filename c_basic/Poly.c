#include<stdio.h>

void main()
{
int n,i,m;

printf("Enter the total terms for first polunomial: \n");
scanf("%d",&n);
printf("So the Highest degree will be %d\nEnter co-efficients:\n",n-1);
int a[n];
//scanning First polynomial
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("First polynomial is \n");
for(i=0;i<n;i++)
{
printf("%dX^%d + ",a[i],i);
}

printf("\nEnter the total terms for second polunomial: \n");
scanf("%d",&m);
printf("So the Highest degree will be %d\nEnter co-efficients:\n",n-1);
int b[n];
//scanning second polynomial
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
printf("Second polynomial is \n");
for(i=0;i<m;i++)
{
printf("%dX^%d + ",b[i],i);
}

//Adding two polynomial
int sum[n];
for(i=0;i<n;i++)
{
sum[i] = a[i] + b[i];
}
printf("\n\nThe addition of polynomial is:\n");
//printing result
for(i=0;i<n;i++)
{
printf("%dx^%d + ",sum[i],i);
}


//end
}

















