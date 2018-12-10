#include <stdio.h>
#include <stdlib.h>

void Selection(int vet[], int n){ //A função Selection irá realizar a ordenação

    int menor_vet, aux; // a variavel aux é utilizada na troca de posicoes dos elementos comparados

    for(int i=0; i<n; i++){ //nesse for, iremos fazer com que menor_vet receba o valor de i
        menor_vet = i;

        for(int j=i+1; j<n; j++){ //nesse for, fazemos com que j receba i+1. Assim, comparamos os indices menor_vet e j.
            if(vet[menor_vet] > vet[j]){ //caso menor_vet seja maior que j, guardamos o j vira menor_vet.
                menor_vet = j;
            }
        }
        if(i!=menor_vet){ //troca efetuada, desde que não seja o mesmo elemento
            aux = vet[i];
            vet[i] = vet[menor_vet];
            vet[menor_vet] = aux;
        }
    }
}

int main()
{
    int i;
    int vet[10]; //vetor definido como tendo tamanho 10

    printf("Insira o vetor de dez posicoes: ");

    for(i=0; i<10; i++){ //for para leitura dos elementos do vetor
        scanf("%d", &vet[i]);
    }

    Selection(vet, 10); //chamada da funcao Selection

    for(i=0; i<10; i++){ //for para imprimir o vetor de forma ordenada
        printf("%d ", vet[i]);
    }


    return 0;
}
