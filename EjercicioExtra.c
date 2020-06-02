#include<stdio.h>

const int TIEMPO_ENTREGA=90;

const int SI_LLEGO=1;
const char LLEGO_BIEN='B';
const char LLEGO_MAL='M';
const char OPC_RECIBIDO ='E';

const int SIN_CALIF=0;
const int CALIF_1=1;
const int CALIF_2=2;
const int CALIF_3=3;

int main (){

char recibido_1[]="No Llego";
char recibido_2[]="llego Mal";
char recibido_3[]="llego Bien";
char recibido_4[]="tarde";

int tiempo_entrega=-1;
int paquete_recibido=-1;
char opc_estado = OPC_RECIBIDO;

printf("Indique si Recibio el Paquete: [1]SI - [2]NO\n");
	scanf("%i", &paquete_recibido);
if (paquete_recibido==SI_LLEGO){
    printf("Indique cuantos dias tardo en Recibirlo:\n");
    scanf("%i", &tiempo_entrega);
    printf("Indique en que condiciones lo recibio: [B]LLego Bien - [M]llego Mal\n");
    scanf(" %c", &opc_estado);
    if ((tiempo_entrega<=TIEMPO_ENTREGA)&&(opc_estado==LLEGO_BIEN)){
        printf("Su Paquete %s\n",recibido_3);
        printf("Estrella:%i", CALIF_3);
        }else if ((tiempo_entrega<=TIEMPO_ENTREGA)&&(opc_estado==LLEGO_MAL)){
            printf("Su Paquete %s\n", recibido_2);
            printf("Estrella:%i", CALIF_2);
        } 
    if ((tiempo_entrega>TIEMPO_ENTREGA)&&(opc_estado==LLEGO_BIEN)){
        printf("Su Paquete %s pero %s\n",recibido_3, recibido_4);
        printf("Estrella:%i", CALIF_1);
        }else if ((tiempo_entrega>TIEMPO_ENTREGA)&&(opc_estado==LLEGO_MAL)){
            printf("Su Paquete %s y %s\n",recibido_2, recibido_4);
            printf("Estrella:%i", CALIF_1);
        } 
}else{
	printf("Su Paquete %s\n",recibido_1);
    printf("Estrella:%i", SIN_CALIF);
}
return 0;
}