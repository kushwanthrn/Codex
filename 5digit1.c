#include<stdio.h>
 void main()
{
 int a,b,c,d,e,n,s=0;
 printf("Enter the 5 digit no");
 scanf("%d",&n);
 a=n%10;
 n=n/10;
 b=n%10; 
 n=n/10;
 c=n%10;
 n=n/10;
 d=n%10;
 n=n/10;
 e=n%10;
 n=n/10;
 s=a*10000+b*1000+c*100+d*10+e*1;
 printf("New number = %d\n",s);
}
