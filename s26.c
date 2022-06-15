#include<stdio.h>
#include<stdlib.h>
# define size 5
int rear = -1;
int front = -1;
int que[size];
int isfull()
{
	if(rear==(size)-1)
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
	if(front==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void enque()
{
	int val;
	scanf("%d",&val);
	if(isfull())
	{
		printf("que is full\n");
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
		rear++;
		que[rear]=val;
	}
}
void deque()
{
	if(isempty())
	{
		printf("que is empty\n");

	}
	else
	{
		front++;
		if(front>rear)
		{
			front=-1;
			rear=-1;
		}
	}
}	
void display()
{
	int i,x,y;
	x=rear;
	y=front;
	for(i=x;i>=y;i--)
	{
		printf("%d ",que[i]);
	}
}
void main()
{
	int ch,entry;
	while(1)
	{
		printf("enter your chice\n");
		printf("\n1.enque,2.deque,3.display,4.exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				enque();
				break;
			}
			case 2:
			{
				deque();
				break;
				}
			case 3:
			{
				display();
				break;
			}
			case 4:
			{
				exit(0);
			}
		}
	}	
}






















