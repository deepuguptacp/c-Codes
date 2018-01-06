#include<stdio.h>
int main (){
	double a, b, division;
	printf("Enter the value of a\n");
	scanf("%lf", &a);
	printf("Enter the value of b\n");
	scanf("%lf", &b);
	division = a / b;
	printf("Your division is:%lf\n", division);
	return 0;
}
