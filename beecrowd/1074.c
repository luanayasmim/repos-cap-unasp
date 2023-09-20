#include <stdio.h>

int main(void){

  int valueCount, count=0;

  scanf("%d", &valueCount);

  while(count<valueCount){
    int value=0;
    scanf("%d", &value);

    if(value==0)
      printf("NULL\n");
    else if(value%2==0)
      printf("EVEN ");
    else if (value%2!=0)
      printf("ODD ");

    if(value>0)
      printf("POSITIVE\n");
    else if(value<0)
      printf("NEGATIVE\n");
    
    count++;
  }
  return 0;
}