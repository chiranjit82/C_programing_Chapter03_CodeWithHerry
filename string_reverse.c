#include<stdio.h>
#include<string.h>

int main(){ 
    char ch[45];
    // char ch[45] = "Rubai Das";
    gets(ch);
    // puts(ch);
    int j = strlen(ch);
    for (int i = 0; i < strlen(ch)/2; i++)
    {
        char temp = ch[j-1];
        ch[j-1] = ch[i];
        ch[i] = temp;
        j--;
    }
    puts(ch);
    return 0;
}