#include<stdio.h>
int main (){
	double a, b, division;
	printf("Enter the value of a : ");
	scanf("%lf", &a);
	printf("Enter the value of b : ");
	scanf("%lf", &b);
	division = a / b;
	printf("%lf / %lf:%lf\n", a, b, division);
	return 0;
}
