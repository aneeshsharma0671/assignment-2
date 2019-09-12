#include<stdio.h>
int main()
{
	float a,b,c,p,q,r;
	printf("enter the value of a,b,c for the equation ax+by+c=0  and value of p,q,r for the equation px+qy+r=0\n");
	scanf("%f%f%f%f%f%f",&a,&b,&c,&p,&q,&r);
	printf("point of intersection of points is (%f,%f)",((b*r)-(q*c))/((a*q)-(p*b)),((c*p)-(r*a))/((a*q)-(p*b)));
	return(0);	
}

