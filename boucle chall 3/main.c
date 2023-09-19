#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,i;
	bool res=1;
	printf("Entrer nombre : ");
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if(n%i==0){
			res=0;
			break;
		} 
	}
	if(res==0) printf ("nombre n'est pas premier'");
	else printf ("nombre premier");
	return 0;
}
