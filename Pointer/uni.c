#include<stdio.h>


struct student{
int sid;
char name[20];
float cpi;
int backlog;
}s1;

union book{
char bname[20];
char author[20];
int price;
int pages;
}u1;


void main()
{
s1.sid=180;
s1.cpi= 7.5;

printf("Info of syudnt 1 is\n%d\n%f\n",s1.sid,s1.cpi);

u1.price=300;
printf("price=%d",u1.price);

u1.pages=500;
printf("pages=%d",u1.pages);
printf("price=%d",u1.price);




}
