#include<stdio.h>
void main()
{
int array[i],i,n,max;
printf("enter number of elements");
scanf("%d",&n);
for(i=0;i<=n;i++)
scanf("%d",&array[i]);
max=array[0];
{
for(i=0;i<=n;i++)
{
if(max<array[i])
max=array[i];
i++;
}
printf("max element is %d",&max);
}
}
