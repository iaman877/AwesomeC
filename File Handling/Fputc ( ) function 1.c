#include<stdio.h> 
int main() 
{ 
    FILE *fp; 
    char data[30] = "Aman Bhardwaj"; 
    int length = strlen(data); 
    int count; 
    fp = fopen("Aman.txt","w"); 
    if(fp == NULL) 
    { 
        printf("\n Unable to create to open the file "); 
    } 
    else{ 
        for(count=0;count<length;count++) 
        { 
            fputc(data[count],fp); 
            printf("\n %c",data[count]); 
        } 
        printf("\n data written succesfully "); 
        fclose(fp); 
    } 
} 
