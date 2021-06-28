#include<stdio.h>
void insert();
void delet();
void display();
int rear=-1,front=-1,i,n;
int arr[20];
int main()
{
	int ch;
	printf("Enter the limit :");
	scanf("%d",&n);
	while(1)
	{
		printf("\n----MAIN MENU----\n");
		printf("1.Insert\n2.Delete\n3.Display\n4.Quit\n");
		printf("Enter your choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();
					break;
			case 2:delet();
					break;
			case 3:display();
					break;
			case 4:return 0;
			default:printf("Wrong Choice...!\n");
		}
	}
}
void insert()
{
	int data;
	if(rear==(n-1))
	{
		printf("Queue Overflow\n");
	}
	else
	{
		if(front==-1)
		front=0;
		printf("Input the element to queue :");
		scanf("%d",&data);
		rear=rear+1;
		arr[rear]=data;
	}
}
void delet()
{
	if(front==-1||front>rear)
	{
		printf("Queue Underflow\n");
	}
	else
	{
		printf("Deleted element : %d\n",arr[front]);
		front=front+1;
	}
}
void display()
{
	if(front>rear)
	{
		printf("Queue is empty\n");
	}
	else
	{
		printf("Queue elements are :");
		for(i=front;i<=rear;i++)
		printf("%d ",arr[i]);
		printf("\n");
	}
}

