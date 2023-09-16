#include <stdio.h>

int main() {
    char c;

    // Demande à l'utilisateur de saisir un caractère
    printf("Entrez un caractere : ");
    scanf(" %c", &c);  // Notez l'espace avant %c pour éviter les espaces blancs indésirables

    // Vérifie si le caractère est une lettre de l'alphabet
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        if (c >= 'A' && c <= 'Z') printf("%c est une lettre majuscule.\n", c);
         else printf("%c est une lettre minuscule.\n", c);
        
    } else printf("%c n'est pas une lettre de l'alphabet.\n", c);
    
	return 0;
}

