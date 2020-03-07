#include<stdio.h>
#include<math.h>
void main()
{ 
 float area,perimeter,h,b,c;
 printf("Enter the h,b,c of the triangle");
 scanf("%f %f %f",&b,&h,&c);
 perimeter=h+b+c;
 area=0.5*b*h;
 printf("Area of the triangle = %f \n",area);
 printf("Perimeter of the triangle = %f \n",perimeter);                              
}
