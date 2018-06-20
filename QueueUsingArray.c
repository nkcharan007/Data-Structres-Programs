// QUEUE USING AN ARRAY

#include<stdio.h>
#define MAX 50
int queue_array[MAX];
int rear=-1;
int front=-1;
main()
{
int choice;
while(1)
{
printf("\n 1:Insert element to queue:");
printf("\n 2:Delete element from queue:");
printf("\n 3:Display all elements in the queue");
printf("\n 4:Quit");
printf("\n Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
insert();
break;
case 2:
delete();
break;
case 3:
display();
break;
case 4:
exit();
break;
default:
printf("\n wrong choice");
}
}
}
insert()
{
int add_item;
if(rear==MAX-1)
printf("\n Queue overflow");
else
{
if(front==-1)
front=0;
printf("\n Insert the element in queue:");
scanf("%d",&add_item);
rear=rear+1;
queue_array[rear]=add_item;
}
}
delete()
{
if(front==-1||front>rear)
{
printf("\n Queue overflow");
return;
}
else
{
printf("\n Element deleted from queue is:%d",queue_array[front]);
front=front+1;
}
}
display()
{
int i;
if(front==-1)
printf("\n Queue is empty");
else
{
printf("\n Queue is %d");
for(i=front;i<rear;i++)
printf("\n %d",queue_array[i]);
printf("\n\n");
}
}
