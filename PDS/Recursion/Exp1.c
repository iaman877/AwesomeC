// Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14"
// below is a function for this  problem statement

void replacePi(char input[]) { 
    if(input[0]=='\0') 
    { 
      return; 
    } 
int i=0,size=0; 
while(input[i]!='\0') 
  { 
      size++; 
      i++; 
  } 
if(input[0]=='p' && input[1]=='i') 
    { 
        input[0]='3'; 
        input[1]='.'; 
        for(int i=size+2;i>3;i--) 
        { 
            input[i]=input[i-2]; 
        }     
        input[2]='1'; 
        input[3]='4'; 
        return replacePi(input+4); 
    } 
    return replacePi(input+1); 
} 
