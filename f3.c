#include<stdio.h>

void main()
{
FILE *fp1, *fp2;
char str[100],c;
printf("First file is hello.txt\n");
fp1=fopen("hello.txt","r");
printf("Second new file is new.txt\n");
fp2=fopen("new.txt","w");
c=fgetc(fp1);
while( c!=EOF)
{
fputc(c,fp2);
c=fgetc(fp1);
}
printf("Contents copied to second file");
}
