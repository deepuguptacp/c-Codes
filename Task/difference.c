#include<stdio.h>
int main (){
	double a, b, difference;
	printf("Enter the value of a\n");
	scanf("%lf", &a);
	printf("Enter the value of b\n");
	scanf("%lf", &b);
	difference = a - b;
	printf("Your difference is:%lf\n", difference);
	return 0;
}
