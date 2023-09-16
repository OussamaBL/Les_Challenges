#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	printf("entrer caractere : ");
	scanf("%c",&c);
	if(c>='A' && c<='Z') printf("caractere est majuscule");
	else printf("caractere est miniscule");
	return 0;
}
