#include <stdio.h> 
int main() 
{ 
    int i,n,pos,arr[10]; 
    printf("\n Enter the size of an array "); 
    scanf("%d",&n); 
    printf("\n Enter the value of an array\n"); 
    for(i=0;i<n;i++) 
    scanf("%d",&arr[i]); 
    printf("\n Enter that position from which number has to be deleted "); 
    scanf("%d",&pos); 
    for(i=pos-1;i<=n-1;i++){ 
      arr[i] = arr[i+1]; 
      n--; 
    } 
    printf("\n the array after deletion "); 
    for(i=0;i<n-1;i++) 
    printf("%d\n", arr[i]); 
} 
