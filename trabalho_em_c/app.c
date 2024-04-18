#include <stdio.h>
#include <math.h>
#define TAMANHO_MAXIMO 100

// Protótipo da função
void checaNumPositivos(int lista[], int tamanho);

int main() {
    int numero;
    int lista[TAMANHO_MAXIMO];
    
    int indice = 0;
    
    printf("Digite uma lista de numeros inteiros (digite 0 para finalizar):\n");

    do {
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);
        
        if (numero != 0 && indice < TAMANHO_MAXIMO) {
            lista[indice] = numero;
            indice++;
            printf("Voce digitou: %d\n", numero);
        }

    } while (numero != 0 && indice < TAMANHO_MAXIMO);

    printf("Fim da lista.\n");

    printf("Elementos da lista: ");
    for (int i = 0; i < indice; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");

    // Chamando a função checaNumPositivos()
    checaNumPositivos(lista, indice);

    return 0;
}

// Definição da função
void checaNumPositivos(int lista[], int tamanho) {
    
    int total_positivos = 0;
    
    // Contando números positivos na lista
    for (int i = 0; i < tamanho; i++) {
        if (lista[i] > 0) {
            total_positivos++;
        }
    }
    
    // Calculando o percentual de números positivos em relação ao total
    double percentual = (double)total_positivos / tamanho * 100.0;

    printf("Total de numeros positivos na lista: %d\n", total_positivos);
    printf("Percentual de numeros positivos em relação ao total: %.2f%%\n", percentual);
}
