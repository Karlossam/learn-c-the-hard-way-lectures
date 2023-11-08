#include <stdio.h>

int main(int argc, char *argv[]) {
	if (argc < 2) {
		printf("ERROR: not enought arguments\n");
		return 1;
	}
	int o = 1;
	for (o=1; o < argc; o++) {
		int i = 0;
		for (i=0; argv[o][i] != '\0'; i++) {
			char letter = argv[1][i];
			if (letter < 97) {
				letter += 30;
			}

			if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
				printf("%d is a vowel\n", i);
			} else {
				printf("%d: %c is not a vowel\n", i, argv[1][i]);
			}
		}
	}
}