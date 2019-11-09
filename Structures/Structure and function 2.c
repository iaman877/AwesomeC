#include<stdio.h> 
typedef struct 
{ 
    int x; 
    int y; 
}POINT; 
void display(int , int); 
int main() 
{ 
     POINT p1 = {2,3}; 
     display(p1.x, p1.y); 
     return 0; 
} 
void display(int a, int b) 
{ 
    printf("\n The cordinates of a points is %d %d ",a,b); 
} 
