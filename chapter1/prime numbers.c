#include<stdio.h>
int main(){
    int i, j;
    for(i=2; i<=1000; i++)
    {
        for(j=500; j>=2; j--)
        { 
            if(i%j==0)
            {
                printf("%d\t", i);
            }
            else
            {
                
            }
        }
    }
}