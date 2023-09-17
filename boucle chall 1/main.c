#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("saisie un nombre : \n");
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		printf("%d*%d=%d \n",n,i,n*i);
	} 
	return 0;
}
