/*
Brian Tabios
Professor Chowdhury
Week 2 Assignment: Print even or odd number
Course: CS111
*/

#include <stdio.h> 

int main() 

{
    int a;

    printf("Enter a Number: ");
    scanf("%d", &a);
    

    if(a % 2 == 0)
        printf("%d is even", a);

    else 
        printf("%d is odd", a);

    return 0;


}