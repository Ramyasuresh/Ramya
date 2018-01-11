#include<stdio.h>
void main()
{
int array[i],i,j,n,t;
printf("enter the number of elements %d",n);
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(array[j]<array[i]
{
t=array[i];
array[i]=array[j];
array[j]=t;
}}
for(i=0;i<n;i++)
{
printf("sorted emlements are %d",array[i]);
}
}
