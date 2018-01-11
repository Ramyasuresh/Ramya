#include<stdio.h>
void main()
{
int n,i,array[i],min;
printf("enter the number of elements");
scanf("%d",&n);
for(i=0;i<=n;i++)
scanf("%d",&array[i]);
min=array[0];
{
for(i=0;i<=n;i++)
{
if(min>array[i])
min=array[i];
i++;
}
printf("minimum elements is %d",min);
}
