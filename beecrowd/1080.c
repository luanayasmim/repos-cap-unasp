#include <stdio.h>

int main(void){

  int count = 0, value, biggerValue=0, position=0;

  while(count<100){
    count++;
    scanf("%d", &value);
    if(value>biggerValue){
      biggerValue = value;
      position = count;
    }
  }

  printf("%d\n", biggerValue);
  printf("%d\n", position);
  
  return 0;
}