#include<stdio.h>
#include<stdlib.h>


int preguntatest(char solucion);
int preguntamatematicas(float solucion);


int main(){
              char x;
              char decision1;
              char decision2;
              int vidas=0;
              char solucion1= 'A';
              char solucion2= 'A';
              float solucion3= '06:05';
              float solucion4= '6';

     printf("Bienvenido aventurero!\n");

    printf("Ya son las 12 de una noche de lluvia, avanzas con tu coche por una carretera que parece no tener fin\n");
        scanf("%c",&x);
    printf("comienza a haber tormenta, deber�as buscar un techo donde pasar la noche\n");
        scanf("%c",&x);
    printf("Ves la entrada a un hotel a un lado de la carretera\n");

     do{
    printf("Decides:\n A)pasar la noche\n B)continuar con tu viaje\n");
    do{
        fflush(stdin);
        scanf("%c", &decision1);
        if(decision1=='A'){
					printf("Giras a la derecha, apenas puedes ver por la penumbra\n");
				}
        else if(decision1=='B'){
					printf("La tormenta empeora, deber�as encontrar cobijo para la noche, estas agotado y conducir en estas condiciones es peligroso\n");
				}
        else{
                printf("Introduzca una opci�n v�lida(A o B)\n");
				}
    }while(decision1!='A' && decision1!='B');
    }while(decision1!='A');

        printf("Te bajas del coche y llegas a la entrada\n");
              scanf("%c",&x);
        printf("A pesar de la oscuridad aprecias que el hotel se ve antiguo y en mal estado\n");
              scanf("%c",&x);
        printf("Entras al hotel, no hay nadie que te reciba\n");
              scanf("%c",&x);
        printf("Decides buscar a alguien que te pueda ayudar\n");
                scanf("%c",&x);
        printf("Escuchas dos personas discutiendo, decides acercarte\n");
                scanf("%c",&x);
        printf("Entras a la sala, parece una barberia\n");
                scanf("%c",&x);
        printf("Ignoran tu presencia y continuan su discusi�n\n");
                scanf("%c",&x);
        printf("Aprecias que discuten sobre quien es el mejor peluquero de los dos\n");
                scanf("%c",&x);
        printf("Uno de los extra�os dice: 'eh tu, juzga nuestros peinados y decide quien es el mejor'\n");
        //imagen peluqueros, acertijo 51
        printf("A) Extra�o A\nB) Extra�o B\n");
          vidas = preguntatest(solucion1);

         if(vidas==3){
        printf("No has conseguido superar la prueba, estas destinado a ser uno de ellos");
        printf("FIN DEL JUEGO");
    }
    else{
        printf("El extra�o A te respode:'hahaha, sab�a que eras listo'\n");
        scanf("%c",&x);
    }






        printf("Finalmente, te dan las llaves de tu habitaci�n\n");
                scanf("%c",&x);
        printf("Estas agotado, te tumbas en la cama\n");
                scanf("%c",&x);
        printf("Los extra�os siguen con su interminable discusi�n y no te dejan pegar ojo\n");
                scanf("%c",&x);
        printf("Cansado de no poder dormir, te decides a pedirles silencio\n");
                scanf("%c",&x);
        printf("Abres la puerta, te quedas en shock al ver que su puerta ya no daba al pasillo por el que hab�as llegado\n");
                scanf("%c",&x);
        printf("La puerta se cierra tras de t�\n");
                scanf("%c",&x);
        printf("Contemplas la sala, esta oscura. La �nica luz la proporciona una bombilla que iluminan\n tenuemente cuatro sombreros de copa dispuestos en una mesa\n");
                scanf("%c",&x);
        printf("Consigues distinguir una figura al fondo de la sala\n");
                scanf("%c",&x);
        printf("Se te ponen los pelos de punta, ya es suficiente, quieres abandonar el hotel\n");
                scanf("%c",&x);
        printf("Antes de que puedas decir nada, la misteriosa figura te dice 'Estas cuatro chisteras tienen\n la misma altura. Pero la longitud de sus alas es diferente. Es decir: las chisteras son igual de altas, pero cada una tiene un ancho distinto.'\n");
                scanf("%c",&x);
        printf("Una de las cuatro chisteras tiene un ala y una copa de la misma medida. �Sabes cu�l es?, si respondes correctamente te dejare pasar\n");
        //foto acertijo 003
        printf("A) Sombrero A 8\nB)Sombrero B\nC) Sombrero C\nD) Sombrero D\n");

          vidas = preguntatest(solucion2);

            if(vidas==3){
        printf("El hombre misterioso no te deja abandonar la sala, te quedas encerrado en la oscuridad");
        printf("FIN DEL JUEGO");
    }
    else{
        printf("'puedes continuar'\n");
        scanf("%c",&x);
    }


    printf("bajas las escaleras tan r�pido como puedes\n");
                scanf("%c",&x);
    printf("Acabas de llegar a la sala de estar del hotel\n");
                scanf("%c",&x);
    printf("Una vez m�s, las puertas est�n bloqueadas\n");
                scanf("%c",&x);
    printf("Notas una presencia, es una anciana\n");
                scanf("%c",&x);
    printf("Te sientes aliviado de que no sea una amenaza\n");
                scanf("%c",&x);
    printf("Al acercate notas algo extra�o en su rostro, no tiene ojos\n");
                scanf("%c",&x);
    printf("La anciana pregunta'�qu� hora es?, si aciertas te dejare ir, si no me quedar� con tus ojos'\n");
                scanf("%c",&x);
    printf("Consigues encontrar un reloj,  dicho reloj de pared se cay� al suelo y todos los n�meros se desprendieron\n");
                scanf("%c",&x);
    // imagen reloj
    printf("(escriba la hora de la siguiente forma horas:minutos, ejemplo:'12:15')\n");

    vidas=preguntamatematicas(solucion3);

    if(vidas==3){
        printf("La anciana se queda tus ojos\n");
        printf("FIN DEL JUEGO");
    }
    else{
        printf("'muchas gracias muchacho, puedes continuar'\n");
        scanf("%c",&x);
    }



    printf("Llegas a la recepci�n y sales del hotel\n");
                scanf("%c",&x);
    printf("Entras del hotel y te tomas un peque�o respiro tratando de asimilar todo lo ocurrido\n");
                scanf("%c",&x);
    printf("Vas a arrancar el coche\n");
                scanf("%c",&x);
    printf("No puede ser...\n");
                scanf("%c",&x);
    printf("No encuentras las llaves\n");
                scanf("%c",&x);
    printf("Escuchas una voz juguetona que dice: 'tenemos tus llaveeess'\n");
                scanf("%c",&x);
    printf("hist�rico, sales del coche, no estas seguro de donde ven�a la voz\n");
                scanf("%c",&x);
    printf("Decides:\n A)explorar el jard�n trasero\n B)Buscar por el jard�n delantero\n");

        scanf("%c", &decision2);
        if(decision2=='A'){
					printf("Avanzas por el lateral del hotel hasta llegar a un dep�sito de agua\n");
                scanf("%c",&x);
					printf("Un hombre robusto te esperaba, aprecias que se transparenta\n");
                scanf("%c",&x);
					printf("Es... UN FANTASMA???\n");
                scanf("%c",&x);
                    printf("El fantasma comenta: 'me ahogu� en este mismo dep�sito hace m�s de 100 a�os, si consigo arreglarlo podre alcanzar la vida eterna'\n");
                scanf("%c",&x);
                    printf("'si me ayudas te dar� tus llaves'\n");
                scanf("%c",&x);
                    printf("Aceptas su propuesta\n");
                scanf("%c",&x);
                    printf("El fantasma explica:'Este dep�sito de agua tiene 2,5m de profundidad y se llena de agua durante ocho horas al d�a, a partir de las 9:00. El nivel del agua sube 60cm durante esas horas'\n");
                scanf("%c",&x);
                    printf("'Sin embargo, parece que hay una fuga y se pierde agua durante la noche, porque a la ma�ana siguiente el nivel del agua ha bajado 20cm'\n");
                scanf("%c",&x);
                    printf("'Si el nivel del agua sigue subiendo 40cm al d�a, �cu�ntos d�as tardar� en desbordarse el dep�sito?'\n");

                    vidas=preguntamatematicas(solucion4);

                    if(vidas==3){
        printf("El fantasma te tira al dep�sito y tomas su lugar\n");
        printf("FIN DEL JUEGO");
    }
    else{
        printf("'gracias, toma tus llaves, ya no hay nada que me ate a este mundo,'\n");
        scanf("%c",&x);
    }
				}
        else if(decision2=='B'){printf("\n");
					printf("Ves una silueta cerca de los �rboles\n");
                scanf("%c",&x);
					printf("te aproximas, es el jardinero, est� podando los arbustos\n");
                scanf("%c",&x);
					printf("Al notar tu presencia se gira en tu direcci�n\n");
                scanf("%c",&x);
					printf("Es un esqueleto\n");
                scanf("%c",&x);
					printf("Despues de todo no te sorprende\n");
                scanf("%c",&x);
					printf("Te comenta que si le ayudas a hacer su trabajo te entregar� las llaves\n");
                scanf("%c",&x);
					printf("Aceptas\n");
                scanf("%c",&x);
					printf("'�Qu� dos �rboles est�n m�s separados entre s�?'\n");
                scanf("%c",&x);
					printf("A) B y \nB)C y E \nC) B y E \nD) A y E  \n");

					vidas = preguntatest(solucion1);

					 if(vidas==3){
        printf("El esqueleto te poda un brazo");
        printf("FIN DEL JUEGO");
    }
    else{
        printf("'toma tus llaves, gracias por tu ayuda'\n");
        scanf("%c",&x);
    }
				}
        else{
                printf("Introduzca una opci�n v�lida(A o B)\n");
                }
        printf("Arrancas tu coche y consigues escapar\n");
        scanf("%c",&x);
        printf("Conduces agotado\n");
        scanf("%c",&x);
        printf("comienza a haber tormenta, deber�as buscar un techo donde pasar la noche\n");
        scanf("%c",&x);
        printf("FIN DEL JUEGO");}

int preguntatest(char solucion){
    int contador;
char tecla;
do{
    scanf(" %c",&tecla);

    if (tecla==solucion){
        printf("�Brillante,solucion correcta!\n");
 }

    else{
        printf("Error\n");
        contador++;
}
    }while(contador<2&&tecla!=solucion);
         printf("Intentos  %i\n",contador);
         return contador;
         }

int preguntamatematicas(float solucion){
    int contador;
    float correcta;
do{
    scanf("%f",&correcta);

    if (correcta==solucion){
        printf("�Brillante,solucion correcta!\n");

 }

    else{
        printf("Error,intentalo de nuevo\n");
         contador++;

}
    }while(contador<3&&correcta!=solucion);

    printf("Fallos %i\n",contador);
    return contador;
    }
