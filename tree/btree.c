#include<stdio.h>
#include<stdlib.h>


struct node{
int data;
struct node *l;
struct node *r;
};

struct node* newnode(int key)
{
struct node *temp;
temp = (struct node*)malloc(sizeof(struct node));
temp->data = key;
temp->l=NULL;
temp->r=NULL;
return temp;
}

void inorder(struct node *);


struct node* insert(struct node* t,int data)
{
if(t==NULL)
	{
	return newnode(data);
	}
if(key < t->data)
	{
	t->l = insert(t->l,data);
	}
else
	{
	t->r=insert(t->r,data);
	}
return t;
}

void main()
{
struct node *root=NULL;
root = insert(root,50);
insert(root,30);
insert(root,20);
insert(root,40);
insert(root,70);

//end main
}



void inorder(struct node *t)
{
if(t==NULL)
{
printf("Empty tree\n");
}

else
{
	if(t->l!=NULL)
	{
	inorder(t->l);
	}
	printf("%c",t->data);
	if(t->r!=NULL)
	{
	inorder(t->r);
	}
}
}




