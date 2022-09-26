#include<stdio.h>

void main()
{
int ba,i,j,c,m,n,res;
int flag;
printf("Enter the Base Address of the element: \n");
scanf("%d", &ba);
printf("Enter the total no. of columns\t and\t the total no. of rows\n");
scanf("%d", &m);
scanf("%d", &n);
printf("Enter the size of element\n");
scanf("%d", &c);
printf("Enter the location (i,j) for which you want to find address:\n");
scanf("%d", &i);
scanf("%d", &j);
printf("Enter 0 if matrix is row major and 1 if matrix is column major");
scanf("%d", &flag);
if(flag=0)
{
res = ba + ((i-1)*m+(j-1))*c;
printf("The address of the (%d,%d)th element is %d",i,j,res);
}
else
{
res = ba + ((j-1)*n+(i-1))*c;
printf("The address of the (%d,%d)th element is %d",i,j,res);
}
}
