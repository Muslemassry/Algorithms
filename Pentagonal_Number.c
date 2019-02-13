#include <stdio.h> 

void PentagonalNumber(int num[]) { 
  int iteration = (int) num;
  
  if(iteration <= 0) {
      printf("%d", 0);
      return;
  }
  // code goes here  
  
  int total = 0;
  while (iteration > 1) {
      total += ((iteration)+(iteration-1)+(iteration-1)+(iteration-1)+(iteration-2));
      iteration--;
  }
  
  
  total += 1;
  printf("%d", total); 
            
}

int main(void) { 
  
  // keep this function call here
  PentagonalNumber(gets(stdin));
  return 0;
    
}