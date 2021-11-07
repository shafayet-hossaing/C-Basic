#include<stdio.h>
int main()
{
    char ch;
    printf("Enter your character ");
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z')
        printf("Small Letter");
    else if(ch >='A' && ch <= 'Z')
        printf("Capital Letter");
    else
        printf("Not Character");

}
