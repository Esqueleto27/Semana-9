#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función para generar un número aleatorio entre min y max
int generarAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
    }

// Función para imprimir una matriz
void imprimirMatriz(int **matriz, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Función para calcular la matriz transpuesta
    void calcularTranspuesta(int **matriz, int **transpuesta, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }
}

int main() {
    int filas, columnas;

    printf("Ingrese el número de filas de la matriz: ");
    scanf("%d", &filas);

    printf("Ingrese el número de columnas de la matriz: ");
    scanf("%d", &columnas);
    
    // Crear la matriz
    int **matriz = (int **)malloc(filas * sizeof(int *));
    for (int i = 0; i < filas; i++) {
        matriz[i] = (int *)malloc(columnas * sizeof(int));
    }
    //Llenar matriz con numeros aleatorios entre 0 y 100
    srand(time(NULL));
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = generarAleatorio(0, 100);
        }
    }
    // Imprimir la matriz original
    printf("Matriz original:\n");
    imprimirMatriz(matriz, filas, columnas);

    // Crear la matriz transpuesta
    int **transpuesta = (int **)malloc(columnas * sizeof(int *));
    for (int i = 0; i < columnas; i++) {
        transpuesta[i] = (int *)malloc(filas * sizeof(int));
    }

    // Calcular la matriz transpuesta
    calcularTranspuesta(matriz, transpuesta, filas, columnas);

     // Imprimir la matriz transpuesta
    printf("\nMatriz transpuesta:\n");
    imprimirMatriz(transpuesta, columnas, filas);

    // Liberar la memoria utilizada por las matrices
    for (int i = 0; i < filas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    for (int i = 0; i < columnas; i++) {
        free(transpuesta[i]);
    }
    free(transpuesta);

    return 0;
}