// SELECTION SORT

#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,t,a[20],n,pos;
clrscr();
printf("/n enter the no of elements to be sorted:");
scanf("%d",&n);
printf("\n enter the elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n elements before sorting:\n");
for(i=0;i<n;i++)
printf("\n%d",a[i]);
for(i=0;i<n-1;i++)
{
pos=i;
for(j=i+1;j<n;j++)
{
if(a[j]<a[pos])
pos=j;
}
t=a[pos];
a[pos]=a[i];
a[i]=t;
}
printf("\n sorted elements are:");
for(i=0;i<n;i++)
printf("\n%d",a[i]);
getch();
}
