//Given an integer n, count and return the number of zeros that are present in the given integer using recursion. 
// function for this programe is 
int countZeros(int n){ 
if(n>0)
 { 
if( (n % 10) == 0)
  { 
    return  countZeros(n/10)+1; 
  } 
return countZeros(n/10); 
 } 
} 

 
