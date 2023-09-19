#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,v,j;
	int tab[10];
	for(i=0;i<10;i++){
		printf("saisie un nombre : ");
		scanf("%d",&tab[i]);
	}
	//Trie 
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(tab[i]<tab[j]){
				v=tab[i];
				tab[i]=tab[j];
				tab[j]=v;
			}	
		}
		
	}
	for(i=0;i<10;i++) 
		printf("le nombre %d : %d \n",i+1,tab[i]);
	return 0;
}
