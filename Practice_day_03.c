#include<stdio.h>

int main(){ 
    // int num;
    // printf("Enter the number: ");
    // scanf("%d", &num);
    // if (num >= 18)
    // {
    //     printf("You caste vote.\n");
    // }
    // else {
    //     printf("You dont caste vote.\n");
    // }
    // (num == 20) ? printf("num is %d", num) : printf("num is %d", num);

    // Quick quiz; 
    // int number;
    // printf("Enter the marks in the subject: ");
    // scanf("%d", &number);
    // switch (number/10)
    // {
    // case 10:
    //     printf("Your grade is: AA");
    //     break;
    // case 9:
    //     printf("Your grade is: AA");
    //     break;
    // case 8:
    //     printf("Your grade is: A+");
    //     break;
    // case 7:
    //     printf("Your grade is: A");
    //     break;
    // case 6:
    //     printf("Your grade is: B+");
    //     break;
    // case 5:
    //     printf("Your grade is: B");
    //     break;
    // case 4:
    //     printf("Your grade is: C");
    //     break;
    // default:
    //     printf("Your grade is: D");
    //     break;
    // }

    // Practice Set 01:
    // int a = 10;
    // if (a = 11)
    // // if (a == 10)
    // {
    //     printf("i am 11.");
    // }
    // else {
    //     printf("I am not 11.");
    // }

    // Practice Set 02:
    // int marks1, marks2, marks3;
    // printf("Enter the marks in subject 1: ");
    // scanf("%d", &marks1);
    // printf("Enter the marks in subject 2: ");
    // scanf("%d", &marks2);
    // printf("Enter the marks in subject 3: ");
    // scanf("%d", &marks3);
    // float avg = (marks1 + marks2 + marks3)/3.0;
    // if (avg >= 40 && marks1 >= 33 && marks2 >= 33 && marks3 >= 33)
    // {
    //     printf("You are pass in the exam.");
    // }
    // else {
    //     printf("You are fail in the exam.");
    // }

    // Practice Set 03:
    // float amount;
    // printf("Enter the Amount: ");
    // scanf("%f", &amount);
    // float tax;
    // if (amount <= 250000)
    // {
    //     printf("No Tax paid.");
    // }
    // else if (amount > 250000 && amount <= 500000)
    // {
    //     tax = (amount - 250000) * 0.05;
    //     printf("Tax paid by you is : %f", tax);
    // }
    // else if (amount > 500000 && amount <= 1000000)
    // {
    //     tax = 250000 * 0.05;
    //     tax = tax + (amount - 500000) * 0.2;
    //     printf("Tax paid by you is : %f", tax);
    // }
    // else if (amount > 1000000)
    // {
    //     tax = 250000 * 0.05;
    //     tax = tax + 500000 * 0.2;
    //     tax = tax + (amount - 1000000) * 0.3;
    //     printf("Tax paid by you is : %f", tax);
    // }

    // practice Set 04:
    // int year;
    // printf("Enter the year : ");
    // scanf("%d", &year);
    // if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
    // {
    //     printf("The year is leaper.");
    // }
    // else {
    //     printf("The year is not leaper.");
    // }
    
    // Practice Set 05:
    // char ch;
    // printf("Enter the character: ");
    // scanf("%c", &ch); 
    // if (ch >= 'a' && ch <= 'z')
    // {
    //     printf("The character is lowercase.");
    // }
    // else {
    //     printf("The chatacter is not lowercase.");
    // }
    
    // Practice Set 06:
    int num1, num2, num3, num4;
    printf("Enter the number 1: ");
    scanf("%d", &num1);
    printf("Enter the number 2: ");
    scanf("%d", &num2);
    printf("Enter the number 3: ");
    scanf("%d", &num3);
    printf("Enter the number 4: ");
    scanf("%d", &num4);
    if (num1 > num2 && num1 > num3 && num1 > num4)
    {
        printf("The greatest number is %d", num1);
    }
    else if (num2 > num3 && num2 > num4)
    {
        printf("The greatst number is %d", num2);
    }
    else if (num3 > num4)
    {
        printf("he greatest number is %d", num3);
    }
    else {
         printf("he greatest number is %d", num4);
    }
    
    
    

    



    return 0;
}