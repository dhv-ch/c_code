#include<stdio.h>

void circumference(int);
void area(int);
void volume(int);

void main()
{
int op;
float r;
printf("enter your choice: \n");
printf("1)Calculate Circle circumference\n2)Calculate Area of circle\n3)Calculate volume of Sphere\n");
scanf("%d",&op);

switch(op){
	case 1:
	printf("Enter radius of circle in cm:- ");
	scanf("%f",&r);
	circumference(r);
	break;

	case 2:
	printf("Enter radius of circle in cm:- ");
	scanf("%f",&r);
	area(r);
	break;

	case 3:
	printf("Enter radius of sphere in cm:- ");
	scanf("%f",&r);
	volume(r);
	break;

	default:
	printf("Invalid Input");
	break;
}
//end main
}

void circumference(int a)
{
float result;
result = 2*3.14*a;
printf("Circumference is %fcm^2\n",result);
printf("Calculation performed is = (2*pi*r), where r is radius and pi=3.14");
}

void area(int a)
{
float result;
result = 3.14*a*a;
printf("Area of circle is %fcm^2\n",result);
printf("Calculation performed is = (pi*r^2), where r is radius and pi=3.14");
}

void volume(int a)
{
float result;
result = (4/3)*3.14*a*a*a;
printf("Volume of a sphere is %fcm^3\n",result);
printf("Calculation performed is = (4/3)*pi*r^3, where r is radius and pi=3.14");
}








