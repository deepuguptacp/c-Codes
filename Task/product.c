#include<stdio.h>
int main (){
	double a, b, product;
	printf("Enter the value of a\n");
	scanf("%lf", &a);
	printf("Enter the value of b\n");
	scanf("%lf", &b);
	product = a * b;
	printf("Your product is:%lf\n", product);
	return 0;
}
