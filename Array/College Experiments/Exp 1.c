#include <stdio.h> 
int findSum(int A[], int N) 
{ 
    if(N<=0) 
    return 0; 
    return(findSum(A,N-1)+A[N-1]); 
} 
int main() 
{ 
    int A[5],i; 
    printf("\n Enter the element of an array "); 
   for(i=0;i<=4;i++){ 
       scanf("%d",&A[i]);    
    } 

    int N = sizeof(A)/sizeof(A[0]); 
    printf("%d\n",findSum(A,N)); 
    return 0; 
} 
