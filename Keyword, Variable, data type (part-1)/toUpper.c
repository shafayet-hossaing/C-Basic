#include<stdio.h>
// Converting lowercase to uppercase using built in function/mehtod (toupper/tolower)
int main ()
{
    char lower, upper;
    printf("Enter Your Lowercase Letter : ");
    scanf("%c", &lower);
    upper = toupper(lower);
    printf("You Uppercase is %c", upper);
}
