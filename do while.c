//do while loop
/*
program to output do
Author: Mueni Matheka 
Reg: D33-2433-2023 
Date:10/03/2025
*/
#include<stdio.h>
int main() {
    int i=1;
    int sum=0;
    do {
        printf("%d \n", i*i*i);
        i++;
        sum=(i*i*i)+sum;
    }    
    while(i<=100);
    printf("the sum is %d", sum);   
    return 0;
}    