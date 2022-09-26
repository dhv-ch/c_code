#include<stdio.h>
#include<stdlib.h>

struct node{
int info;
struct node *link;
};

void traverse(struct node *);
struct node * insertAtFirst(struct node *);
struct node * insertAtEnd(struct node *);
struct node * deleteAtFront(struct node *);
struct node * deleteAtEnd(struct node *);

void main()
{
struct node *first, *second, *third, *forth;
first = (struct node*)malloc(sizeof(struct node));
second = (struct node*)malloc(sizeof(struct node));
third = (struct node*)malloc(sizeof(struct node));
forth = (struct node*)malloc(sizeof(struct node));

first->info = 11;
first->link = second;

second->info = 22;
second->link = third;

third-> info = 33;
third->link = forth;

forth-> info = 44;
forth->link = first;
printf("This is circular linked list\n");
printf("Initial linked list: \n");
traverse(first);

printf("\n\nAfter insertion at front: \n");
first = insertAtFirst(first);
traverse(first);

printf("\n\nAfter insertion at end: \n");
first = insertAtEnd(first);
traverse(first);

printf("\n\nAfter deletion at front: \n");
first = deleteAtFront(first);
traverse(first);
printf("\nYou can see first node is deleted\n");


printf("\n\nAfter deletion at end: \n");
first = deleteAtEnd(first);
traverse(first);
printf("\nYou can see last node is deleted\n");
}

void traverse(struct node *t)
{
struct node * ptr = t;
printf("%d ",ptr->info);
ptr = ptr->link;

while(ptr!=t)
{
printf("%d ",ptr->info);
ptr = ptr->link;
}

}

struct node * insertAtFirst(struct node *t)
{
int x;
printf("Enter no: ");
scanf("%d", &x);
struct node * temp = (struct node*)malloc(sizeof(struct node)); 
if(temp==NULL)
{
printf("Memory overflow!!\n");
}
else
{
temp->info = x;

struct node * p = t->link;
while(p->link!=t)
{
p=p->link;
}
p->link = temp;
temp->link = t;
t=temp;
return t;
}
}

struct node * insertAtEnd(struct node *t)
{
int x;
printf("Enter no: ");
scanf("%d", &x);
struct node * temp = (struct node*)malloc(sizeof(struct node)); 
if(temp==NULL)
{
printf("Memory overflow!!\n");
}
else
{
temp->info = x;

struct node * p = t->link;
while(p->link!=t)
{
p=p->link;
}
p->link = temp;
temp->link = t;
return t;
}
}


struct node * deleteAtFront(struct node *t)
{
struct node * temp;
if(t==NULL)
{
printf("Underflow!!\n");
}

else
{
temp = t;
while(temp->link != t)
{
temp = temp->link;
}
temp->link = t->link;
free(t);
t = temp->link;
return t;
printf("node deleted\n");
}

}

struct node * deleteAtEnd(struct node *t)
{
struct node * temp, *ptr;
if(t==NULL)
{
printf("Underflow!!\n");
}

else
{
temp = t;
while(temp->link != t)
{
ptr = temp;
temp = temp->link;
}
ptr->link = temp->link;
free(temp);
return t;
}

}









