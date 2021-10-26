#include<stdio.h>
int main()
{
    float base, height, area;
    printf("Enter Base And Height To Get The Area : ");
    scanf("%f %f", &base, &height);

    area = (float)1/2 * base * height;  //Formula
    printf("The Area Is = %f", area);
    return 0;
}
