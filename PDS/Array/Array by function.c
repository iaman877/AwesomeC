#include<stdio.h> 
void read_array(int arr[],int); 
void display_array(int arr[],int); 
int main() 
{ 
    int num[10],n; 
    printf("\n Enter the size of an array "); 
    scanf("%d",&n); 
    read_array(num,n); 
    display_array(num,n); 
    return 0; 
} 
void read_array(int arr[10], int n) 
   { 
    int i; 
    for(i=0;i<n;i++){ 
    printf("\n array[%d]= ",i); 
    scanf("%d",&arr[i]);     
    } 
} 
void display_array(int arr[10],int n) 
     { 
      for(int i=0;i<n;i++){ 
      printf("\n array[%d]= %d ",i,arr[i]); 
     } 
} 
