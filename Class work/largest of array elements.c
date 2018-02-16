#include<stdio.h>
int main(){
    int a[10], i, large=0;
    for(i=0; i<10; i++)
    {
        printf("\nEnter %d element of array : ", i+1);
        scanf("%d", &a[i]);
    }
    for(i=0; i<10; i++)
    {
        if(a[i]>large)
        large=a[i];
    }
    printf("Largest of all elements is %d \n", large);
}