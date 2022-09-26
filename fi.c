#include<stdio.h>

void main()
{
FILE *fp;
char str[50];
fp=fopen("hello.txt","r");
//fprintf(fp, "hello!!how are you??");
fscanf(fp,"%s",str);
printf("file content is %s: \n",str);
fclose(fp);
}
