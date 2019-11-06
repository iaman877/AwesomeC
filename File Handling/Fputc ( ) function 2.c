#include <stdio.h> 
int main() 
{ 
    FILE *fp; 
    char Feedback[100]; 
    int i; 
    fp = fopen("comment.txt","w"); 
    if(fp == NULL ) 
    { 
        printf("\n The file coud'nt be open "); 
        exit(1); 
    } 
    printf("\n provide the feedback to this book "); 
    gets(Feedback); 
    for(i=0;i<Feedback[i];i++) 
     fputc(Feedback[i],fp); 
    fclose(fp); 
} 
