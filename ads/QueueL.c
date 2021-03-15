#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insert();
void delete();
void display();
struct node
{
int data;
struct node *link;
};
struct node *front,*rear,*ptr;
void main()
{
int ch,n;
front=NULL;
rear=NULL;
printf("Enter the no: of elements : ");
scanf("%d",&n);
while(ch!=4)
{
printf("\n1.Insert \n2.Delete \n3.Display \n4.Exit" );
printf("\nEnter a choice : ");
scanf("%d",&ch);
switch(ch)
{
case 1:insert();
       break;
case 2:delete();
       break;
case 3:display();
       break;
case 4:printf("\nExit");
       break;
default:printf("Invalid choice ");
}
};
getch();
}
void insert()
{
struct node *newnode;
newnode=(struct node *)malloc(sizeof(struct node));
printf("Enter the element to insert : ");
scanf("%d",&newnode->data);
newnode->data=newnode->data;
newnode->link=NULL;
if(rear==NULL)
{
front=newnode;
rear=newnode;
}
else
{
rear->link=newnode;
rear=newnode;
printf("\nElement Inserted ");
}
}
void delete()
{
struct node *del;
if(front==NULL)
printf("\nUnderflow");
else
{
del=front;
front=front->link;
if(front==NULL)
rear=NULL;
printf("\nElement deleted is %d",del->data);
free(del);
}
}
void display()
{
struct node *temp=front;
if(front==NULL && rear==NULL)
{
printf("Queue is empty ");
}
printf("Elements are :");
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->link;
}
}





