#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double a, b, c, d;
    double sum, moy;

    // Demande � l'utilisateur de saisir les quatre nombres
    printf("Entrez le premier nombre : ");
    scanf("%lf", &a);
    printf("Entrez le deuxi�me nombre : ");
    scanf("%lf", &b);
    printf("Entrez le troisi�me nombre : ");
    scanf("%lf", &c);
    printf("Entrez le quatri�me nombre : ");
    scanf("%lf", &d);

    // Calcul de la somme
    sum = a + b + c + d;

    // Calcul de la moyenne
    moy = sum / 4;

    // Affichage des r�sultats
    printf("La somme des nombres est : %.2lf\n", sum);
    printf("La moyenne des nombres est : %.2lf\n", moy);
	return 0;
}
