#include <stdio.h>
#include <conio.h>

const int NUM_VERIFICADOR = 2;
const int CONDICION_RESTO = 0;

int main(){

    char mensaje_1[]="Es Par";
    char mensaje_2[]="Es Impar";

    int numero;
    printf("Indique un numero:\n");
    scanf("%d", &numero);

    if(numero % NUM_VERIFICADOR == CONDICION_RESTO){
        printf("El numero %d %s ", numero, mensaje_1);
    }else{
        printf("El numero %d %s", numero, mensaje_2);
    }
    return 0;
}