#include<stdio.h>
#include<stdlib.h>

void main()
{
FILE *fp;
int id,mo,pno;
char name[30],city,spname;
char c[100];
int i,n,j;
fp = fopen("emp.txt","r");
printf("Enter the no. of employees\n");
scanf("%d",&n);
for(i=0;i<n;i++){
fgets(c,100,fp);
puts(c);
}

fscanf(fp,"%d %s %d %s %d %s", &id, &name, &mo, &city, &pno, &spname);
printf("%d %s %d %s %d %s", id, name, mo, city, pno, spname);



fclose(fp);
}
