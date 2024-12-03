#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
    float nota;
} Estudante;

void inserirDados(Estudante *e) {
    printf("Insira o nome do estudante: ");
    fgets(e->nome, 50, stdin);
    e->nome[strcspn(e->nome, "\n")] = '\0';

    printf("Insira a idade do estudante: ");
    scanf("%d", &e->idade);

    printf("Insira a nota do estudante: ");
    scanf("%f", &e->nota);

    getchar();
}

void atualizarNota(Estudante *e, float novaNota) {
    e->nota = novaNota;
    printf("Nota atualizada com sucesso.\n");
}

void mostrarDados(Estudante e) {
    printf("\nDados do Estudante:\n");
    printf("Nome: %s\n", e.nome);
    printf("Idade: %d\n", e.idade);
    printf("Nota: %.2f\n", e.nota);
}

int main() {
    Estudante estudante;
    int opcao;
    float novaNota;

    do {
        printf("\nMenu:\n");
        printf("1. Inserir dados do estudante\n");
        printf("2. Atualizar nota do estudante\n");
        printf("3. Mostrar dados do estudante\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                inserirDados(&estudante);
                break;
            case 2:
                printf("Insira a nova nota: ");
                scanf("%f", &novaNota);
                getchar();
                atualizarNota(&estudante, novaNota);
                break;
            case 3:
                mostrarDados(estudante);
                break;
            case 4:
                printf("
