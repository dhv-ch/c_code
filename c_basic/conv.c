#include<stdio.h>

void main()
{
int i,j,n,m;
int count=0,k=0;

printf("Enter the length of the array: ");
scanf("%d", &n);
scanf("%d", &m);
int a[n][m];
printf("\nEnter elements--\n");

for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
scanf("%d", &a[i][j]);
}
}

for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("%d  ", a[i][j]);
}
printf("\n");
}

//conversion from sparse to linear representation
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if(a[i][j] !=0)
{
count++;
}
}
}
printf("Non zero entries are %d\n\n", count);

int lr[3][count];

for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if(a[i][j] !=0)
{
lr[0][k]=i;
lr[1][k]=j;
lr[2][k]=a[i][j];
k++;
}
}
}

printf("Linear method representation is: \n\n");

for(i=0;i<3;i++)
{
for(j=0;j<count;j++)
{
printf("%d",lr[i][j]);
printf("\t");
}
printf("\n");
}
//end main
}





















