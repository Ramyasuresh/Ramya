#include<stdio.h>
#include<math.h>
void main()
{
int n,a1,value,d;
int t1,sum;
printf("enter the first term");
scanf("%d",&a1);
printf("enter the number of terms");
scanf("%d",&n);
printf("find the difference");
scanf("%d",&d);
sum=n((2*a1+(n-1)*d))/2;
t1=a+(n-1)*d;
for(i=a1;i<=t1;i+d)
{
if(i!=t1)
printf("%d+",i);
else
printf("%d=%d",i,sum);
}
}
