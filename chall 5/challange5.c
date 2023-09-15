#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
    int x1,y1,x2,y2;
    printf("saisie la valeur de x1 :  \n");
    scanf("%d",&x1);
    printf("saisie la valeur de x2 :  \n");
    scanf("%d",&x2);
    printf("saisie la valeur de y1 :  \n");
    scanf("%d",&y1);
    printf("saisie la valeur de y2 :  \n");
    scanf("%d",&y2);
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Print the result
    printf("The distance MN is: %.2lf\n", distance);
	return 0;
	
}
