#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;
    printf("Ingrese el número de filas: ");
    scanf("%d", &m);
    
    printf("Ingrese el número de columnas: ");
     scanf("%d", &n);
    int *matrix = (int *)calloc(m * n, sizeof(int));
    if (matrix == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        
    }

    printf("Matriz inicializada con ceros:\n");
    for (int i = 0; i < m; i++) {
        printf("%d ", (*matrix));
        for (int j = 0; j < n; j++) {
            printf("%d ", (*matrix));
            
        }
        printf("\n");
    }

    printf("Ingrese las coordenadas (fila, columna) y el valor para modificar (ej. 1 2 5):\n");
    int row, col, value;
    //lee los varlores solicitados
    for(int i=0; i<m; i++){
        printf("valor %d: \n",i+1);
        scanf("%d",&row);
        for(int j=0; j<n;j++){
            printf("valor %d: \n",j+1);
            scanf("%d", &col);
        }
    }
    matrix[(row-1) * n + (col-1)] = value;

    printf("Matriz actualizada:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            
        }
        printf("\n");
    }

    free(matrix);
    return 0;
}
