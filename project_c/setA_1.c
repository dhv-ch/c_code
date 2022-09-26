#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct seg{
char from[50];
char to[50];
char sub[100];
char body[200];
};

void main()
{
char op;
struct seg m1,m2,m3,m4;
int count=0;
FILE *f1,*f2,*f3,*f4,*f5;
f1 = fopen("e1.txt","r");
f2 = fopen("e2.txt","r");
f3 = fopen("e3.txt","r");
f4 = fopen("e4.txt","r");
f5 = fopen("e5.txt","r");

printf("This is the info of all the semders from different 5 emails. \n");
fgets(m1.from,50,f1);
puts(m1.from);
fgets(m1.from,50,f2);
puts(m1.from);
fgets(m1.from,50,f3);
puts(m1.from);
fgets(m1.from,50,f4);
puts(m1.from);
fgets(m1.from,50,f5);
puts(m1.from);

printf("This is the information of all the receivers from different 5 emails. \n");
//fseek(f1,)
fgets(m2.to,50,f1);
puts(m2.to);
fgets(m2.to,50,f2);
puts(m2.to);
fgets(m2.to,50,f3);
puts(m2.to);
fgets(m2.to,50,f4);
puts(m2.to);
fgets(m2.to,50,f5);
puts(m2.to);

printf("\n\n");
fgets(m3.sub,100,f1);
puts(m3.sub);
fgets(m3.sub,100,f2);
puts(m3.sub);
fgets(m3.sub,100,f3);
puts(m3.sub);
fgets(m3.sub,100,f4);
puts(m3.sub);
fgets(m3.sub,100,f5);
puts(m3.sub);

printf("\n\n");
fgets(m4.body,200,f1);
puts(m4.body);
fgets(m4.body,200,f2);
puts(m4.body);
fgets(m4.body,200,f3);
puts(m4.body);
fgets(m4.body,200,f4);
puts(m4.body);
fgets(m4.body,200,f5);
puts(m4.body);


fclose(f1);
fclose(f2);
fclose(f3);
fclose(f4);
fclose(f5);


//end main
}

