#include<stdio.h>

int main() 
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    (num < 10)? printf("less than 10."): printf("greater than 10.");
    return 0;
}