#include<stdio.h>
int i,n,stack[20],ch,data,del,top=-1;
void push();
void pop();
void display();
void peek();
int main()
{

	top=-1;
	printf("_____STACK OPERATION USING ARRAY_____\n\n");
	printf("Enter the limit of Stack :");
	scanf("%d",&n);
	while(1)
	{
	printf("\n------MENU------\n1.Push\n2.Pop\n3.Display\n4.Peek\n5.Exit\n-----------------\n");
	printf("Enter your Choice :");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:push();
			   break;
		case 2:pop();
			   break;
		case 3:display();
			   break;
		case 4:peek();
			   break;
		case 5:return 0;
		default:printf("Invalid Choice!\n");
							
	}
}
}

void push()
{
	
	if(top>=n-1)
	{
		printf("Stack is Overflow\n");

	}
	else{
		printf("Enter the element to insert :");
		scanf("%d",&data);
		top=top+1;
		stack[top]=data;
	}
}

void pop()
{
	
	if(top<=-1)
	{
		printf("Stack is Underflow!\n");
		
	}
	else{
		printf("Deleted element :%d\n",stack[top]);
		top=top-1;
	}
}

void display()
{
	if(top>-1)
	{
		printf("The elements of Stack are :");
		for(i=top;i>=0;i--)
		printf("%d ",stack[i]);
		printf("\n");
	}
	else{
		printf("Stack is Empty!\n");
	}
}
void peek()
{
if(top==-1)
{
printf("Stack Underflow!\n");
}
else
{
printf("Element at top :%d\n",stack[top]);
}
}
