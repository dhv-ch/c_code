#include<stdio.h>

int login();
void checkbalance();
void withdraw();
void deposit();

int id[5]={1,2,3,4,5};
int pw[6]={0,111,222,333,444,555};
int balance[6]={0,1500,3000,2000,4000,6000};

void main()
{
int op;
int u=login();
if(u>0)
{
printf("User %d logged in successfully!\n\n",u);
do{
printf("Hello!! Hope you are well!! How can I help you??\nEnter 1 for Check Balance\nEnter 2 for cash withdraw\nEnter 3 for cash deposit\nEnter 4 for Quit\n");
scanf("%d",&op);	
switch(op)
	{
	case 1:
	checkbalance(u);
	break;

	case 2:
	withdraw(u);
	break;

	case 3:
	deposit(u);	
	break;

	case 4:
	printf("Thank you For visiting our bank...\nHave a Great Day!!\n\n");
	break;

	default:
	printf("Invalid Input\n");
	}

}while(op!=4);
}
else
{
printf("Card blocked!!\nSorry!!!\n");
}
}


//login part
int login()
{
int a,ps,trial=3;
printf("Enter your account id: \n");
scanf("%d", &a);

do
{
printf("Enter your pin: \n");
scanf("%d", &ps);
if(ps!=pw[a])
{
trial = trial-1;
}
}
while(ps!=pw[a] && trial>0); 
if(trial==0)
{
return -1;
}
else
{
return a;
}
}

void checkbalance(int b)
{
printf("User %d,Your balance in account is %d\n\n",b,balance[b]);
}

void withdraw(int b)
{
int amount;
printf("Enter amount that you want to withdraw:-\n");
scanf("%d", &amount);
if(balance[b]>=amount)
{
balance[b] = balance[b] - amount;
}
else 
{
printf("Insufficient Balance!\n\n");
}
}


void deposit(int b)
{
int amount;
printf("Enter amount you want to deposit:-\n");
scanf("%d", &amount);
balance[b] = balance[b] + amount;
}











