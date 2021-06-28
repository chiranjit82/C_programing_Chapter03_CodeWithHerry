#include<stdio.h>

int main() 
{
    int ratting;
    printf("Enter ratting : 1 2 3 4 5: ");
    scanf("%d", &ratting);
    switch (ratting)
    {
    case 1:
        printf("ratting is 1");
        break;
    case 2:
        printf("rating is 2");
        break;
    case 3:
        printf("ratting is 3");
        break;
    case 4:
        printf("rating is 4");
        break;
    case 5:
        printf("ratting is 5");
        break;
    default:
        printf("wrong ratting");
        break;
    }
    return 0;
}