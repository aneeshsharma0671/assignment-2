#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	printf("enter the value of a,b,c for the equation x*x+y*y+a*x+b*y+c=0 \n");
	scanf("%f%f%f",&a,&b,&c);
	printf("centre (%f,%f)",-a/2,-b/2);
	printf("radius of circle is %f",sqrt((-a/2)*(-a/2)+(-b/2)*(-b/2)-c));
	
}

