#include<stdio.h>
void main()
{ int a,b,ch;
 printf("enter the value of a and b");
 scanf("%d%d",&a,&b);
 printf("Enter choice");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1: printf("sum=%d\n",a+b);
          break;
  case 2: printf("sub=%d\n",a-b);
          break;
  default : printf(" operator invalid\n");
}
}
