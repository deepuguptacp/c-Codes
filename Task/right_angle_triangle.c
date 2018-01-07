#include<stdio.h>
int main(){
	double a, b, Area;
	printf("Enter the length of the base of the triangle : ");
	scanf("%lf", &a);
	printf("Enter the length of the perpendicular of the 													triangle : ");
	scanf("%lf", &b);
	Area = 0.5 * a * b;
	printf("Area the right angle triangle is = %lf\n", Area);
	return 0;
}
