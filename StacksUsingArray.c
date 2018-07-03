//STACK USING AN ARRAY

#include<string.h>

#include<conio.h>

#define max 2
cha#include<stdio.h>
r s[max][15];
int i=0,top=0;
void push()
{
if(top>max)
{
printf("/n! stack is full");
return;
}
else
{
printf("\n enter the name to push:");
scanf("%s",&s[top]);
top=top+1;
return;
}
}
void pop()
{
if(top==0)
{
printf("\n! stack is empty");
return;
}
else
{
top=top-1;
printf("\n top=%d,name=%s, removed", top,s[top]);
strcpy(s[top],NULL);
return;
}
}
void display()
{
if(top==0)
{
printf("n! stack is empty");
return;
}
else
{
for(i=top-1;i>=0;i--)
printf("\n%d name =%s",i,s[i]);
return;
}
}
void main()
{
int choice;
clrscr();
do
{
printf("\n\t\t1.push");
printf("\n\t\t2.pop");
printf("\n\t\t3.display");
printf("\n\t\t4.exit");
printf("\n enter your choice");
scanf("%d",&choice);
switch(choice)
{
case1:push();break;
case2:pop();break;
case3:display();break;
case4:break;
defult:printf("\n enter your correct choice");
}
}
while(choice!=4);
}





















