

// Program for entering guessed number.

//let's play a game!!


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()

{

int num;
srand(time(0));
num=1+rand()%100;
printf("%d",num);
int n;

do
{
printf("Enter your guessed number:- ");
scanf("%d", &n);

if(n==num)
{
printf("Excellent!!You guessed the number!");
break;
}
else if(n<num)
{
printf("Too Low!Try Again\n");
}
else
{
printf("Too High!Try Again\n");
}
}
while(n<num || n>num);
}
