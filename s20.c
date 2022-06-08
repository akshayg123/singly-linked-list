#include<stdio.h>
#include<stdlib.h>
# define n 5
int top=-1;
int stack[n];
void push()
{
	int val;
	printf("enter value\n");
	scanf("%d",&val);
	if(isfull())
	{
		printf("overflow\n");
	}
	else
	{
		top++;
		stack[top]=val;
		printf(" pushed is %d\n",stack[top]);
	}
}
void pop()
{
	if(isempty())
	{
		printf("underflow\n");
	}
	else
	{
		printf(" popped is %d\n",stack[top]);
		
		top--;
	}
}
int isfull()
{
	if(top==(n-1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isempty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	{	
		return 0;
	}
}
void findtop()
{
	printf("top is %d",top);
	printf("top value is %d",stack[top]);
}
void display()
{
	int i,x;
	x=top;
	for(i=x;i>=0;i--)
	{
		printf("\n%d",stack[i]);
	}
}
void main()
{
	while(1)
	{	
		int ch;
		printf("1.push\t2.pop\t3.display\t4.find top\t5.exit\n");
		printf("enter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				push();
				break;
			}
			case 2:
			{
				pop();
				break;
			}
			case 3:
			{
				display();
				break;
			}
			case 4:
			{
				findtop();
				break;
			}
			case 5:
			{
				exit(0);
			}
		}
	}
}	
	



























































