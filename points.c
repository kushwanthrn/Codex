#include <stdio.h>
#include <math.h>
void main()
{
	float x1,y1,x2,y2,dis;
	printf("Enter the X and Y co-ordinates of first point \n");
	scanf("%f %f",&x1,&y1);
	printf("Enter the X and Y co-ordinates of second point \n");
	scanf("%f %f",&x2,&y2);
	dis=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("The distance between the two points is =%f",dis);
}
© 2020 GitHub, Inc.
