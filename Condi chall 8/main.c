#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float moy;

    printf("Entrez la moyenne de l'eleve : ");
    scanf("%f", &moy);

    if (moyenne < 10.0) {
        printf("Recalé\n");
    } else if (moy >= 10.0 && moy < 12.0) {
        printf("Mention passable\n");
    } else if (moy >= 12.0 && moy < 14.0) {
        printf("Mention assez bien\n");
    } else if (moy >= 14.0 && moy < 16.0) {
        printf("Mention bien\n");
    } else if (moy >= 16.0) {
        printf("Mention très bien\n");
    } else {
        printf("Moyenne invalide\n");
    }
	return 0;
}
