// LINEAR SEARCH

#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],key,n,i;
clrscr();
printf("\nEnter the no.of elements to be sorted:");
scanf("%d",&n);
printf("\nEnter %d elements for sorting:",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\nEnter the searching element:");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(key==a[i])
{
printf("\n%d is found at % position",key,i+1);
getch();
exit(0);
}
}
printf("\nElement is not found");
getch();
}







                                          Output

Enter the no.of elements to be sorted:6

Enter 6 elements for sorting:34
23
11
6
7
81

Enter the searching element:7

7 is found at  0005 position
