#include <stdio.h> 
typedef struct 
{ 
    int x; 
    int y; 
}POINT; 
void display(POINT); 
int main() 
{ 
    POINT p1 = {2,3}; 
    display(p1); 
    return 0; 
} 
void display(POINT p) 
{ 
     printf("%d %d",p.x,p.y); 
} 
