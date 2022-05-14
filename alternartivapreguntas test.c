#include <stdio.h>

int main(){
    char tecla;
    int contador;

    printf("Inserte la solucion correcta a ,b o c\n");
    do{
    scanf("%c",&tecla);

    switch(tecla){
case 'a':
        printf("¡Brillante,solucion correcta!\n");
 break;
 case 'b':
        printf("Error,intentalo de nuevo\n");
        contador++;

        break;
case 'c':
    printf("Error,intentalo de nuevo\n");
    contador++;
        break;}}
    while(contador<3&&tecla!='a');
    if (contador>3)
        {printf("Has superado el limite de intentos\n");}
    printf("Intentos  %i\n",contador);}





