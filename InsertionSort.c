
// INSERTION SORT

#include<stdio.h>
int n,a[100];
void main()
{
int i;
void insertion(int a[],int n);
clrscr();
printf("enter array size\n");
scanf("%d",&n);
printf("enter the elements to sort \n");
for(i=0;i<n;i++)
scanf("%d",& a[i]);
printf("\n\n elements before sorting \n");
for(i=0;i<n;i++)
printf("%d",a[i]);
insertion(a,n);
printf("\n\n sorted elements \n");
for(i=0;i<n;i++)
printf("%d",a[i]);
getch();
}
void insertion(int a[],int n)
{
int index,position,i,temp;
for(index=1;index<n;index++)
{
temp=a[index];
position=index;
while(position>0 && a[position-1]>temp)
{
a[position]=a[position-1];
position--;
}
a[position]=temp;
