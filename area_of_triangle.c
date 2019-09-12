#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s,val;
	printf("enter the sides of the triangle");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	val=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area of triangle is %f",val);
	
}

