#include<stdio.h> 
void main() 
{ 
    int i, j; 
    for(i = 5; i <= 20; i++) 
    { 
        for(j = 2; j <  i; j++) 
        { 
            if((i % j) == 0) 
            { 
                printf("%d\n", i); 
                break; 
            }     
        } 
    } 
