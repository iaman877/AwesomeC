#include<stdio.h> 
int main() 
{ 
    struct student 
    { 
        int roll_no; 
        char name[80]; 
        int fees; 
    }; 
  struct student stud[50]; 
  int n,i; 
  printf("Enter the number of student: "); 
  scanf("%d",&n); 
  for(i=0;i<n;i++) 
  { 
      printf("\n Enter the roll no "); 
      scanf("%d",&stud[i].roll_no); 
      printf("\n Enter the name "); 
      scanf("%s",stud[i].name); 
      printf("\n Enter the fees "); 
      scanf("%d",&stud[i].fees); 
  } 
  for(i=0;i<n;i++) 
  { 
      printf("\n  the roll no is %d ",stud[i].roll_no); 
      printf("\n  the name is %s ",stud[i].name); 
      printf("\n  the fees is %d ",stud[i].fees); 
  } 
  return 0; 
} 
