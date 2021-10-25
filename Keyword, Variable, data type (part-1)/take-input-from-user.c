// Write a program that takes an integer value from the user and prints that out.
#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num); // Here & symbol means the address of the num value that is about to taken from the user)
    printf("The Number You have Pressed Is : %d", num);
}
