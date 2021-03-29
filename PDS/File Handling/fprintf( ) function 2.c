#include <stdio.h> 
int main() 
{ 
    FILE *fp; 
   char name[20]; 
    float salary; 
    fp = fopen("Detail.TXT", "w"); 
    if(fp == NULL) 
    { 
        printf("\n Umable to open the file "); 
        exit(1); 
    } 
    else 
    { 
        puts("\n Enter your name"); 
        gets(name); 
        puts("\n Enter the salary "); 
        scanf("%f",&salary); 
        fprintf(fp," %s \t %f",name,salary ); 
    } 
    fclose(fp); 
} 
