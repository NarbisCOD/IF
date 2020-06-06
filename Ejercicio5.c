#include<stdio.h>

#define MENJ_1 "A cocinar!!"
#define MENJ_2 "Ups..Faltan Ingredientes"

const int SI_TIENE=1;
const int NO_TIENE=2;

int main (){

    int verduras=-1;
    int agua=-1;
    int condimentos=-1;
    int cubo_caldo=-1;


    printf("Indique si tiene los siguiente ingredientes para hacer una sopa: si o no \n");
	printf ("Tiene verduras?\n");
	scanf("%i", &verduras);
        if (verduras==SI_TIENE){
        	printf ("Tiene agua?\n");
	        scanf("%i", &agua);
                if (agua==SI_TIENE){
                    printf ("Tiene condimentos?\n");
                    scanf("%i", &condimentos);
                    if ((condimentos==SI_TIENE)||(condimentos==NO_TIENE)){
                        printf ("Tiene cubo de caldo?\n");
                        scanf("%i", &cubo_caldo);
                        fflush(stdin); 
                        if (cubo_caldo==SI_TIENE){
                            printf (MENJ_1);
                        }else{
                            printf (MENJ_2);
                        }
                    }
                }else{
                    printf (MENJ_2);
                }
         }else{
         printf(MENJ_2);
        }
return 0;
}	



