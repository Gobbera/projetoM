#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor;
    struct no *proximo;
}No;

typedef struct {
    No *topo;
    int tam;
}Pilha;

void empilhar(Pilha *p, int x) {
    No *no = malloc(sizeof(No));
    no->valor = x;
    no->proximo = p->topo;
    p->topo = no;
}

No* desempilhar(Pilha *p) {
    No *no = NULL;
    if(p->topo) {
        no = p->topo;
        p->topo = no->proximo;
    }
    return no;
}
void imprimir (No *no) {
    if(no) {
        printf("%d\n", no->valor);
        imprimir(no->proximo);
    }
}
int main () {
    int op, valor;
    char jogador1, jogador2;
    No *no; Pilha p; p.tam = 0; p.topo = NULL;
    printf("Jogo ProjetoM");
    do {
        printf("\n0 - Sair\n1 - Jogar\n2 \n");
        scanf("%d", &op);
        switch(op) {
        case 0:
            printf("Saindo...\n");
            break;
        case 1:
            printf("digite o nome do jogador 1");
            scanf("%c", &jogador1);
            printf("digite o nome do jogador 2");
            scanf("%c", &jogador2);
            break;
        }
    }
        printf("Jogador 1 e:\n", &jogador1);
}
