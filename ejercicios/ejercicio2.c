#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n; // m=fila n=columna
    printf("Ingrese el numero de filas: ");
    scanf("%d", &m);
    
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &n);
    int *matrix = (int *)calloc(m * n, sizeof(int));
    if (matrix == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        
    }

    printf("Matriz inicializada con ceros:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("lugar [%d][%d]: %d ",i, j, matrix[i * n + j]);
            
        }
        printf("\n");
    }

    printf("Ingrese las coordenadas (fila, columna) y el valor para modificar (ej. 1 2 5):\n");
    int row, col, value;
    //lee los varlores solicitados
    printf("ingrese la fila: ");
    scanf("%d", &row);
    printf("\ningrese columna: ");
    scanf("%d", &col);
    printf("\ningrese el nuevo valor: ");
    scanf("%d", &value);
    if(row<1 || row>m || col<1 || col>n ){
        printf("coordenadas fuera de rango\n");
        free (matrix);
        return 1;
    }


    matrix[(row-1) * n + (col-1)] = value;

    printf("Matriz actualizada:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("lugar [%d][%d]: %d ",i, j, matrix[i * n + j]);
        }
        printf("\n");
    }

    free(matrix);
    return 0;
}
