#include<stdio.h>
#include<conio.h>
#define maxsize 25
void insert();
void delete();
void display();
void fele();
void rele();
int front=-1,rear=-1;
int q[maxsize];
void main()
{
int ch,n;
printf("Enter the no: of elements : ");
scanf("%d",&n);
while(ch!=6)
{
printf("\n1.Insert \n2.Delete \n3.Display \n4.Front Element \n5.Rear Element \n6.Exit" );
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
case 4:fele();
       break;
case 5:rele();
       break;
case 6:printf("\nExit");
       break;
default:printf("Invalid choice ");
}
};
getch();
}
void insert()
{
int x;
printf("Enter element to insert : ");
scanf("%d",&x);
if(rear==maxsize-1)
{
printf("\nOverflow");
}
else if(front==-1 && rear==-1)
{
front=0;
rear=0;
}
else
rear++;
q[rear]=x;
printf("Inserted element is %d",x);
}
void delete()
{
int item;
if(front==-1 || front>rear)
{
printf("\nunderflow");
}
else 
{
item=q[front];
if(front==rear)
{
front=-1;
rear=-1;
}
else
front++;
}
printf(" element deleted ");
}
void display()
{
int i;
if(rear==-1)
{
printf("queue is empty");
}
else
{
printf("The elements are :\n ");
for(i=front;i<=rear;i++)
{
printf("\n%d\n",q[i]);
}
}
}
void fele()
{
int item;
if(front==-1)
printf("Empty queue");
else
{
item=q[front];
printf("\nFront element is %d",item);
}
}
void rele()
{
int item;
if(rear==-1)
printf("Empty Queue");
else
{
item=q[rear];
printf("Rear element is %d",item);
}
}





