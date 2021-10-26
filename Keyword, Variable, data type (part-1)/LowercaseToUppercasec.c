#include<stdio.h>
// A=65 and a=97
//To do this you have to know about ASCII table
int main()
{
    char n;
    printf("Enter Your Lowercase Letter : ");
    scanf("%c", &n);
    printf("Your Given Upper Case Letter Is : %c", n-32);
}
