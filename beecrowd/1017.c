#include <stdio.h>

int main() { 
    
    int horas, velocidade;
    
    scanf("%d %d", &horas, &velocidade);
    
    double combustivelGasto = (horas*velocidade)/12.0;
    
    printf("%.3lf\n", combustivelGasto);
    
    return 0;
}