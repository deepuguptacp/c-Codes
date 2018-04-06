#include<stdio.h>
float avg(int *a)
{
    int sum=0, i;
    float av;
    for(i=0; i<5; i++)
        sum=sum + *(a+i);
    av=(float)sum/5;
    return av;
}
int main()
{
    int a[5], i;
    float b;
    for(i=0; i<5; i++)
        scanf("%d", &a[i]);
    b=avg(a);
    printf("%f\n", b);
    return 0;
}
