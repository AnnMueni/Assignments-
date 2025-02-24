/*
Author:MUENI MATHEKA 
ADM: D33-2433-2023 
DATE:22-02-2025
 program to calculate the area of rectangle 
 */
#include <stdio.h>
#include <math.h>
int main()
{
    float length,width,area;

    /* Input length,width and area  */
    printf("Enter length (meters):\n ");
    scanf("%f", &length);

    printf("Enter width(meters):\n ");
    scanf("%f", &width);


    /* Calculate area of rectangle */
    area=(length*width);

    /* Print the resultant area */
    printf("area= %f",area);

    return 0;
}