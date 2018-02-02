#include <stdio.h>
<<<<<<< HEAD
int main()
{
    int n, i, factorial = 1;
=======
int main() {
    int n, i, factorial;
>>>>>>> 9db1f430d8253d4f1a736ae2966905e28f66beae

    printf("Enter an integer: ");
    scanf("%d",&n);

    // show error if the user enters a negative integer
<<<<<<< HEAD
    if (n < 0){
        printf("Error! Factorial of a negative number doesn't 													exist.");
	}

    else{
        for(i=1; i<=n; ++i)
        {
=======
    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.");
    }
    else {
        for(i=1; i<=n; ++i) {
>>>>>>> 9db1f430d8253d4f1a736ae2966905e28f66beae
            factorial *= i;    
        }
        printf("Factorial of %d = %d", n, factorial);
    }

    return 0;
}
