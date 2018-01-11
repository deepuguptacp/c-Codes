#include<stdio.h>
int main(){
	double a, Area, Circumference;
	printf("Enter the length of the Radius of the circle : ");
	scanf("%lf", &a);
	Area = 3.14 * a * a;
	Circumference = 6.28 * a;
	printf("Area of circle : %lf", Area);
	printf("Circumference of circle is : %lf\n", 			           					Circumference);
	return 0;
}
