#include <stdio.h>

int main() {
	int i = 25;
	test
	printf("Empezamos bucle\n");
	while (i > 0) {
		i--;
		if (i % 5 == 0) {
			continue;
		}
		printf("%d\n",i);
	}
	printf("Terminamos bucle\n");
	return 0;
}