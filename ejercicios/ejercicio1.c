#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *arr;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);
    arr = (int*)malloc(n *sizeof(int));
    

    if (arr == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    printf("Ingrese %d valores:\n", n);
    for (int i = 0; i < n; i++) {
        printf("valor: %d\n", i+1);
        scanf("%d", (arr+i));
    }

    printf("El arreglo es: ");
    for (int i = 0; i < n; i++) {
        printf("\t%d ", (*arr+i));
        
    }
    printf("\n");

    
    return 0;
}
