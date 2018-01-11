#include<stdio.h>
<<<<<<< HEAD
int main (){
	double a, b, division;
	printf("Enter the value of a : ");
	scanf("%lf", &a);
	printf("Enter the value of b : ");
	scanf("%lf", &b);
	division = a / b;
	printf("%lf / %lf : %lf\n", a, b, division);
=======
#include<stdlib.h>
int main () {
	int a, b;
	double division;
	printf("Enter the value of a: ");
	scanf("%d", &a);
	printf("Enter the value of b: ");
	scanf("%d", &b);

	if(b == 0) {
		fprintf(stderr, "Division by zero! Aborting...\n");
    	exit(EXIT_FAILURE); /* indicates failure.*/
	}
	division = (double)a / b;
	printf("%d / %d : %.2lf\n", a, b, division);
>>>>>>> 6923210030facbe1d1e8e6be9a2b8ea87e6b8ed9
	return 0;
}
