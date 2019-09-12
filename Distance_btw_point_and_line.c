#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,e,dis;
	printf("enter the coordinates of two points");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	dis=(a*c+b*d+e)/sqrt(c*c+d*d);
	printf("distance btween point and line is %f",dis);
	
}

