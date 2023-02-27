#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
void printRandoms(int lower, int upper,int count){
	int i;
	for (i = 0; i < count; i++) {
		int randomNum = (rand() %
		(upper - lower + 1)) + lower;
		printf("%d ", randomNum);
	}
	randomNumAlloc *rna = malloc(randomNum);
}
void randomizerNumber(){
	int lower = 5, upper = 27, count = 1;
	srand(time(0));
	printRandoms(lower, upper, count);
	return 0;
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
    load();
    play(jogador1, jogador2);
}

void load(valor, randomNum) {
    No *no; Pilha p; p.tam = 0; p.topo = NULL;
    empilhar(&p, valor);
    empilhar(&p, valor);
    empilhar(&p, valor);
    empilhar(&p, valor);
    empilhar(&p, valor);
    printf("\n-----PILHA-----\n");
    imprimir(p.topo);
    printf("\n-----PILHA-----\n");
    randomizerNumber();
    int initValue = 7;
    int valueToBeat = *randomNum;
    printf("valor inicial: %d\n", initValue);
    printf("valor a bater: %d\n", valueToBeat);
}

void play(jogador1, jogador2) {
    int playerTurn = jogador1;
    int num1;
    printf("Vez de %s \n", playerTurn);
    do {
    printf("Escolha um numero \n");
    scanf("%d", &num1);
    printf("%s jogou: %d \n", playerTurn, num1);
    if(num1 > 5) {
        printf("Jogada invalida, jogue outro numero \n");
    }
    }while(num1 > 5);
    if(num1 < 5) {
    playerTurn = jogador2;
    }
    play(jogador1, jogador2);
    return playerTurn;
}


int main () {
    int op, valor;
    printf("Jogo ProjetoM");
    do {
        printf("\n0 - Sair\n1 - Jogar \n");
        scanf("%d", &op, &valor);
        switch(op) {
        case 0:
            printf("Saindo...\n");
            break;
        case 1:
            startGame();
            load();
            break;
        }
    }while(op != 0);
    return 0;
}

