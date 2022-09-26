#include<stdio.h>
#include<stdlib.h>

struct node{
int info;
struct node *link;  //this is to point pointer of node                                 
};

void display(struct node *);
struct node* insert(int, struct node *);
struct node* insend(int , struct node *);

void main()
{
/*struct node *first, *second, *third;
first = (struct node*)malloc(sizeof(struct node));
second = (struct node*)malloc(sizeof(struct node));
third = (struct node*)malloc(sizeof(struct node));

first->info = 1;
first->link = second;

second->info = 2;
second->link = third;

third-> info = 3;
third->link = NULL;*/
struct node *first;
first=NULL;
first = insert(25,first);
first = insert(50,first);
first = insert(75,first);

printf("\nafter insertion\n");
display(first);
first = insend(100,first);
printf("\nafter insertion\n");
display(first);


}

//function define
void display(struct node *first)
{
struct node *save;
save= first;
while(save!=NULL)
	{
	printf("%d,",save->info);
	save = save->link;
	}
}



struct node* insert(int x,struct node *first)
{
struct node *new;
new = (struct node*)malloc(sizeof(struct node));
if(new==NULL)
	{
	printf("Overflow!!\n");
	return first;
	}

else 
{
	new->info = x;
	//new->link=NULL;
	if(first==NULL)
	{
		new->link=NULL;
		return new;
	}
	else
	{
		new->link=first;
		return new;
	}

}
}

struct node* insend(int x, struct node *first)
{
struct node *new;

new = (struct node*)malloc(sizeof(struct node));
if(new==NULL)
{
	printf("Link underflow!1\n");
	return first;
}
else
{
	new->info=x;
	//new->link==NULL;
	if(first==NULL)
	{
	new->link = NULL;
	return new;
	}
	else
	{
	new->link==first;
	return new;
	}
}
struct node *save;
save= first;
if(first==NULL)
{
	return new;
}
else
{
	while(save!=NULL)
		{
		save = save->link;
		return first;
		}
}
}
