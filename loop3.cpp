#include<stdio.h>
int main(){
	int i, j, k=5;
	for(i=1; i<=k; i++) {
		for(j=i; j<=k; j++) {
			printf(" ");
		}
		for(j=1; j<=(2*i-1); j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
