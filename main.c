#include <stdio.h>
#include <math.h>
#include "funciones.h"

int main(int argc, char *argv[]) {
    float puntos[4][3] = {{0, 0, 0}, {3, 0, 0}, {0, 0, 3}, {1, 7, 1}};
    float a, b, c, d, e, f;

    float perimetro = calcularPerimetro(puntos, &a, &b, &c, &d, &e, &f);
    float area1 = calcularArea(a, b, c);
    float area2 = calcularArea(b, d, e);
    float area3 = calcularArea(a, e, f);
    float area4 = calcularArea(e, f, a);
    float areasuperficial = area1 + area2 + area3 + area4;

    float volumen = calcularVolumen(puntos);

     float areas[4] = {area1, area2, area3, area4};
    for (int i = 0; i < 4; i++) {
        printf("El area %d es: %.2f\n", i+1, areas[i]);
    }

    printf("El perimetro es: %.2f\n", perimetro);
    printf("El area superficial es: %.2f\n", areasuperficial);
    printf("El volumen es: %.2f\n", volumen);

   

    return 0;
}



