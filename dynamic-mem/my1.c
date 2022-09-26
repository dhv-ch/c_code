#include<stdio.h>
#include "find1.h"


int main()
{
int age,year,salary,output;
printf("Enter your birh year:\n");
scanf("%d", &year);
printf("Enter your current salary:\n");
scanf("%d", &salary);
age = find_age1(year);
output = find_saving1(salary);
printf("Your age is: %d\n",age);
printf("Your savings may be: %d\n",output);

return 0;
}
