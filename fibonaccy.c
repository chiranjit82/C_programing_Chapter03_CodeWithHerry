#include<stdio.h>

int main(){ 
    long num[15];
    int n = 10;
    num[0] = 0;
    num[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        num[i] = num[i-2] + num[i-1];
    }
    printf("The fibonacci series is : %d \n", num[n]);    
    return 0;
}