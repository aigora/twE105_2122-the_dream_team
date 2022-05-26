#include<stdio.h>
#include<stdlib.h>

int preguntatest(char solucion);
int preguntamatematicas(float solucion);


int main(){
    char respuestaC1, respuestaC2; //respuesta de tipo caracter
    float respuestaN; //respuesta de tipo numerica
    char solucionA = 'A';
    char solucionB = 'B';
    char solucionC = 'C';
    int intentos, i=0;

    printf("Bienvenido aventurero!\n");
    printf("Llevas 2 semanas de viaje, tu d%ca ha sido duro, pero por fin has llegado al hotel y puedes descansar\n", 161);
    printf("El hotel es silencioso, un poco viejo y sobretodo oscuro, pero bueno, solo vienes a descansar para poder retomar tu viaje ma%cana temprano\n", 164);
    printf("Ma%cana te levantas a las 8 am, te dispones a dormir, en tu habitaci%cn en la tercera planta \n", 164, 162);
    printf("De lo cansado que estas caes totalmente rendido\n (Te duermes a las 10:30 pm)\n\n");
    printf("(Ruido de risas en el pasillo)\n\n");
    printf("Te levantas por el ruido, miras el m%cvil, son las 2 am, no entiendes como puede haber tanto ruido a estas horas\n", 162);
    printf("(Las risas aumentan)\n");
    printf("Molesto por el ruido decides asomarte al pasillo a ver que sucede pero...\n");
    printf("La puerta no abre, es como si la hubieran cerrado con llave\n");
    do{
    printf("Decides:\n A)Abrir la puerta de un placaje\n B)Te rindes e intentas volver a conciliar el sue%co\n", 164);
    printf("(Respuesta letras)\n");
    do{
        fflush(stdin);  //para borrar el valor de resultadoC1 y que funcione el bucle
        scanf("%c", &respuestaC1);
        if(respuestaC1=='A'){
					printf("Abres la puerta\n");
				}
        else if(respuestaC1=='B'){
					printf("Te metes en la cama, pero hay mucho ruido como para dormir, as%c que te vuelves a levantar a la puerta y...\n", 161);
				}
        else{
                printf("Has introducido mal la opcion. Solo vale a o b\n");
				}
    }while(respuestaC1!='A' && respuestaC1!='B');
    }while(respuestaC1!='A');

    printf("Sales al pasillo y ves una figura que sale corriendo y se mete en la %cltima habitaci%cn del pasillo\n", 163, 162);
    printf("Le sigues y entras en la habitaci%cn, la puerta se cierra de golpe y no hay nadie en la habitaci%cn\n", 162, 162);
    printf("En la habitaci%cn solo hay una hoja y tres llaves, lees la hoja\n", 162);
    printf("'Estas en un hotel encantado, para poder salir deberas acertar todos los acertijos, sino te quedaras aqu%c para siempre'\n", 161);
    printf("Para salir de esta habitaci%cn debes coger una de las tres llaves que hay delante tuyo, la A, la B o la C, en funci%cn de tu decisi%cn podras salir o no\n\n", 162, 162, 162);
    printf("Acertijo:\nHay 10 velas encendidas, el viento apaga 2, y luego apaga otra m%cs ¿cu%cntas velas quedar%cn al final?\n", 160, 160, 160);
    printf("A) 8 velas\nB) 7 velas\nC) 3 velas\nD) 5 velas\n");
    printf("(Respuesta n%cmeros)\n", 163);
    intentos = preguntamatematicas(3);

    printf("Las 7 velas que no apag%c el viento acabar%cn consumi%cndose por completo, por lo que s%clo quedar%cn las 3 que apag%c el viento y por tanto no se consumieron\n\n", 162, 162, 130, 162, 160, 162);
    if (intentos == 3){
        ++i;
        printf("\nHAS PERDIDO UNA VIDA\nTE QUEDAN %d\n\n", 4-i);
        if(4-i == 0){
            printf("GAME OVER");
            exit(1);
        }
    }

    fflush(stdin); //PAUSA
    getchar();

    printf("Sales de la habitaci%cn, buscas tu maleta para salir corriendo\n", 162);
    printf("En tu habitaci%cn hay una bruja, la cu%cl te plantea otro acertijo para recuperar tu maleta o quedarsela\n", 162, 160);
    printf("Acertijo:\nUn virus llena un tarro en una hora, dividi%cndose en dos una vez al minuto ¿Cu%cntos minutos tardar%c el tarro en llenarse si empezaras con dos virus?\n", 130, 160, 160);
    printf("A) 1 hora\nB) 30 min\nC) 59 min\n");
    printf("(Respuesta letras)\n");
    intentos = preguntatest(solucionC);

    if (intentos == 2){
        ++i;
        printf("\nHAS PERDIDO UNA VIDA\nTE QUEDAN %d\n\n", 4-i);
        if(4-i == 0){
            printf("GAME OVER");
            exit(1);
        }
    }

    fflush(stdin); //PAUSA
    getchar();

    printf("Un virus necesita un minuto para duplicarse. Por tanto, si empiezas con dos virus en lugar de con uno, s%clo ganas un minuto\nPor tanto la soluci%cn es la C", 162, 162);
    printf("Bien hecho! Ya tienes tu maleta, ahora hay que intentar salir del hotel\n");
    printf("Por donde prefieres intentar huir:\nA) Escaleras\nB) Ascensor\n");
    printf("(Respuesta letras)\n");
    do{
        fflush(stdin);  //para borrar el valor de resultadoC1 y que funcione el bucle
        scanf("%c", &respuestaC1);
        printf("\n\n");
        if(respuestaC1=='A'){
					printf("Huyes en escaleras\n");
				}
        else if(respuestaC1=='B'){
					printf("Entras en el ascensor pero...\n");
					printf("El ascensor se ha cerrado y no se mueve\n");
					printf("Llamas al bot%cn de emergencia y te dice lo siguiente:\n", 162);
					printf("'Si tienes un gran cubo pintado de rojo y lo divides en 27 cubitos iguales ¿cu%cntos de ellos tendr%cn solo una de sus seis caras pintadas de rojo?'\n", 160, 160);
					printf("Marca el resultado con los botones del ascensor para poder bajar al segundo piso\n");
					printf("Opciones:\nA) 19\nB) 6\nC) 0\nD) 13.5\n E) 27\n");
					printf("(Respuesta n%cmeros)\n", 163);

					intentos = preguntamatematicas(6);
					if (intentos == 3){
                        ++i;
                        printf("\nHAS PERDIDO UNA VIDA\nTE QUEDAN %d\n\n", 4-i);
                        if(4-i == 0){
                            printf("GAME OVER");
                            exit(1);
                        }
					}

					printf("Vas corriendo a las escaleras antes de que el ascensor deje de funcionar completamente\n");
				}
        else{
                printf("Has introducido mal la opci%cn. Solo vale a o b\n", 162);
				}
    }while(respuestaC1!='A' && respuestaC1!='B');

    fflush(stdin); //PAUSA
    getchar();

    printf("LLegas al segundo piso y te encuentras a un viejo loco que tiene atado a Frankestein\n");
    printf("Te dice que si no le ayudas le soltara\n");
    printf("El viejo te dice: 'Tengo que darle 10 pastillas a Frankestein, una diaria a partir de hoy, y en un orden espec%cfico ¿A cu%cntas debe poner n%cmero para no equivocarme?'\n", 161, 160, 163);
    printf("A) A 8\nB) A las 10\nC) A 9\n");
    printf("(Respuesta letras)\n");

    intentos = preguntatest(solucionA);

    printf("Debe darle la pastilla de hoy, y luego numerar las que le toque darle desde el d%ca 2 al 9. La del d%ca 10 no necesita numerarla porque ser%c la %cnica que no estar%c numerada, as%c que no puede confundirse con otra\n", 161, 161, 160, 163, 160, 161);
    if (intentos == 2){
        ++i;
        printf("\nHAS PERDIDO UNA VIDA\nTE QUEDAN %d\n", 4-i);
        if(4-i == 0){
            printf("GAME OVER");
            exit(1);
        }
    }

    fflush(stdin); //PAUSA
    getchar();

    printf("Consigues escapar y te diriges a recepci%cn cuando...\n", 162);
    printf("Te encuentras de frente a dos gemelos totalmente parados y con un aspecto muy t%ctrico\n", 130);
    printf("Un hermano habla y te dice: 'Si quieres pasar tienes que averiguar nuestras edad'\n");
    printf("El otro hermano comenta: 'Si me quito 2 a%cos y se los doy a mi hermano, %cl tendr%ca dos veces mi edad. Y si le diera un a%co m%cs, tendr%ca el triple'\n ¿Cu%cntos a%cos tienen ambos hermanos?\n", 164, 130, 161, 164, 160, 161, 160, 164);
    printf("A) 9\nB) 6\nC) 3\nD) 14\nE) 5\n");
    printf("(Respuesta n%cmeros)\n", 163);
    preguntamatematicas(6);

    printf("La respuesta correcta es 6 a%cos cada uno\n", 164);

    if (intentos == 3){
        ++i;
        printf("\nHAS PERDIDO UNA VIDA\nTE QUEDAN %d\n\n", 4-i);
        if(4-i == 0){
           printf("GAME OVER");
           exit(1);
            }
        }

    fflush(stdin); //PAUSA
    getchar();

    printf("Los hermanos te dejan pasar y llegas a la recepci%cn del hotel, justo en la salida\n", 162);
    printf("Ves la puerta giratoria con la que salir, te aproximas hacia ella cuando aparece una se%cora mayor con aspecto t%ctrico con 2 perros que se comerian facilmente tu maleta de un mordisco\n", 164, 130);
    printf("La se%cora te mira y te dice 'Llevo atrapada en este hotel una barbaridad de a%cos, si consigues averiguarlos te dejare pasar, sino te quedaras aqu%c para hacerme compañ%ca'\n", 164, 164, 161, 161);
    printf("'Los a%cos que llevo aqu%c es un n%cmero de 3 d%cgitos. El d%cgito que est%c en el medio es 4 veces mayor que el tercer y %cltimo d%cgito. Adem%cs, el primero es 3 unidades m%cs peque%co que el segundo. ¿Qu%c n%cmero es?'\n", 164, 161, 163, 161, 161, 160, 163, 161, 160, 160, 164, 130, 163);
    printf("A) 131\nB) 152\nC) 342\nD) 141\nE) 736\n");
    printf("(Respuesta n%cmeros)\n", 163);
    preguntamatematicas(141);

    printf("La soluci%cn correcta es 141", 162);

    if (intentos == 3){
        ++i;
        printf("\nHAS PERDIDO UNA VIDA\nTE QUEDAN %d\n\n", 4-i);
        if(4-i == 0){
           printf("GAME OVER");
           exit(1);
            }
        }

    fflush(stdin); //PAUSA
    getchar();

    printf("Enhorabuena conseguiste salir del hotel, pero estas agotado y debes proseguir tu viaje, mucha suerte aventurero!\n");
    printf("\nFIN DEL JUEGO\n");
    printf("Acabaste el juego con %d vidas\n", 4-i);
    return 0;
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
        printf("¡Brillante,solucion correcta!\n");

 }

    else{
        printf("Error,intentalo de nuevo\n");
         contador++;

}
    }while(contador<3&&correcta!=solucion);

    printf("Fallos %i\n",contador);
    return contador;
    }

