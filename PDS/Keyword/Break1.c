#include<stdio.h> 
void main() 
{ 
    int i; 
    int number; 
    printf("Enter a number:"); 
    scanf("%d", &number); 
    for(i = 2; i < number; i++) 
    { 
        if((number % i) == 0) 
        { 
            printf("%d is not prime", number); 
            break; 
        } 
    } 
} 
