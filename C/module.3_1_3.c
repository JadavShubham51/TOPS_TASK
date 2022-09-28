//WAP to find area of circle, rectangle and triangle
//Circle	Area = π r 2  = π:3.14 r=redius
//Rectangle	Area = l × w = l : length w: weidth
//Triangle	Area = 1 2 bh = b:base h :height
#include<stdio.h>
int main()
{
	float radius,Area,l,w,b,h;
	
	// circle
	printf("Enter the redius:\n");
	scanf("%f",&radius);
	
	Area = 3.14*radius*2;
	
	printf("circle is area = %.2f\n",Area);
	
	//rectangle
	
	printf("Enter your length:\n");
	scanf("%f",&l);
	
	printf("Enter your wigth:\n");
	scanf("%f",&w);
	
	Area= l*w;
	printf("rectangel is area = %.2f\n",Area);
	
	printf("enter your base:\n");
	scanf("%f",&b);
	
	printf("enter your hight:\n");
	scanf("%f",&h);
	
	Area = 0.5*b*h;
	printf("triagle is area=%.2f",Area);
	return 0;
}