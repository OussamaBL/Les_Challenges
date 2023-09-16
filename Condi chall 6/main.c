#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	printf("entrer nombre : ");
	scanf("%d",&x);
	if(x<0) printf("nombre negatif");
	else if(x>0) printf("nombre positif");
	else printf("nombre egal zero");
	return 0;
}
