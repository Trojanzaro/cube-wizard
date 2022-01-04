#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int rnd = 9 + rand() % 90;
	int tries = 3;
	int guess;
	int score = 0;
	while(tries > 0) {
		printf("Score: %d\n[%d,%.3d]\nGuess the number[t: %d]: ", score, ((rnd*rnd*rnd) / 1000), ((rnd*rnd*rnd) % 1000), tries);
		scanf("%d", &guess);
		if(rnd == guess) {
			score += 100;
			printf("CORRECT! Next match\n\n");
			srand(time(NULL));
			rnd = 9 + rand() % 90;
		} else {
			printf("WRONG!");
			tries--;
		}
	}
	return 0;
}
