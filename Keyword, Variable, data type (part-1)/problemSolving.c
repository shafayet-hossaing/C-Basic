/*
#include <stdio.h>
#include <string.h>
int main()
{
    float a = 4.0, b = 4.0, sum;
    int num1 = 4, num2 = 12, sum2;
    char c[] = "HeackerRank ", e[] = "is the best one", g;
    sum2 = num1 + num2;
    printf("%d\n", sum2);
    sum = (float)a + b;
    printf("%.1f\n", sum);
    strcat(c,e);
    printf("%s",c);


}
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    float a = 4.0, sum;
    int num1 = 4, sum2;
    char e[] = "is the best one";
    sum2 = num1 + i;
    printf("%d\n", sum2);
    sum = (float)a + d;
    printf("%.1f\n", sum);
    strcat(s,e);
    printf("%s",s);
    // Declare second integer, double, and String variables.

    // Read and save an integer, double, and String to your variables.

    // Print the sum of both integer variables on a new line.

    // Print the sum of the double variables on a new line.

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
}
