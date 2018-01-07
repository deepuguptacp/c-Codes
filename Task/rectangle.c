#include<stdio.h>
int main(){
	double a, b, Area;
	printf("Enter the length of the length of the rectangle :");
	scanf("%lf", &a);
	printf("Enter the length of the breadth of therectangle :");
	scanf("%lf", &b);
	Area = a * b;
	printf("Area the rectangle is = %lf\n", Area);
	return 0;
}
