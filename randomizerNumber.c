#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    randomizerNumber();


}
void randomizerNumber(){
	int lower = 10, upper = 80, count = 1;
	srand(time(0));
	int i;
	for (i = 0; i < count; i++) {
		int randomNum = (rand() %
		(upper - lower + 1)) + lower;
		printf("valor inicial: %d \n", randomNum);
		range(randomNum);
	}
}
void range(randomNum) {
    int lower = 10, upper = 20, count = 1;
	srand(time(0));
	int i;
	for (i = 0; i < count; i++) {
		int range = (rand() %
		(upper - lower + 1)) + lower;
		printf("valor da range: %d \n", range);
		int soma = range + randomNum;
		printf("valor a bater: %d \n", soma);
	}
}

