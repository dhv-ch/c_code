#include<stdio.h>

void main()
{
FILE *fp;
char str[100];
fp = fopen("hello.txt","a");
fprintf(fp,"\nthese is another new line");
printf("Opened file is %s \n",fp);

fclose(fp);
}
