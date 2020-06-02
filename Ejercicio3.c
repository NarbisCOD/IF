#include<stdio.h>

const int MAX_NOMBRE =10;

const int LLEGADA_TEMPRANO=899;
const int LLEGADA_EN_HORA=900;
const int LLEGADA_TARDE=931;


int main(){

    char nombre[MAX_NOMBRE];
    int hora_llegada=-1;

	printf("Ingrese nombre:\n");
	scanf("%s", nombre);

	printf("Ingrese hora de llegada:\n");
	scanf("%i", &hora_llegada);

    if (hora_llegada<=LLEGADA_TEMPRANO){
        printf("%s llegaste my temprano", nombre);
    }else if ((hora_llegada>=LLEGADA_EN_HORA)&&(hora_llegada<LLEGADA_TARDE)){
        printf("%s llegaste en hora", nombre);
    }else{
        printf("%s llegaste en tarde", nombre);
    }
return 0;
}



	
