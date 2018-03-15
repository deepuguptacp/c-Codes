#include<stdio.h>
int main(){
    int i, j;
    printf("Prime numbers between 1 to 1000 are : \n");
    for(i=1; 1<=1000; i++)
    {
        for(j=2; j<=i/2; j++)
        {
        if(i/j != 0)
        printf("%d", i);
        }
    }
    return 0;
}