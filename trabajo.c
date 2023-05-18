#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;
    printf("Ingrese el número de filas: ");
    scanf("%d", &rows);
    printf("Ingrese el número de columnas: ");
    scanf("%d", &cols);

    // Crear la matriz
    int** matriz = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matriz[i] = (int*)malloc(cols * sizeof(int));
    }

    // Inicializar la matriz con ceros
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matriz[i][j] = 0;
        }
    }

    // Establecer la diagonal principal en 1
    int min_dimension = (rows < cols) ? rows : cols;
    for (int i = 0; i < min_dimension; i++) {
        matriz[i][i] = 1;
    }

    // Imprimir la matriz
    printf("Matriz resultante:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Liberar la memoria asignada a la matriz
    for (int i = 0; i < rows; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}


