#include<stdio.h>
void main()
{
int i,n,e;
int a[10];
printf("Enter the size of the array: ");
scanf("%d",&n);
printf("Enter the elements of the array:--");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}

int odd=0,even=0;
for(i=0;i<n;i++)
{
if(a[i]%2==0)
{
even++;
}
else
{
odd++;
}
}
printf("\n Odd numbers are %d and \n Even numbers are %d",odd,even);
}
