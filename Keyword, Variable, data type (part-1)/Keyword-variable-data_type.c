//Declare a variable that contain 10, and print that out
#include<stdio.h>
int main()
{
    int num = 10;
    printf("The Number Is %d", num);
}


//Write a program that prints float, double, character type data
int main()
{
    float num = 10.23;
    double num1 = 10.253648;
    char text = 'H';

    //printf("The Float, Double, And Char is %f %lf %c", num, num1, text);
    printf("Num = %.2f\n", num);
    printf("Num1 = %lf\n", num1);
    printf("Text = %c\n", text);

}
