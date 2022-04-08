#include<stdio.h>
#include<stdlib.h>

void printData(int a[],int n);
void countSort(int a[],int n)
{
int k=9,count[k+1],i,b[n];//counting sort is only used for one digit data.so,k value is 9
for(i=0;i<k+1;i++)
{
count[i]=0;
}
for(i=0;i<n;i++)
{
++count[a[i]];
}
for(i=1;i<k+1;i++)
{
count[i]=count[i]+count[i-1];
}
for(i=n-1;i>=0;i--)
{
b[--count[a[i]]]=a[i];
}
for(i=0;i<n;i++)
{
a[i]=b[i];
}
printData(a,n);
}
void printData(int a[],int n)
{
int i;
for(i=0;i<n;i++)
printf("%d ",a[i]);
}
void main()
{
int a[17],n;
printf("Enter no. of element or size of array\n");
scanf("%d",&n);
printf("Enter data\n");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
printData(a,n);
printf("\n");
countSort(a,n);
}
