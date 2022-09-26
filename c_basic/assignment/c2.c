#include<stdio.h>

void marks();

int main()
{
int res,tt;
printf("****************Enter the marks of student****************\n");
marks(&tt,&res);
printf("The total of all subjects is %d marks \nThe percentage of the student is %d%%\n",tt,res);

return 0;
}

void marks(int *total, int *pet)
{
int s1,s2,s3;
printf("\nEnter marks respectively for three subjects out of 100\n");
scanf("%d\n%d\n%d",&s1, &s2, &s3);
*total = s1+s2+s3;
*pet = ((*total)*100)/300;
}
