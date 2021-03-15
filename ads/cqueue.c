#include<stdio.h>
#include<conio.h>
#define maxsize 25
void cqinsert();
void cqdelete();
void cqdisplay();
int front=-1,rear=-1;
int q[maxsize];
void main()
{
int ch,n;
printf("Enter the no: of elements : ");
scanf("%d",&n);
while(ch!=4)
{
printf("\n1.Insert \n2.Delete \n3.Display \n4.Exit");
printf("\nEnter a choice : ");
scanf("%d",&ch);
switch(ch)
{
case 1:cqinsert();
       break;
case 2:cqdelete();
       break;
case 3:cqdisplay();
       break;
case 4:printf("exit");
       break;
default:printf("Invalid choice");
}
};
getch();
}
void cqinsert()
{
int item;
printf("\nEnter the element : ");
scanf("%d",&item);
if(front==0 && rear==(maxsize-1))
{
printf("\nOverflow");
}
else
{
rear=(rear+1)%maxsize;
q[rear]=item;
}
if(front==-1)
front=0;
printf("\nElement inserted");
}
void cqdelete()
{
int item;
if(front==-1)
{
printf("\nUnderflow");
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
front=(front+1)%maxsize;
}
printf("Element deleted is %d",item);
}
void cqdisplay()
{
int i;
if(rear==-1)
printf("\nEmpty queue ");
else
{
printf("\nThe elements are :");
for(i=front;i<=rear;i++)
{
printf("%d\t",q[i]);
}
}
}