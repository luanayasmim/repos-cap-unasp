#include <stdio.h>

int main(){

  int num, count = 1, value1=0, value2=1, nextValue;
  scanf("%d", &num);

  while(count<=num){

    if(count!=num)
      printf("%d ", value1);
    else
      printf("%d\n", value1);
      
    nextValue = value1 + value2;

    value1 = value2;
    value2 = nextValue;
    
    count++;
  }
  
  return 0;
}