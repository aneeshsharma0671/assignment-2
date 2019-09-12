#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,dis;
	printf("enter the coordinates of two points");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	dis=sqrt((c-a)*(c-a)+(d-b)*(d-b))
	printf("distance btween two points is %f",dis);
	
}

