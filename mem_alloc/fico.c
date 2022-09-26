#include<stdio.h>

void main()
{
FILE *fp1, *fp2;
char c,d;
int flag=0;
printf("First file is f1.txt\n");
printf("First file is f2.txt\n");
fp1=fopen("f1.txt","r");
fp2=fopen("f2.txt","r");
while(!feof(fp1))
{
c=fgetc(fp1);
d=fgetc(fp2);
if(c!=d)
{
break;
flag=1;
}
}
char a;
a=getc(fp2);
if(flag==0 & c==EOF)
{
printf("Files are same");
}
else
{
printf("Files are not same");
}
}

