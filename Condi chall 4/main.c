#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	printf("entrer les trois valeur a et b c \n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	float delta=pow(b,2)-(4*a*c);
	printf("delta = %f \n",delta);
	float r1,r2;
	r1=(pow(-b,2)-sqrt(delta))/2*a;
	r2=(pow(-b,2)+sqrt(delta))/2*a;
	printf("Les solutions : solution 1 : %f \n solution 2 : %f \n",r1,r2);
	return 0;
}
