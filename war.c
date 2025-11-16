#include <stdio.h>
#include <string.h>

/*
    Definição da struct Territorio
    Esta estrutura agrupa informações relativas a um território:
    - nome: nome do território
    - cor: cor do exército associado ao território
    - tropas: quantidade de tropas
*/
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {

    // Vetor que armazenará 5 territórios
    struct Territorio territórios[5];

    printf("=== Sistema de Cadastro de Territorios ===\n\n");

    // Entrada dos dados utilizando laço for
    for (int i = 0; i < 5; i++) {
        printf("Cadastro do territorio %d:\n", i + 1);

        // Lendo o nome
        printf("Digite o nome do territorio: ");
        scanf("%s", territórios[i].nome);

        // Lendo a cor do exército
        printf("Digite a cor do exercito: ");
        scanf("%s", territórios[i].cor);

        // Lendo a quantidade de tropas
        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territórios[i].tropas);

        printf("--------------------------------------\n");
    }

    // Exibindo os dados cadastrados
    printf("\n=== Dados dos Territorios Cadastrados ===\n");

    for (int i = 0; i < 5; i++) {
        printf("\nTerritorio %d:\n", i + 1);
        printf("Nome: %s\n", territórios[i].nome);
        printf("Cor do exercito: %s\n", territórios[i].cor);
        printf("Tropas: %d\n", territórios[i].tropas);
    }

    return 0;
}
