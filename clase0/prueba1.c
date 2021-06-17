/* librerias*/
#include <stdio.h>
#include <stdlib.h>
/* MACROS */
#define SALUDO "Bienvenidos al curso de sistemas embebidos\n"
#define COMPLEMENTO "FIEE CAS UNI"
/*variables globales*/

/*declaraciones de funciones*/

/* funcion principal */
int main(){
    system("type nul > Saludo.txt");
    FILE *fp;
    fp=fopen("Saludo.txt","w+");
    fprintf(fp,SALUDO);
    fputs(COMPLEMENTO,fp);
    fclose(fp);
    system("code Saludo.txt");
   
    return 0;
}