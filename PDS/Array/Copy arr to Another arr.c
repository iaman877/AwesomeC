#include<stdio.h> 
 int main()
 { 
    int arr1[30], arr2[30], i, num; 
    printf("\nEnter no of elements :"); 
    scanf("%d", &num); 
    printf("\nEnter the values :");     //Accepting values into Array 
    for (i = 0; i < num; i++) { 
    scanf("%d", &arr1[i]); 
  } 
      for (i = 0; i < num; i++) {        /* Copying data from array 'a' to array 'b */ 
      arr2[i] = arr1[i]; 
   } 
      printf("The copied array is :");   //Printing of all elements of array 
       for (i = 0; i < num; i++) 
      printf("\narr2[%d] = %d", i, arr2[i]); 
       return 0; 
} 
