#include <stdio.h>
#include <stdlib.h>

void leer_arreglo(int n, int arr[]);
void ordena_seleccion(int n, int arr[]);
void swap(int *valor1, int *valor2);
void imprime_arr(int n, int arr[]);

int main()
{
    int arr[100];
    int n;
    printf("Tam del arreglo: ");
    scanf("%d", &n);
    leer_arreglo(n,arr);
    ordena_seleccion(n,arr);
    imprime_arr(n,arr);
    return 0;
}

void leer_arreglo(int n, int arr[]){
    printf("Datos del arreglo: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
}

void ordena_seleccion(int n, int arr[]){
    for(int i=0;i<n-1;i++){
        int pos_min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[pos_min]){
              pos_min=j;
            }
        }
        swap(&arr[i],&arr[pos_min]);
    }
}

void swap(int *valor1, int *valor2){
    int aux;
    aux=*valor1;
    *valor1=*valor2;
    *valor2=aux;
}

void imprime_arr(int n, int arr[]){
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
}
