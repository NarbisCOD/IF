#include<stdio.h>

#define MENJ_1 "A cocinar!!"
#define MENJ_2 "Ups..Faltan Ingredientes"


int main (){

    char si_tiene[]="si";
    char no_tiene[]="no";

    char verduras[5];
    char agua[5];
    char condimentos[5];
    char cubo_caldo[5];

    printf("Indique si tiene los siguiente ingredientes para hacer una sopa: si o no \n");
	printf ("Tiene verduras?\n");
	scanf("%[^\n]", verduras);
	fflush(stdin);
        if (verduras==si_tiene);
        	printf ("Tiene agua?\n");
	        scanf("%[^\n]", agua);
	        fflush(stdin);
            if (agua==si_tiene);
                printf ("Tiene condimentos?\n");
                scanf("%[^\n]", condimentos);
                fflush(stdin);
                printf (MENJ_1);

return 0;

}


