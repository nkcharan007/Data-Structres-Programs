// EVALUATION OF POSTFIX EXPRESSION

  #include<stdio.h>
  #include<conio.h>
  #include<string.h>
  double compute(char symbol,double a,double b);
  void main()
  {
  double s[20],result, a,b;
  int i,top;
  char symbol,postfix[20];
  clrscr();
  printf("\n enter the postfix expression:");
  scanf("%s",postfix);
  top=top-1;
  for(i=0;i<strlen(postfix);i++)
  {
  symbol=postfix[i];
  if(isdigit (symbol))
  s[++top]=symbol-'0';
  else
  {
  b=s[top--];
  a=s[top--];
  result=compute(symbol, a,b);
  s[++top]=result;
  }
  }
  result=s[top--];
  printf("\n result is %f",result);
  getch();
  }
  double compute(char symbol, double a,double b)
  {
  switch(symbol)
  {
  case'+':return a+b;
  case'-':return a-b;
  case'*':return a*b;
  case'/':return a/b;
  case'&':
  case'^':return pow(a,b);
  }
  return 0;
  }
    /* output

 enter the postfix expression:48*

 result is 32.000000
 */
