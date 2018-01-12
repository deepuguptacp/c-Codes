#include<stdio.h>
int main(){
	int a, b, c;
	printf("Enter any three integers = ");
	scanf("%d %d %d", &a, &b, &c);
	if(a>=b && a>=c)
	{
		printf("The greatest number is :  %d\n", a);
	}
	elseif(b>=a && b>=c);
	{
		printf("The greatest number is : %d\n", b);
	}
	elseif(c>=b && c>=a);
	{
		printf("The greatest number is : %d\n", c);
	}
	return 0;
}
