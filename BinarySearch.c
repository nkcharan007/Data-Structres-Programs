
// BINARY SEARCH


#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,n,key,low,high,mid;
clrscr();
printf("\nEnter the no.of elements to search:");
scanf("%d",&n);
printf("\nEnter the elements into array in ascending order:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\nEnter the number to be searched:");
scanf("%d",&key);
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(key==a[mid])
{
printf("\nThe element %d is found at %d position",key,mid+1);
getch();
exit(0);
}
else
if(key<a[mid])
high=mid-1;
else
low=mid+1;
}
printf("\nElement is not found");
getch();
}
