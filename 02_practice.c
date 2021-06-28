#include<stdio.h>

int main() 
{
    int physics, chemistry, math;
    float total;
    printf("Enter the Physics Marks: ");
    scanf("%d", &physics);

    printf("Enter the Chemistry Marks: ");
    scanf("%d", &chemistry);

    printf("Enter the Mathematics Marks: ");
    scanf("%d", &math);
    total = (physics + chemistry + math)/3;
    if ((total < 40) || (physics < 33) || (chemistry < 33) || (math < 33)) {
        printf("Your total percentage is %f and you are fail.", total);
    }
    else {
        printf("Your total percentage is %f and you are pass.", total);
    }
    return 0;
}