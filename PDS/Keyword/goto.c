#include<stdio.h> 
void main() 
{ 
    int i; 
    for(i = 0; i < 10; i++) 
    { 
        if(i == 5) 
        { 
            goto out;  
        } 
        printf("%d\n", i); 
    } 
    out:  
        printf("I am tired now\n"); 
} 
