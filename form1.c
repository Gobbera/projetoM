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

void randomizerNumber(){
	int lower = 10, upper = 80, count = 1;
	srand(time(0));
	int i;
	for (i = 0; i < count; i++) {
		int randomNum = (rand() %
		(upper - lower + 1)) + lower;
		range(randomNum);
	}
}
void range(randomNum) {
    int lower = 15, upper = 30, count = 1;
	srand(time(0));
	int i;
	for (i = 0; i < count; i++) {
		int range = (rand() %
		(upper - lower + 1)) + lower;
		int soma = range + randomNum;
		printValues(randomNum,range, soma);
	}
}
void printValues(randomNum,range, soma) {
		printf("valor inicial: %d \n", randomNum);
		printf("valor a bater: %d \n", soma);
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

}

void play(jogador1, jogador2) {
    int turn = 1,choice, gameover = 0;
    do {
        int num1;
        if(turn == 1) {
            printf("Vez de %s \n", jogador1);
            do {
                printf("Escolha um numero \n");
                scanf("%d", &num1);
                printf("%s jogou: %d \n", jogador1, num1);
                    if(num1 > 5) {
                        printf("Jogada invalida, jogue outro numero \n");
                    }
                }while(num1 > 5);
            turn = 2;
        }else {
        printf("Vez de %s \n", jogador2);
            do {
            printf("Escolha um numero \n");
            scanf("%d", &num1);
            printf("%s jogou: %d \n", jogador2, num1);
                if(num1 > 5) {
                printf("Jogada invalida, jogue outro numero \n");
            }
            }while(num1 > 5);
            turn = 1;
        }
    }while(gameover = 1);
}
void creditos() {
    printf("John wick productions studio");
}



int main () {
    int op, valor;
    printf("Jogo ProjetoM");
    do {
        printf("\n0 - Sair\n1 - Jogar\n2 - Creditos \n");
        scanf("%d", &op, &valor);
        switch(op) {
        case 0:
            printf("Saindo...\n");
            break;
        case 1:
            startGame();
            load();
            break;
        case 2:
            creditos();
            break;
        }
    }while(op != 0);
    return 0;
}


