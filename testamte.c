#include <stdio.h>//
void preguntamatematicas(float solucion);
int main(){
float solucion1;
    solucion1=5555;
    preguntamatematicas(solucion1);
return 0;
}
void preguntamatematicas(float solucion){
    int contador;
    float correcta;
do{
    scanf("%f",&correcta);

    if (correcta==solucion){
        printf("¡Brillante,solucion correcta!\n");
 }

    else{
        printf("Error,intentalo de nuevo\n");

}contador++;
    }while(contador<3);

    printf("Has superado el limite de intentos\n");
    printf("Intentos  %i\n",contador);}

