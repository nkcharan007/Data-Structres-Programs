// CONVERTION INFIX TO POSTFIX

#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 100
char stack[MAX],infix[MAX];
int i=0,top=-1,len;
void push(char item);
void pop();
void main()
{
clrscr();
push('(');
printf("\nEnter the infix expression\n");
gets(infix);
printf("\nPostfix form is\n");
len=strlen(infix);
infix[len]=')';
infix[len+1]=NULL;
while(infix[i]!=NULL)
{
switch(infix[i])
{
case '+':
case '-': while(stack[top]=='+'||stack[top]=='-'||stack[top]=='*'||stack[top]=='/'||stack[top]=='^')
{
pop();
}
push(infix[i]);
break;
case '* ':
case '/': while(stack[top]=='*'||stack[top]=='/'||stack[top]=='^')
{
pop();
}
push(infix[i]);
break;
case '^': while(stack[top]=='^')
{
pop();
}
push(infix[i]);
break;
case '(':push(infix[i]);
break;
case ')': while(stack[top]!='(')
{
pop();
}
top=top-1;
break;
default:if((infix[i]>='0'&&infix[i]<='9')||(infix[i]>='A'&&infix[i]<='Z')||(infix[i]>='a'&&infix[i]<='z'))
printf("%c",infix[i]);
else
printf("\n Enter the correct infix form\n");
}
i++;
}
getch();
}
void push(char item)
{
top=top+1;
stack[top]=item;
}
void pop()
{
printf("%c",stack[top]);
top=top-1;
}


                            //OUT PUT//


 /*
Enter the infix expression
a+b

Postfix form is
ab+               */
