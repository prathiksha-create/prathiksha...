#include<stdio.h>
#include<stdlib.h>
void push(int*,int);
int pop();
void display(int*);
#define MAX 3
int top=-1;

void main()
{
int stack[MAX];
int choice,item;
while(1)
{
printf("\n operation:");
printf("\n 1.push");
printf("\n 2.pop");
printf("\n 3.display");
printf("\n 4.exit");
printf("\n enter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("\n push the element:");
scanf("%d",&item);
push(stack,item);
break;

case 2:item=pop(stack);
if(item)
printf("\n poped item is %d",item);
break;

case 3:display(stack);
break;

default: exit(0);
}
}
}

void push(int *stack,int item)
{
if(top==MAX-1)
{
printf("\n stack is overflow");
return;
}
stack[++top]=item;
printf("\n element pushed sucessfully");
if(top==MAX-1)
printf("\n empty");
}

int pop(int *stack)
{
int item;
if(top==-1)
{
printf("stack is underflow");
return 0;
}
item=stack[top--];
if(top==-1)
printf("\n after pop stack is empty");
return item;
}

void display(int *stack)
{
int temp;
if(top==-1)
{
printf("\n stack is empty");
return;
}
printf("\n contents of the stack are:");
{
for(temp=top; temp>0;temp--)
printf("%d\t",stack[temp]);
return;
}
}

