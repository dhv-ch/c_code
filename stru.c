#include<stdio.h>
#include<string.h>

struct student{
int sid;
char name[20];
float cpi;
int backlog;
};

void main()
{
struct student s3,s4;
s1.sid=1;
strcpy(s1.name,"abc");
s1.cpi=7.5;
s1.backlog=3;

s2.sid=2;
strcpy(s2.name,"dhvani");
s2.cpi=8.96;
s2.backlog=0;
 
printf("Information of student 1 is\nid is  %d\nname is %s\ncpi is %f\nbacklog is %d",s1.sid,s1.name,s1.cpi,s1.backlog);

printf("\n\nInformation of student 2 is\nid is  %d\nname is %s\ncpi is %f\nbacklog is %d\n\n",s2.sid,s2.name,s2.cpi,s2.backlog);
printf("Enter id  ");
scanf("%d", &s3.sid);
printf("enter name  ");
scanf("%s",s3.name);
printf("enter cpi  ");
scanf("%f", &s3.cpi);
printf("Enter backlog  ");
scanf("%d",&s3.backlog);

printf("\n\nInformation of student 3 is\nid is  %d\nname is %s\ncpi is %f\nbacklog is %d",s3.sid,s3.name,s3.cpi,s3.backlog);

}

















