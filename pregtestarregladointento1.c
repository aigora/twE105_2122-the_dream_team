#include <stdio.h>// sistemas de respuestas tipo test para cada pregunta asignamos la solucion antes para poder variar la respuesta en cada pregunta solo hay que
//modificar la solucion
int preguntatest(char solucion);
int main(){
    char solucion1;
    solucion1='a';
    int contador;
    contador=preguntatest(solucion1);
    printf("%i",contador);
}
int preguntatest(char solucion){
    int contador;
char tecla;
do{
    scanf(" %c",&tecla);

    if (tecla==solucion){
        printf("¡Brillante,solucion correcta!\n");
 }

    else{
        printf("Error\n");
        contador++;
      if (contador==3){
        printf("Has superado el limite de intentos\n");}

}
    }while(contador<3&&tecla!=solucion);


         printf("Intentos  %i\n",contador);
         return contador;}
