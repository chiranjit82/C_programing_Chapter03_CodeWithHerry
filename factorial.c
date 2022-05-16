#include<stdio.h>
// int fact(int num);

int main(){ 
    int a;
    printf("Enter the number");
    scanf("%d", &a);
    int fact = 1;
    if (a == 0)
    {
        fact = 1;
    }
    else {
        for (int i = 1; i <= a; i++)
        {
            fact = fact *i;     
        }
    }
    
    printf("The factorial of the number is %d", fact);

    return 0;
}