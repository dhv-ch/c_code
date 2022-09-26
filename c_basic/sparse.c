#include<stdio.h>

void main()
{
int m,n,a,res1,res2;
printf("Enter the matrix size and then non zero entries respectively:- \n");
scanf("%d", &m);
scanf("%d", &n);
scanf("%d", &a);
if((m*n) > (a*3))
{
printf("Linear method is better!!");
}
else
{
printf("Sparse method is better!!");
}
}
