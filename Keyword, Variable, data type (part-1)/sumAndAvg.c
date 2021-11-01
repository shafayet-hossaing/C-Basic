#include<stdio.h>
// Getting the area of base and height.
int main()
{
    float height, base, tirngle;

    printf("Enter Two Numbers To Get tirngle : ");
    scanf("%f %f", &base, &height);

    tirngle = 0.5 * base * height;

    printf("The tirngle is %.2f", tirngle);
}
