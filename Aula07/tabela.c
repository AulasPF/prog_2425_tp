#include <stdio.h>

void printCharInfo(int i);

int main(){
  
  for(int i=0; i<127; i++){
    printCharInfo(i);
  }
  return 0;
}

void printCharInfo(int i){
  printf("%c\t:%6d%6x\n",i,i,i); 
}
