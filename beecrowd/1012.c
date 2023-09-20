#include <stdio.h>
 
int main() {
 
  double A, B, C, areaTriangulo, areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo, pi = 3.14159;

  scanf(" %lf %lf %lf", &A, &B, &C);

  // A = b * h / 2
  areaTriangulo = A * C / 2;
  // A = pi * R ^ 2;
  areaCirculo = pi * (C * C);
  // A = (B + b )* h /2
  areaTrapezio = ((A + B) * C) / 2;
  // A = l^2
  areaQuadrado = B * B;
  // A = b * h
  areaRetangulo = A * B;

  printf("TRIANGULO: %.3lf\n", areaTriangulo);
  printf("CIRCULO: %.3lf\n", areaCirculo);
  printf("TRAPEZIO: %.3lf\n", areaTrapezio);
  printf("QUADRADO: %.3lf\n", areaQuadrado);
  printf("RETANGULO: %.3lf\n", areaRetangulo);
 
    return 0;
}