#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int annee, mois, jours, heures, minutes, secondes,c;

    // Demande à l'utilisateur de saisir une année
    printf("entrez une annee : ");
    scanf("%d", &annee);

    // Calculs des conversions
    mois = annee * 12;
    jours = annee * 365;
    heures = jours * 24;
    minutes = heures * 60;
    secondes = minutes * 60;
    printf("touche 1 pour afficher mois \n");
    printf("touche 2 pour afficher jours \n");
    printf("touche 3 pour afficher heures \n");
    printf("touche 4 pour afficher minutes \n");
    printf("touche 5 pour afficher secondes \n");
    scanf("%d",&c);
    switch(c){
    	case 1:
    		printf("mois : %d\n",mois);
    		break;
    	case 2:
    		printf("jours : %d\n",jours);
    		break;
    	case 3:
    		printf("heures : %d\n",heures);
    		break;
    	case 4:
    		printf("minutes : %d\n",minutes);
    		break;
    	case 5:
    		printf("secondes : %d\n",secondes);
    		break;
	}
	return 0;
}
