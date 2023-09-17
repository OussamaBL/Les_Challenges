#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float F,c;
	printf("la temperature en Fahrenheit: \n");
	scanf("%f",&F);
	c=(F-32)/1.8;
	 if (c<=10) printf("la temperature est tres froid");	 	
	 else 
	 	if(c>10 && c<=20) printf("la temperature est froid");
	 	else
	 		if(c>20 && c<=30) printf("la temperature est chaud");
	 		else
	 			printf("la temperature est tres chaud");
	 			//ok
	 
	return 0;
}
