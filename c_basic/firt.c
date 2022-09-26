#include<stdio.h>
int main()
{
int rad;
float area,pi=3.14;
printf("Enter the radius of circle in cm: ");
scanf("%d",&rad);
area = pi*rad*rad;
printf("Area of circle is:- %f cm^2",area);
return 0;
}
