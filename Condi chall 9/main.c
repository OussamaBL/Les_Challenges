#include <stdio.h>

int main() {
    char c;

    // Demande � l'utilisateur de saisir un caract�re
    printf("Entrez un caractere : ");
    scanf(" %c", &c);  // Notez l'espace avant %c pour �viter les espaces blancs ind�sirables

    // V�rifie si le caract�re est une lettre de l'alphabet
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        if (c >= 'A' && c <= 'Z') printf("%c est une lettre majuscule.\n", c);
         else printf("%c est une lettre minuscule.\n", c);
        
    } else printf("%c n'est pas une lettre de l'alphabet.\n", c);
    
	return 0;
}

