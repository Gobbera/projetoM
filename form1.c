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
void startGame() {
    char jogador1[5] [50];
    char jogador2[5] [50];
    printf("digite o nome do jogador 1 : ");
    scanf("%s", &jogador1);
    printf("digite o nome do jogador 2 : ");
    scanf("%s", &jogador2);
    printf(" \n %s\n ", jogador1);
    printf("------VS------");
    printf(" \n %s\n ", jogador2);
    play(jogador1, jogador2);
}

void play(jogador1, jogador2) {
    //playerTurn *turn = jogador1;
    int num1;
    printf("Vez de %s \n", jogador1);
    do {
    printf("Escolha um numero \n");
    scanf("%d", &num1);
    printf("%s jogou: %d \n", jogador1, num1);
    if(num1 > 5) {
        printf("Jogada invalida, jogue outro numero \n");
    }
    }while(num1 > 5);
    return 0;
}

int main () {
    int op, valor;

    No *no; Pilha p; p.tam = 0; p.topo = NULL;
    printf("Jogo ProjetoM");
    do {
        printf("\n0 - Sair\n1 - Jogar \n");
        scanf("%d", &op);
        switch(op) {
        case 0:
            printf("Saindo...\n");
            break;
        case 1:
            startGame();
            break;
        }
    }while(op != 0);
    return 0;

}
