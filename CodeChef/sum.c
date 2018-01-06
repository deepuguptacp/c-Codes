#include<stdio.h>
int main (){
	double a, b, sum;
	printf("Enter the value of a\n");
	scanf("%lf", &a);
	printf("Enter the value of b\n");
	scanf("%lf", &b);
	sum = a + b;
	printf("Your sum is:%lf\n", sum);
	return 0;
}
