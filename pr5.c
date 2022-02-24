#include<stdio.h>
int main()
{
int a[10],i,j,n,temp,min;
printf("enter the number of element\n");
scanf("%d",&n);
printf("enter the array element\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
min=i;
for(j=i+1;j<n;j++)
if(a[min]>a[j])
min=j;
temp=a[i];
a[i]=a[min];
a[min]=temp;
}
printf("selection sort is\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
return 0;
}

