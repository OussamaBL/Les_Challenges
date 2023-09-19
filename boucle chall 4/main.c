#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n=1,somme=0,max=0;
	while(n!=0){
		printf("entrer nombre :");
		scanf("%d",&n);
		if(n>=100){
			printf("le nombre est superieur a 100 \n");
			break;
		}
		somme+=n;
		if(n>max) max=n;
	}
	printf("la somme de serie est : %d \n",somme);
	printf("le max de serie est : %d \n",max);
	return 0;

	
}
