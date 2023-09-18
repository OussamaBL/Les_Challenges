#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	int y=1,i,j,k,x;
	printf("Entrer nombre : ");
	scanf("%d",&n);
	x=n-1;
	for(i=0;i<n;i++){
		for(j=0;j<x;j++){
			printf(" ");
		}
		for(k=0;k<y;k++){
			printf("*");
		}
		printf("\n");
		x--;
		y+=2;
	}
	return 0;
}
