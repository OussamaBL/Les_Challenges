#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	printf("Entrer un caractere : \n");
	scanf("%c",&c);
	switch(c){
		case 'a': case 'e': case 'i': case 'o':case 'u': 
            printf("%c est une voyelle \n", c);
            break;
        default:
            printf("%c n'est pas une voyelle \n", c);
	}
	return 0;
}
