#include<stdio.h>
void main()
{
 float a,t;
 int m1,m2,m3;
 char name[30];
 printf("Enter your name \n");
 scanf("%s",name);
 printf("Enter your marks m1 m2 m3\n");
 scanf("%d %d %d", &m1, &m2, &m3);
 t=m1+m2+m3;
 a=t/3.0;
 printf("Name is %s \n", name);
 printf("Average is %f \n",a);				
 printf("Total marks are %f \n",t);
 
}                    		
  




