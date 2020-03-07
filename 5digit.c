#include<stdio.h>
 void main()
{
 int a,b,c,d,e,n,s=0;
 printf("Enter the 5 digit no");
 scanf("%d",&n);
 a=n%10;
 s=s+a;
 n=n/10;
 b=n%10; 
 s=s+b;
 n=n/10;
 c=n%10;
 s=s+c;
 n=n/10;
 d=n%10;
 s=s+d;
 n=n/10;
 e=n%10;
 s=s+e;
 n=n/10;
 printf("New number = %d\n",s);
}
