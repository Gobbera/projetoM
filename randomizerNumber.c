
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
		printf("valor da range: %d \n", range);
		printf("valor a bater: %d \n", soma);
}



