#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct book
{
	int b_no;
	char b_name[40];
	char b_author[50];
	int price;
	int flag;
};

struct book b[20];

void first(int );
void second(int );
void third(char [], int);
void fourth(char [], int);
void fifth(int );
void sixth(int );


int main()
{
int ch,n,i,count=0;
char temp[40],temp1[40];

do{
printf("********************MENU**********************\n");
printf("Enter\n");
printf("1)Add book information\n");
printf("2)Display book information\n");
printf("3)List all books of given author\n");
printf("4)List the title specified book\n");
printf("5)List the count of books in library\n");
printf("6)List the book in the order of accession number\n");
printf("7)exit\n\n");

printf("Enter your choice");
scanf("%d",&ch);

switch(ch)
{	
case 1:
printf("How many records you want to add:\n");
scanf("%d",&n);
first(n);
break;

case 2:
printf("\n\t\tDetails of the Books\n");
second(n);
break;

case 3:
printf("Enter Autghor name:\n");
scanf("%s",temp);
third(temp,n);
break;

case 4:
printf("Enter Title of book:\n");
scanf("%s",temp1);
fourth(temp1,n);
break;

case 5:
fifth(n);
break;

case 6:
sixth(n);
break;

case 7:
exit(0);
break;

default:
printf("Invalid Input\n");
break;
}
}
while(ch!=7);

return 0;
}


void first(int no)
{
int i;
printf("\nEnter details for %d book\n\n", no);
for(i=0;i<no;i++)
{
printf("**************************************************************\n");
printf("Enter book no:     ");
scanf("%d", &b[i].b_no);

printf("Enter book name:   ");
scanf("%s", b[i].b_name);

printf("Enter Author name: ");
scanf("%s", b[i].b_author);

printf("Enter the price:   ");
scanf("%d",&b[i].price);

}
printf("**************************************************************\n\n");
}


void second(int no)
{
int i;
printf("------------------------------------------\n");
printf("Book no. Book Name\t Author name\t Price\n");
for(i=0;i<no;i++)
{
printf("%d\t %s\t %s\t %d",b[i].b_no, b[i].b_name, b[i].b_author, b[i].price);
printf("\n");
}
printf("------------------------------------------\n");
}


void third(char tp[40],int no)
{
int i;
for(i=0;i<no;i++)
{
if(strcmp(b[i].b_author,tp)==0)
{
printf("%s\n\n",b[i].b_name);
}
else
{
printf("Invalid Author\n");
}
}
}


void fourth(char tp[40],int no)
{
int i;
for(i=0;i<no;i++)
{
if(strcmp(b[i].b_name,tp)==0)
{
printf("Author:%s, Price:%d, Book no:%d\n\n",b[i].b_author,b[i].price,b[i].b_no);
}
else
{
printf("Invalid Bok name\n");
}
}
}

void fifth(int no)
{
int i,count=0;
for(i=0;i<no;i++)
{
count++;
}
printf("The total no. of books in library are: %d\n\n",count);

}


void sixth(int no)
{
int i;
//char tp[40];
for(i=0;i<no;i++)
{
printf("%d %s\t %s %d\n",b[i].b_no,b[i].b_author,b[i].b_name,b[i].price);
}
printf("\n");
}


