#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	printf("un nombre entier à trois chiffres : \n");
	scanf("%d",&x);
	int a=x/100;
	int b=(x%100)/10;
	int c=(x%100)%10;
	int res=(c*100)+(10*b)+a;
	printf("inverse : %d",res);
	
	return 0;
}
