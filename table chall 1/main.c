#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int tab[10]={1,2,3,4,5,6,7,8,9,10};
	for(i=0;i<10;i++){
		if(tab[i]==10) {
			printf("%d ",tab[i]);
			break;	
		}
		printf("%d, ",tab[i]); 
	} 
	return 0;
}
