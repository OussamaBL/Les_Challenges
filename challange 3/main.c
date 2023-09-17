#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b;
    printf("Entrez la valeur de a : ");
    scanf("%d", &a);
    printf("Entrez la valeur de b : ");
    scanf("%d", &b);


    int add = a + b;
    int sou = a - b;
    int multi = a * b;
    float div = (float)a / b;
    int mod = a % b;

    printf("a + b = %d\n", add);
    printf("a - b = %d\n", sou);
    printf("a * b = %d\n", multi);
    printf("a / b = %.2f\n", div);
    printf("a %% b = %d\n", mod);
	return 0;
}
