#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generarAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
    }

void imprimirMatriz(int **matriz, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

    void calcularTranspuesta(int **matriz, int **transpuesta, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }
}
