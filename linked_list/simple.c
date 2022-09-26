#include<stdio.h>
#include<stdlib.h>

struct node{
int info;
struct node *link;  //this is to point pointer of node                                 
};

void traverse(struct node *);
struct node * insertAtFront(struct node *);
struct node * inAtPosition(struct node *);
struct node * insertAtEnd(struct node *);
struct node * deleteAtFront(struct node *);
struct node * countnode(struct node *);

int main()
{
struct node *first, *second, *third;
first = (struct node*)malloc(sizeof(struct node));
second = (struct node*)malloc(sizeof(struct node));
third = (struct node*)malloc(sizeof(struct node));


first->info = 1;
first->link = second;

second->info = 2;
second->link = third;

third-> info = 3;
third->link = NULL;
printf("Initial linked list: \n");
traverse(first);
printf("Linked list after insertion at first: \n");
first = insertAtFront(first);
traverse(first);
printf("Linked list after insertion at particular index: \n");
first = inAtPosition(first);
traverse(first);
printf("Linked list after insertion at end: \n");
first = insertAtEnd(first);
traverse(first);
printf("Linked list after deletion at first: \n");
first = deleteAtFront(first);
traverse(first);	

printf("total nodes are %d", countnode(first));
return 0;
}


void traverse(struct node *t)
{
	struct node* temp;

	// List is empty
	if (t == NULL)
		printf("\nList is empty\n");

	// Else print the LL
	else {
		temp=t;
		while (temp != NULL) {
			printf("%d\n", temp->info);
			temp = temp->link;
		}
	}
}


struct node * insertAtFront(struct node *t)
{
int x;
printf("enter no:- ");
scanf("%d",&x);
struct node * temp = (struct node *)malloc(sizeof(struct node));
if(temp == NULL)
{
printf("Overflow!!\n");
}
else
{
	//temp = t;
	temp->info = x;
	temp->link = t;
return temp;

}
}

struct node * inAtPosition(struct node *t)
{
struct node * temp = (struct node *)malloc(sizeof(struct node));
struct node *ptr;
int x,i=0,index;
ptr = t;
printf("enter no: ");
scanf("%d",&x);
printf("enter index: ");
scanf("%d",&index);
while(i!=index-1)
{
ptr = ptr->link;
i++;
}
temp->info=x;
temp->link = ptr->link;
ptr->link = temp;
return t; 
}

struct node * insertAtEnd(struct node *t)
{
int x;
printf("Enter no: ");
scanf("%d",&x);
struct node * temp = (struct node *)malloc(sizeof(struct node));   
temp->info = x;
struct node * ptr = t;

while(ptr->link!=NULL)
{
ptr = ptr->link;
}

ptr->link = temp;
temp->link = NULL;
return t;

}

struct node * deleteAtFront(struct node *t)
{
struct node * temp = t;
t=t->link;
free(temp);
return t;
}

struct node * countnode(struct node *t)
{
int count=1;
struct node * temp ;
if(t==NULL)
{
count=0;
return count;
}
else
{
temp = t;
while(temp->link!=NULL)
{
temp=temp->link;
count++;
}
return count;
}
printf("total nodes are: %d",count);
}














