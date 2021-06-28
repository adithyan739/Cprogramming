#include<stdio.h> 
#include<stdlib.h> 
struct node 
{ 
 int data; 
 struct node *link; 
}; 
typedef struct node node1; 
void add(); 
void display(); 
void display_alt(); 
node1 *nptr; 
node1 *start=NULL; 
node1 *create(); 
void main() 
{
	int ch;
	while(1)
	{
	printf("\n____MENU____");
	printf("\n\n1.Add\n2.Display and Count\n3.Display Alternatively\n4.Exit\n");
	printf("Enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:add();
		break;
		case 2:display();
		break;
		case 3:display_alt();
		break;
		default:printf("Exit");
		exit(0);
		break;
	}
}
}
node1 *create() 
{ 
 node1 *nptr=(node1*)malloc(sizeof(node1)); 
 if (nptr==NULL) 
 { 
 printf("Memory Overflow!"); 
 return 0; 
 } 
 else 
 return nptr; 
}
void add()
{
	int val;
	node1 *nptr=create();
	printf("Enter the value:");
	scanf("%d",&val);
	nptr->data=val;
	if(start==NULL)
	{
		start=nptr;
		nptr->link=NULL;
	}
	else
	{
		nptr->link=start;
		start=nptr;	
	}
	printf("Value inserted");
}
void display()
{
 int count=0; 
 node1 *temp; 
 if(start==NULL) 
 	printf("List Empty!"); 
 temp=start; 
 printf("Elements are:\n"); 
 while(temp!=NULL)
 {
 	printf("%d ",temp->data);
 	temp=temp->link;
 	count=count+1;
 	
 }
 printf("\nNumber of nodes:%d\n",count);
}
void display_alt()
{
 node1 *temp;
 node1 *temp1; 
 if(start==NULL) 
 printf("List Empty!\n"); 
 temp=start; 
 printf("\nAlternative Elements are:\n"); 
 while(temp!=NULL)
 {
 	printf("%d ",temp->data);
 	temp1=temp->link;
 	temp=temp1->link;
 	
 }	
}
