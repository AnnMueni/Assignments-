/*
Author:MUENI MATHEKA 
ADM: D33-2433-2023 
DATE:23-02-2025
 * C program to calculate simple_Interest
 */

#include <stdio.h>
#include <math.h>

int main()
{
    float principle, rate, time, SI;

    /* Input principle, time and rate */
    printf("Enter principle (ksh):\n ");
    scanf("%f", &principle);

    printf("Enter time (years):\n ");
    scanf("%f", &time);

    printf("Enter rate (%):\n ");
    scanf("%f", &rate);

    /* Calculate simple_interest */
    SI = (principle*rate*time)/100;

    /* Print the resultant SI */
    printf("simple_Interest = %f", SI);

    return 0;
}