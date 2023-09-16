#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int day,month,year;
	scanf("%d/%d/%d",&day,&month,&year);
	switch(month){
		case 01: printf("la date : %d-Janvier-%d",day,year);
			break;
		case 02: printf("la date : %d-Fevrier-%d",day,year);
			break;
		case 03: printf("la date : %d-mars-%d",day,year);
			break;
		case 04: printf("la date : %d-avril-%d",day,year);
			break;
		case 05: printf("la date : %d-may-%d",day,year);
			break;
		case 06: printf("la date : %d-juin-%d",day,year);
			break;
		case 07: printf("la date : %d-juillet-%d",day,year);
			break;
		case '08': printf("la date : %d-aout-%d",day,year);
			break;
		case '09': printf("la date : %d-septembre-%d",day,year);
			break;	
		case 10: printf("la date : %d-october-%d",day,year);
			break;
		case 11: printf("la date : %d-novembre-%d",day,year);
			break;
		case 12: printf("la date : %d-decembre-%d",day,year);
			break;
	
	}
	
	//methode 2
	/*printf("entrer la date en format dd/mm/yy : ");
	scanf("%d",&date);
	
	char *token = strtok(date, "/");
    strcpy(day, token);
    token = strtok(NULL, "/");
    strcpy(month, token);
    token = strtok(NULL, "/");
    strcpy(year, token);
    printf("%d %d %d",day,month,year);
    printf("date : ");
    */
	return 0;
}
