//For loop
/*
program to output for 
Author: Mueni Matheka 
Reg: D33-2433-2023 
Date:10/03/2025
*/
#include<stdio.h>
int main() {
    int i;
    int sum=0;
    for(i=1;i<=100;i++){
        printf("%d \n",i*i*i);
        sum=(i*i*i)+sum;
    }
    printf("the sum is %d", sum);    
    return 0;
}    