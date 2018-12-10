#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num_ant, num_atual; //declarando as variaveis utilizadas.
    int num_vet[5];

    printf("Insira o vetor de cinco posicoes a ser ordenado:"); //aqui iremos inserir os elementos do vetor a ser ordenado

    for(i=0; i<5; i++){ //esse for faz a leitura dos elementos do vetor
        scanf("%d", &num_vet[i]);
    }

    for(i=1; i<5; i++){ //nesse for iremos começar a ordenação
        num_atual = num_vet[i]; //aqui iremos definir o num_atual como sendo o elemento de indice 1
        num_ant = i - 1; //num_ant sera o elemento de indice 0

        while((num_ant >= 0) && (num_atual < num_vet[num_ant])){ //enquanto num_ant não tiver indice negativo e num_atual for menor que num_vet, o while sera executado
            num_vet[num_ant + 1] = num_vet[num_ant]; //o elemento anterior sera alocado no lugar do elemento posterior.
            num_ant--; //decrementa o anterior
        }
        num_vet[num_ant+1] = num_atual; //num_vet[0] = num_atual
    }

    for(i=0; i<5; i++){ // esse for exibira os elementos do vetor de forma ordenada
        printf("%d ", num_vet[i]);
    }

    return 0;
}
