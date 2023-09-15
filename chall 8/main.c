#include <stdio.h>

int main() {
    int nombre;

    // Demande à l'utilisateur d'entrer un nombre entier
    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

    // Affiche la valeur en octal
    printf("La valeur en octal est : %o\n", nombre);

    // Affiche la valeur en hexadécimal
    printf("La valeur en hexadécimal est : %X\n", nombre);

    return 0;
}

