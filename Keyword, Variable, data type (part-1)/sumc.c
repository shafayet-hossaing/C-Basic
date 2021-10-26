#include<stdio.h>
int main()
{
    int n1, n2, sum;
    float avg;
    printf("Enter The Numbers : ");
    scanf("%d %d", &n1, &n2);

    sum = n1+n2;
    printf("The Some Is = %d", sum);

    avg = (float)sum/2;
    printf("The Average Is = %.2f", avg);
    return 0;
}
