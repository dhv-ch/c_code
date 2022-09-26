#include<stdio.h>

void main()
{
int ba,i,c,res;
printf("Enter the Base Address of the element: \n");
scanf("%d", &ba);
printf("Enter the size and index of the element for which you want to kn ow address:-= \n");
scanf("%d", &c);
scanf("%d", &i);
res = ba + (i-1)*c;
printf("The address of the %dth element is %d",i,res);
}
