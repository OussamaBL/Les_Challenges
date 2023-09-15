#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float r;
	printf("entrer le rayon du cercle : \n");
	scanf("%f",&r);
	float c=r*3.14*2;
	printf("la circonférence de cercle : %f",c);
	return 0;
}
