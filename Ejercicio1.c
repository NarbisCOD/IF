#include <stdio.h>
#include <string.h>

char usuario_1[]="Narbis";
char usuario_2[]="Amelia";
char usuario_3[]="Merida";

int CLAVE_1 = 123;
int CLAVE_2 = 456;
int CLAVE_3 = 789;

int main(){

    char usuario[0];
    int clave_ingresada = -1;

    printf("Ingrese nombre de usuario:\n");
    scanf("%s", &usuario);

    printf("Ingrese su Clave:\n");
    scanf("%i", &clave_ingresada);
    if (((strcmp(usuario, usuario_1)==0) && (clave_ingresada == CLAVE_1)) || ((strcmp(usuario, usuario_2)==0) && (clave_ingresada == CLAVE_2)) || ((strcmp(usuario, usuario_3)==0) && (clave_ingresada == CLAVE_3))){
        printf("Bienvenido: %s", usuario);
    }else{
        printf("Error, usuario y/o clave incorrectos");
    }
    return 0;
}
