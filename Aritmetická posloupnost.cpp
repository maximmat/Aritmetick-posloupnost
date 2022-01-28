#include <stdio.h>

int main(void) {
	int diference = 0, predchozi = 0;

	printf("Zadejte prvni clen poslopnosti: ");
	scanf("%d", &predchozi);

	printf("\nZadejte diferenci: ");
	scanf("%d", &diference);

	printf("\n");

	for (int i = 1; i <= 20; i++) {
		printf("Clen cislo: %d: %d\n", i, predchozi);
		predchozi += diference;
	}
}