#include<stdio.h>
#include<stdlib.h>

struct node{
int info;
struct node *l;
struct node *r;
};

void main()
{
struct node *first, *second, *third, *forth;
first = (struct node*)malloc(sizeof(struct node));
second = (struct node*)malloc(sizeof(struct node));
third = (struct node*)malloc(sizeof(struct node));
forth = (struct node*)malloc(sizeof(struct node));

first->info = 11;
first->r = second;

second->info = 22;
second->r = third;

third-> info = 33;
third->r = forth;

forth-> info = 44;
forth->r = first;


}
