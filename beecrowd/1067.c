#include <stdio.h>

int main(void) {
  int value, count;

  scanf("%d", &value);

  count = 0;
  while (count <= value) {
    if (count % 2 != 0)
      printf("%d\n", count);
    count++;
  }

  return 0;
}