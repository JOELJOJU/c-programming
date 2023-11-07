#include<stdio.h>
int a[100],i,c,top=-1,item,k;
void menu();
void push();
void pop();
void peek();
void display();
void main()
{
printf("Enter the elements:");
scanf("%d",&i);
menu();
}
void menu()
{
	printf("\n1.Push () \n2.Pop () \n3.Peek() \n4.dislpay \n5.exit \nEnter your choice :");
	scanf("%d",&c);
	switch(c)
	{
		case 1:push();
			break;
		case 2:pop();
			break;
		case 3:peek();
			break;
		case 4:display();
			break;
		case 5:printf("exiting");
			break;
			
		default:printf("invalid choice\n");
	}
	
}
void push()
{
	if (top<i-1)
	{
		top=top+1;
		printf("enter the element to be inserted :");
		scanf("%d",&item);
		a[top]=item;
		printf("push executed successfully...");
		
	}
	else
	{
		printf("OVERFLOW\n");
	}
	menu();
	
}
void pop()
{
if(top==-1)
{
	printf("UNDERFLOW\n");
}
else
{
	item=a[top];
	top=top-1;
	printf("pop executed successfully...");
}
menu();
}
void peek()
{
if(top==-1)
			{
				printf("UNDERFLOW\n");
			}
			else
			{
			printf("Top element of the stack is : %d\n",a[top]);
			}
menu();
}
void display()
{
if(top==-1)
{
	printf("UNDERFLOW\n");
}
else
{
	printf("Elements are :");
	for(k=top;k>=0;k--)
	{
		printf("%d\t",a[k]);
	}
menu();
}
}
