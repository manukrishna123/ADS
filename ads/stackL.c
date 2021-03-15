#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
int val;
struct node *next;
};
struct node *head;
void main()
{
int ch;
while(ch!=4)
{
printf("\n1.Push \n2.Pop \n3.Display \n4.Exit");
printf("Enter your choice : ");
scanf("%d",&ch);
switch(ch)
{
case 1:push();
       break;
case 2:pop();
       break;
case 3:display();
       break;
case 4:printf("Exit");
       break;
default:printf("\nEnter the right choice");
 };
}
}
void push()
{
int val;
struct node *ptr=(struct node*)malloc(sizeof(struct node));
if(ptr==NULL)
{
printf("Note able to push ");
}
else
{
printf("Enter the value to push : ");
scanf("%d",&val);
if(head==NULL)
{
ptr->val=val;
ptr->next=NULL;
head=ptr;
}
else
{
ptr->val=val;
ptr->next=head;
head=ptr;
}
printf("Element Pushed is %d",val);
}
}
void pop()
{
int item;
struct node *ptr;
if(head==NULL)
{
printf("Underflow");
}
else
{
item=head->val;
ptr=head;
head=head->next;
free(ptr);
printf("Popped item is %d",item);
}
}
void display()
{
int i;
struct node *ptr;
ptr=head;
if(ptr==NULL)
{
printf("Stack Empty");
}
else
{
while(ptr!=NULL)
{
printf("%d\n",ptr->val);
ptr=ptr->next;
}
}
}
