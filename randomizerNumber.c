#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    randomizerNumber();

}
void randomizerNumber(){
	int lower = 10, upper = 20, count = 1;
	srand(time(0));
	int i;
	for (i = 0; i < count; i++) {
		int lowerNum = (rand() %
		(upper - lower + 1)) + lower;
		printf("valor inicial: %d \n", lowerNum);
	randomizerNumber2(lowerNum);
	}

}
randomizerNumber2(lowerNum) {
    int lowerNum, upper = 100, count = 1;
    int i;
    for (i = 0; i < count; i++) {
		int upperNum = (rand() %
		(upper - lower + 1)) + lower;
		printf("valor a bater: %d \n", upperNum);
	}
}
