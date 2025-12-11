#include <stdio.h>
#include <string.h>

#define TAMANHO_ACERVO 20


// STRUCT DO LIVRO

struct Livro {
    int codigo;
    
    char titulo[50];
    char autor[30];
    char area[30];
    int ano;
    char editora[30];
};


// ASSINATURAS DAS FUNÇÕES

void limparBuffer();
void cadastrarLivros(struct Livro acervo[], int tamanho);
void imprimirLivros(struct Livro acervo[], int tamanho);
void pesquisarLivro(struct Livro acervo[], int tamanho, int codigoBusca);
void ordenarLivros(struct Livro acervo[], int tamanho);


// FUNÇÃO PRINCIPAL

int main() {

    struct Livro acervo[TAMANHO_ACERVO] = {0}; // inicialização segura
    int opcao;
    int codigoBusca;

    do {
        printf("\n======= MENU PRINCIPAL =======\n");
        printf("1 - Cadastrar livros\n");
        printf("2 - Imprimir todos os livros\n");
        printf("3 - Pesquisar livro por codigo\n");
        printf("4 - Ordenar livros por ano de publicacao\n");
        printf("5 - Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        limparBuffer();

        switch (opcao) {

            case 1:
                cadastrarLivros(acervo, TAMANHO_ACERVO);
                break;

            case 2:
                imprimirLivros(acervo, TAMANHO_ACERVO);
                break;

            case 3:
                printf("Digite o codigo do livro: ");
                scanf("%d", &codigoBusca);
                limparBuffer();
                pesquisarLivro(acervo, TAMANHO_ACERVO, codigoBusca);
                break;

            case 4:
                ordenarLivros(acervo, TAMANHO_ACERVO);
                printf("Livros ordenados com sucesso!\n");
                break;

            case 5:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 5);

    return 0;
}


// FUNÇÃO PARA LIMPAR BUFFER DO TECLADO (SEGURO)

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}


// FUNÇÃO PARA CADASTRAR OS LIVROS

void cadastrarLivros(struct Livro acervo[], int tamanho) {

    for (int i = 0; i < tamanho; i++) {

        printf("\n--- Cadastro do Livro %d ---\n", i + 1);

        printf("Codigo: ");
        scanf("%d", &acervo[i].codigo);
        limparBuffer();

        printf("Titulo: ");
        fgets(acervo[i].titulo, sizeof(acervo[i].titulo), stdin);
        acervo[i].titulo[strcspn(acervo[i].titulo, "\n")] = 0;

        printf("Autor: ");
        fgets(acervo[i].autor, sizeof(acervo[i].autor), stdin);
        acervo[i].autor[strcspn(acervo[i].autor, "\n")] = 0;

        printf("Area: ");
        fgets(acervo[i].area, sizeof(acervo[i].area), stdin);
        acervo[i].area[strcspn(acervo[i].area, "\n")] = 0;

        printf("Ano: ");
        scanf("%d", &acervo[i].ano);
        limparBuffer();

        printf("Editora: ");
        fgets(acervo[i].editora, sizeof(acervo[i].editora), stdin);
        acervo[i].editora[strcspn(acervo[i].editora, "\n")] = 0;

        printf("Livro cadastrado com sucesso!\n");
    }
}


// FUNÇÃO PARA IMPRIMIR TODOS OS LIVROS
// 
void imprimirLivros(struct Livro acervo[], int tamanho) {

    printf("\n======= LISTA DE LIVROS =======\n");

    for (int i = 0; i < tamanho; i++) {

        printf("\nLivro %d:\n", i + 1);
        printf("Codigo: %d\n", acervo[i].codigo);
        printf("Titulo: %s\n", acervo[i].titulo);
        printf("Autor: %s\n", acervo[i].autor);
        printf("Area: %s\n", acervo[i].area);
        printf("Ano: %d\n", acervo[i].ano);
        printf("Editora: %s\n", acervo[i].editora);
    }
}


// FUNÇÃO PARA PESQUISAR UM LIVRO POR CÓDIGO

void pesquisarLivro(struct Livro acervo[], int tamanho, int codigoBusca) {

    int encontrado = 0;

    for (int i = 0; i < tamanho; i++) {

        if (acervo[i].codigo == codigoBusca) {

            printf("\nLivro encontrado:\n");
            printf("Codigo: %d\n", acervo[i].codigo);
            printf("Titulo: %s\n", acervo[i].titulo);
            printf("Autor: %s\n", acervo[i].autor);
            printf("Area: %s\n", acervo[i].area);
            printf("Ano: %d\n", acervo[i].ano);
            printf("Editora: %s\n", acervo[i].editora);

            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("\nLivro nao encontrado!\n");
    }
}


// FUNÇÃO PARA ORDENAR OS LIVROS POR ANO (BUBBLE SORT)

void ordenarLivros(struct Livro acervo[], int tamanho) {

    struct Livro temp;

    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - 1 - i; j++) {

            if (acervo[j].ano > acervo[j + 1].ano) {

                temp = acervo[j];
                acervo[j] = acervo[j + 1];
                acervo[j + 1] = temp;
            }
        }
    }
}
