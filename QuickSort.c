//  QUICK SORT

#include<stdio.h>
#include<conio.h>
void input();
void output();
void sort();
int i,j,n,x[50];
void main()
{
int i;
clrscr();
printf("\nEnter how many elements do you need:");
scanf("%d",&n);
input();
sort(0,n-1);
output();
getch();
}
void input()
{
printf("\nEnter the elements:");
for(i=0;i<n;i++)
scanf("%d",&x[i]);
}
void output()
{
printf("\n Sorted elements are:");
for(i=0;i<n;i++)
printf(" %d",x[i]);
}
void sort(int first,int last)
{
int temp,pivot,i,j;
if(first<last)
{
pivot=x[first];
i=first;
j=last;
while(i<j)
{
while(x[i]<=pivot&&i<last)
i++;
while(x[j]>=pivot&&j>first)
j--;
if(i<j)
{
temp=x[i];
x[i]=x[j];
x[j]=temp;
}
}
temp=x[first];
x[first]=x[j];
x[j]=temp;
sort(first,j-1);
sort(j+1,last);
}
}
