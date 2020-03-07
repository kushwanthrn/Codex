#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the value of a,b \n");
scanf("%d %d",&a,&b);
c=a;
a=b;
b=c;
printf("value of a=%d \n",a);
printf("value of b=%d",b);
}
