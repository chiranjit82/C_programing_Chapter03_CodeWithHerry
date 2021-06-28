#include<stdio.h>

int main() 
{
    int num, vip =2;
    printf("Enter the number: ");
    scanf("%d", &num);
    if ((num > 18 && num < 70) || vip == 21) {
        printf("You applied for driving licence.");
    }
    else {
        printf("Don't applied for driving licence.");
    }
    return 0;
}