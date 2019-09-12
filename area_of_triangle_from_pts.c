#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,e,f,val;
	printf("enter the coordinates of points of the triangle");
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
	val=0.5*(a*d+c*f+e*b-a*f-e*d-b*c);
	printf("area of triangle is %f",val);
	
}

