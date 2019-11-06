#include <stdio.h> 
int main() 
{ 
     FILE *pf; 
     char name[25]; 
     int age; 
      printf("\n Enter ur name and age "); 
     scanf("%s%d",name,&age); 
     pf = fopen("aman.txt","w"); 
     if(pf == NULL){ 
        printf("\n Unable to open the file "); 
     }else{ 
          fprintf(pf,"%s\t%d\n",name,age);             // fprintf(file_pointer,"formate specifier",list f variable) 
             printf("\n Data written succesfully "); 
          fclose(pf); 
     } 
} 
