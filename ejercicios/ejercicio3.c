#include <stdio.h>
#include <stdlib.h>

int main() {
    int size=2; // Asigna un número pequeño
    int *arr = (int *)malloc(size * sizeof(int)); // reserva memoria con malloc
    if (arr == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    int count = 0;
    int num;
    printf("Ingrese numeros (ingrese -1 para terminar):\n");
    while (num != -1) {
        scanf("%d", &num);
        if (count >= size) {
            size *= 2;
            arr = (int *)realloc(arr, size * sizeof(int)); //utiliza realloc para cambiar el tamaño del arreglo
            if (arr == NULL) {
                printf("Error: No se pudo reasignar memoria.\n");
                return 1;
            }
        }

        arr[count++] = num;
    }

    printf("La lista ingresada es: ");
    for (int i = 0; i < count; i++) {
        //Imprime la lista
        printf("%d ", arr[i]);
    }
    printf("\n");

    //libera la memoria
    free (arr);
    return 0;
}
