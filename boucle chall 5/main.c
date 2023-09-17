#include <stdio.h>

int main() {
    int nombre, nombreInverse = 0;

    // Demande à l'utilisateur de saisir un entier
    printf("Entrez un entier : ");
    scanf("%d", &nombre);

    // Calcule l'entier inversé
    while (nombre > 0) {
        int dernierChiffre = nombre % 10;
        nombreInverse = nombreInverse * 10 + dernierChiffre;
        nombre = nombre / 10;
    }

    // Affiche l'entier inversé
    printf("nombre inversé est : %d\n", nombreInverse);

    return 0;
}

