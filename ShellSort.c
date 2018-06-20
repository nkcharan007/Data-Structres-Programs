
// Shell sort

#include<stdio.h>
#include<conio.h>
int main()
{
int arr[30];
int i,j,k,temp,num;
clrscr();
printf("enter the total no.of elements");
scanf("%d",&num);
for(k=0;k<num;k++)
{
printf("\n enter the %d num:",k+1);
scanf("%d",&arr[k]);
}
for(i=num/2;i>0;i=i/2)
{
for(j=1;j<num;j++)
{
for(k=j-i;k>=0;k=k-i)
{
if(arr[k+j]>=arr[k])
break;
else
{temp=arr[k];
arr[k]=arr[k+i];
arr[k+i]=temp;
}
}
}
}
printf("\t*** shell sorting ***\n");
for(k=0;k<num;k++)
printf("%d/t",arr[k]);
getch();
return(0);
}
}
