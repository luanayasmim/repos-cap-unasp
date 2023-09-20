#include <stdio.h>

int main(void){

  int X, Y, count=0, count2=0;

  scanf("%d%d", &X, &Y);

  count = X<Y ? X : Y;
  count2 = X>Y ? X : Y;
  
  while(count<count2){
    count++;
    if(count%5==2 || count%5==3)
      printf("%d\n", count);
  }
  return 0;
}