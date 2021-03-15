#include<stdio.h>
#include<conio.h>
int stack[100];
int top=-1,N;
void Push();
void Pop();
void Display();
void topele();
void main()
{
int ch;
printf("\nEnter no: of elements: ");
scanf("%d",&N);
do
{
printf("\nEnter your choice : ");
scanf("%d",&ch);
printf("\n1.Push \n2.Pop \n3.Display \n4.Top Element \n5.Exit");
switch(ch)
{
case 1:Push();
       break;
case 2:Pop();
       break;
case 3:Display();
       break;
case 4:topele();
       break;
case 5:printf("\nExit");
       }
}while(ch!=0);
 getch();
}
void Push()
{
int x;
printf("\nEnter element to be added : ");
scanf("%d",&x);
if(top==N-1)
{
printf("Overflow");
}
else
{
top++;
stack[top]=x;
}
}
void Pop()
{
int item;
if(top==-1)
{ 
printf("\nUnderflow");
}
else
{
item=stack[top];
top--;
printf("Deleted element is %d",item);
}
}
void Display()
{
int i;
for(i=top;i>=0;i--)
{
printf("\n%d\t\n",stack[i]);
}
if(top==-1)
printf("\nStack Empty");
}
void topele()
{
int tope;
if(top==-1)
{
printf("\n Stack is Empty ");
}
else
{
tope=stack[top];
printf("Topmost Element is :%d",tope);
}
}

