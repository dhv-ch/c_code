//Program for creating a binary tree and printing it in preorder,inorder and postorder.

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *l;
	struct node *r; 
};


struct node* newNode(int);
void inorder(struct node *);
void preorder(struct node *);
void postorder(struct node *);
struct node* insert(struct node *, int);


int main()
{
int i=0,n,rt;
int value;
struct node* root = NULL;
	
printf("Enter the no of nodes do you want id binary tree: \n");
scanf("%d", &n);
printf("Enter the value of first node: \n");
scanf("%d", &rt);
root = insert(root, rt);
for(i=0; i<n-1;i++)
{
printf("enter the value you want to add in tree\n");
scanf("%d", &value);
insert(root,value);
}
printf("preorder is \n");
preorder(root);
printf("inorder is \n");
inorder(root);
printf("postorder is \n");
postorder(root);
return 0;
}

struct node* newNode(int x)
{
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = x;
	temp->l = temp->r = NULL;
	return temp;
}

void preorder(struct node*t)
{
if(t==NULL)
{
printf("Empty tree\n");
}

else
{
	printf("%d ",t->data);
	if(t->l!=NULL)
	{
	preorder(t->l);
	}
	if(t->r!=NULL)
	{
	preorder(t->r);
	}
	//printf("%c",t->data);
}
}
void inorder(struct node * t)
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
	printf("%d ",t->data);
	if(t->r!=NULL)
	{
	inorder(t->r);
	}
}
}

void postorder(struct node*t)
{
if(t==NULL)
{
printf("Empty tree\n");
}
else
{
	if(t->l!=NULL)
	{
	postorder(t->l);
	}
	if(t->r!=NULL)
	{
	postorder(t->r);
	}
	
}
printf("%d ",t->data);
}

struct node* insert(struct node* t, int x)
{
if (t == NULL){
	return newNode(x);}

if (x < t->data)
{
	t->l = insert(t->l, x);
}
else if (x > t->data)
{
	t->r = insert(t->r, x);
}
	return t;
}

