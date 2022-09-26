#include<stdio.h>

void main()
{
FILE *fp1, *fp2, *fp3;
int c;
printf("First file is numbers.txt and containing numbers\n");
fp1=fopen("numbers.txt","r");
printf("Second new file is odd.txt\n");
printf("third new file is even.txt\n");
fp2=fopen("odd.txt","w");
fp3 = fopen("even.txt","w");
while( (c=getw(fp1))!=EOF)
{
if(c%2==0)
{
putw(c,fp3);
}
else
{
putw(c,fp2);
}
}
fclose(fp1);
fclose(fp2);
fclose(fp3);
printf("Contents modified to file"); 
fp2=fopen("odd.txt","r");
fp3=fopen("even.txt","r");
}










