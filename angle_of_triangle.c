#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,cos;
	printf("enter the sides of the triangle");
	scanf("%f%f%f",&a,&b,&c);
	cos=((b*b+c*c-a*a)/2*b*c);
	printf("cos of angle A is %f",cos);
	
}

