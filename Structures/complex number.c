#include<stdio.h> 
int main() 
{ 
    typedef struct complex  
    { 
        int real; 
        int imag; 
    }p; 
    p c1,c2, sum_c, sub_c; 
    int option; 
    do{ 
        printf("\n 1: Read the complex number \n 2: Display the complex number \n 3: Add the complex number \n 4: subtract the complex number 5: Exit \n Enter the option :"); 
        scanf("\%d",&option); 
        switch(option) 
        { 
            case 1:  
              printf("\n Enter the real and inaginary part of first complex number"); 
              scanf("%d%d",&c1.real,&c1.imag); 
              printf("\n Enter the real and inaginary part of Secomd complex number"); 
              scanf("%d%d",&c2.real,&c2.imag); 
              break; 
            case 2: 
              printf("\n The first complex number is %d + %d ",c1.real,c1.imag); 
              printf("\n The Second complex number is %d + %d ",c2.real,c2.imag); 
              break; 
            case 3: 
               sum_c.real = c1.real+c2.real; 
               sum_c.imag = c1.imag+c2.imag; 
               printf("\n The sum of the two complex number is : %d + %d  ",sum_c.real,sum_c.imag); 
               break; 
            case 4: 
                sub_c.real = c1.real-c2.real; 
               sub_c.imag =  c1.imag-c2.imag; 
               printf("\n The subtract of the two complex number is : %d - %d  ",sub_c.real,sub_c.imag); 
               break; 
        } 

    }while(option != 5); 
    return 0; 
} 
