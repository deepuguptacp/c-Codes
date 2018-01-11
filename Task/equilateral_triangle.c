#include<stdio.h>
int main(){
	double a, Perimeter, Area;
	printf("Enter the side length : ");
	scanf("%lf", &a);
	Area = 0.433*a;
	Perimeter = 3*a;
	printf("Area of Equilateral traingle is : %lf\n", Area);
	printf("Perimeter of Equilateral traingle is : %lf\n", 														Perimeter);
	return 0;
}
