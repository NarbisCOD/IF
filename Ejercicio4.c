#include<stdio.h>
#include<stdbool.h>

#define MENJ_1 "Esta lloviendo, agarra el paraguas!"
#define MENJ_2 "Esta lloviendo, a correr!"
#define MENJ_3 "No llueve :D"



int main (){

    bool llueve = true;
    bool tienes_paraguas = true;

    
    if ((llueve) && (tienes_paraguas)){
         printf(MENJ_1);
        }else if ((llueve) && (!tienes_paraguas)){
            printf(MENJ_2);
    }else{
        printf(MENJ_3);
    }
    
    return 0;
}