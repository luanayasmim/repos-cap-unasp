#include <stdio.h>
 
int main() {
 
  double R, Volume;
  scanf("%lf", &R);

  Volume = (4 / 3.0) * 3.14159 * pow(R, 3);

  printf("VOLUME = %.3lf\n", Volume);
 
    return 0;
}