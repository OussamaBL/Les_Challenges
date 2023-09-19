#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,min=0,max=0;
	int tab[10];
	for(i=0;i<10;i++){
		printf("Saisie un nombre : ");
		scanf("%d",&tab[i]);
		if(tab[i]<min) min=tab[i];
		if(tab[i]>max) max=tab[i];
	}
	for(i=0;i<10;i++){
		printf("nombre %d : %d \n",i+1,tab[i]);
	}
	printf("max nombre : %d \n",max);
	printf("min nombre : %d",min);
	return 0;
}
