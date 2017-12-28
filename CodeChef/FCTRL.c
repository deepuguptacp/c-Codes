#include<stdio.h>

/**
 * Method to calculate trailing zeros of factorial of a number
 * @param N: number
 * @return: count of trailing zeros in the factorial of number N 
 */
int calculateFactorialZeros(int N) {
	int count  = 0;
	while(N >= 5) {
		N = N/5;
		count += N;
	}
	return count;
}

int main() {
	
	int T, N, i, ans;
	scanf("%d", &T);
	for(i = 1; i <= T; i++) {
	 	ans = 0;
		scanf("%d", &N);
		ans = calculateFactorialZeros(N);
		printf("%d\n", ans);	
	}

	return 0;
}
