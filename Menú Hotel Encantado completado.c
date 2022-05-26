#include <stdio.h>
#define maxPerfiles 100
struct usuario{
    char nombre[100];
    char contrasena[100];
};

int FicheroUsuarios(struct usuario info[], int *nUsuarios);
void IniciarSesion(int *nUsuarios,struct usuario info[]);
void CrearUsuarios(int *nUsuarios,struct usuario info[]);
int preguntatest(char solucion);
int preguntamatematicas(float solucion);

int main ()
{
    printf("Bienvenido al juego del Hotel Encantado\nEste juego consiste en abandonar el hotel encantado resolviendo diversos acertijos\n¡Disfruta!");
    printf("Selecciona una de las opciones\n");

    int sesion; //variable con la que elegir si se desea iniciar sesion o hacer una sesion nueva
    struct usuario info[maxPerfiles];
    int numeroUsuarios; //numero de usuarios registrados en el fichero

    int menu; //"menu" es la variable que guarda la opcion que escojes
    int dificultad; //"dificultad" es la variable que engloba la difucltad del juego
    printf("1)Jugar\n2)Instrucciones\n3)Salir\n");
    scanf("%d", &menu); //te guarda la opción del menu principal escogida
    switch (menu)
 {
 	case 1:
 	    printf("1)Iniciar sesion\n2)Crear sesion\n3)Atras\n");
 	    scanf("%d", &sesion);
 	    if(sesion==1){
                FicheroUsuarios(info, &numeroUsuarios);
                IniciarSesion(&numeroUsuarios, info);


 	    }
 	    else if (sesion==2){
                FicheroUsuarios(info, &numeroUsuarios);
                CrearUsuarios(&numeroUsuarios, info);

 	    }
 	    else {
            return menu;
 	    }
        //printf("Bienvenido %s", info[1].nombre);
 		printf("Elige la dificultad del juego\n");
 		printf("1)Facil\n2)Medio\n3)Dificil\n4)Salir\n");
        scanf("%d", &dificultad);
        switch (dificultad)
            {
            case 1:
                printf("Ha elegido la dificultad facil\n");
                break;
                printf("Ha elegido la dificultad facil");
                     printf("Ha elegido la dificultad facil\n");
              char x;
              char decision1;
              char decision2;
              int vidas=0;
              char solucion1f= 'A';
              char solucion2f= 'A';
              float solucion3f= '06:05';
              float solucion4f= '6';
              float solucion5f= 'D';


     printf("Bienvenido aventurero!\n");

    printf("Ya son las 12 de una noche de lluvia, avanzas con tu coche por una carretera que parece no tener fin\n");
        scanf("%c",&x);
    printf("comienza a haber tormenta, deberías buscar un techo donde pasar la noche\n");
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
					printf("La tormenta empeora, deberías encontrar cobijo para la noche, estas agotado y conducir en estas condiciones es peligroso\n");
				}
        else{
                printf("Introduzca una opción válida(A o B)\n");
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
        printf("Ignoran tu presencia y continuan su discusión\n");
                scanf("%c",&x);
        printf("Aprecias que discuten sobre quien es el mejor peluquero de los dos\n");
                scanf("%c",&x);
        printf("Uno de los extraños dice: 'eh tu, juzga nuestros peinados y decide quien es el mejor'\n");
        //imagen peluqueros, acertijo 51
        printf("A) Extraño A\nB) Extraño B\n");
          vidas = preguntatest(solucion1f);

         if(vidas==3){
        printf("No has conseguido superar la prueba, estas destinado a ser uno de ellos");
        printf("FIN DEL JUEGO");
    }
    else{
        printf("El extraño A te respode:'hahaha, sabía que eras listo'\n");
        scanf("%c",&x);
    }






        printf("Finalmente, te dan las llaves de tu habitación\n");
                scanf("%c",&x);
        printf("Estas agotado, te tumbas en la cama\n");
                scanf("%c",&x);
        printf("Los extraños siguen con su interminable discusión y no te dejan pegar ojo\n");
                scanf("%c",&x);
        printf("Cansado de no poder dormir, te decides a pedirles silencio\n");
                scanf("%c",&x);
        printf("Abres la puerta, te quedas en shock al ver que su puerta ya no daba al pasillo por el que habías llegado\n");
                scanf("%c",&x);
        printf("La puerta se cierra tras de tí\n");
                scanf("%c",&x);
        printf("Contemplas la sala, esta oscura. La única luz la proporciona una bombilla que iluminan\n tenuemente cuatro sombreros de copa dispuestos en una mesa\n");
                scanf("%c",&x);
        printf("Consigues distinguir una figura al fondo de la sala\n");
                scanf("%c",&x);
        printf("Se te ponen los pelos de punta, ya es suficiente, quieres abandonar el hotel\n");
                scanf("%c",&x);
        printf("Antes de que puedas decir nada, la misteriosa figura te dice 'Estas cuatro chisteras tienen\n la misma altura. Pero la longitud de sus alas es diferente. Es decir: las chisteras son igual de altas, pero cada una tiene un ancho distinto.'\n");
                scanf("%c",&x);
        printf("Una de las cuatro chisteras tiene un ala y una copa de la misma medida. ¿Sabes cuál es?, si respondes correctamente te dejare pasar\n");
        //foto acertijo 003
        printf("A) Sombrero A 8\nB)Sombrero B\nC) Sombrero C\nD) Sombrero D\n");

          vidas = preguntatest(solucion2f);

            if(vidas==3){
        printf("El hombre misterioso no te deja abandonar la sala, te quedas encerrado en la oscuridad");
        printf("FIN DEL JUEGO");
    }
    else{
        printf("'puedes continuar'\n");
        scanf("%c",&x);
    }


    printf("bajas las escaleras tan rápido como puedes\n");
                scanf("%c",&x);
    printf("Acabas de llegar a la sala de estar del hotel\n");
                scanf("%c",&x);
    printf("Una vez más, las puertas están bloqueadas\n");
                scanf("%c",&x);
    printf("Notas una presencia, es una anciana\n");
                scanf("%c",&x);
    printf("Te sientes aliviado de que no sea una amenaza\n");
                scanf("%c",&x);
    printf("Al acercate notas algo extraño en su rostro, no tiene ojos\n");
                scanf("%c",&x);
    printf("La anciana pregunta'¿qué hora es?, si aciertas te dejare ir, si no me quedaré con tus ojos'\n");
                scanf("%c",&x);
    printf("Consigues encontrar un reloj,  dicho reloj de pared se cayó al suelo y todos los números se desprendieron\n");
                scanf("%c",&x);
    // imagen reloj
    printf("(escriba la hora de la siguiente forma horas:minutos, ejemplo:'12:15')\n");

    vidas=preguntamatematicas(solucion3f);

    if(vidas==3){
        printf("La anciana se queda tus ojos\n");
        printf("FIN DEL JUEGO");
    }
    else{
        printf("'muchas gracias muchacho, puedes continuar'\n");
        scanf("%c",&x);
    }



    printf("Llegas a la recepción y sales del hotel\n");
                scanf("%c",&x);
    printf("Entras del hotel y te tomas un pequeño respiro tratando de asimilar todo lo ocurrido\n");
                scanf("%c",&x);
    printf("Vas a arrancar el coche\n");
                scanf("%c",&x);
    printf("No puede ser...\n");
                scanf("%c",&x);
    printf("No encuentras las llaves\n");
                scanf("%c",&x);
    printf("Escuchas una voz juguetona que dice: 'tenemos tus llaveeess'\n");
                scanf("%c",&x);
    printf("histérico, sales del coche, no estas seguro de donde venía la voz\n");
                scanf("%c",&x);
    printf("Decides:\n A)explorar el jardín trasero\n B)Buscar por el jardín delantero\n");

        scanf("%c", &decision2);
        if(decision2=='A'){
					printf("Avanzas por el lateral del hotel hasta llegar a un depósito de agua\n");
                scanf("%c",&x);
					printf("Un hombre robusto te esperaba, aprecias que se transparenta\n");
                scanf("%c",&x);
					printf("Es... UN FANTASMA???\n");
                scanf("%c",&x);
                    printf("El fantasma comenta: 'me ahogué en este mismo depósito hace más de 100 años, si consigo arreglarlo podre alcanzar la vida eterna'\n");
                scanf("%c",&x);
                    printf("'si me ayudas te daré tus llaves'\n");
                scanf("%c",&x);
                    printf("Aceptas su propuesta\n");
                scanf("%c",&x);
                    printf("El fantasma explica:'Este depósito de agua tiene 2,5m de profundidad y se llena de agua durante ocho horas al día, a partir de las 9:00. El nivel del agua sube 60cm durante esas horas'\n");
                scanf("%c",&x);
                    printf("'Sin embargo, parece que hay una fuga y se pierde agua durante la noche, porque a la mañana siguiente el nivel del agua ha bajado 20cm'\n");
                scanf("%c",&x);
                    printf("'Si el nivel del agua sigue subiendo 40cm al día, ¿cuántos días tardará en desbordarse el depósito?'\n");

                    vidas=preguntamatematicas(solucion4f);

                    if(vidas==3){
        printf("El fantasma te tira al depósito y tomas su lugar\n");
        printf("FIN DEL JUEGO");
    }
    else{
        printf("'gracias, toma tus llaves, ya no hay nada que me ate a este mundo,'\n");
        scanf("%c",&x);
    }
				}
        else if(decision2=='B'){printf("\n");
					printf("Ves una silueta cerca de los árboles\n");
                scanf("%c",&x);
					printf("te aproximas, es el jardinero, está podando los arbustos\n");
                scanf("%c",&x);
					printf("Al notar tu presencia se gira en tu dirección\n");
                scanf("%c",&x);
					printf("Es un esqueleto\n");
                scanf("%c",&x);
					printf("Despues de todo no te sorprende\n");
                scanf("%c",&x);
					printf("Te comenta que si le ayudas a hacer su trabajo te entregará las llaves\n");
                scanf("%c",&x);
					printf("Aceptas\n");
                scanf("%c",&x);
					printf("'¿Qué dos árboles están más separados entre sí?'\n");
                scanf("%c",&x);
					printf("A) B y \nB)C y E \nC) B y E \nD) A y E  \n");

					vidas = preguntatest(solucion5f);

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
                printf("Introduzca una opción válida(A o B)\n");
                }
        printf("Arrancas tu coche y consigues escapar\n");
        scanf("%c",&x);
        printf("Conduces agotado\n");
        scanf("%c",&x);
        printf("comienza a haber tormenta, deberías buscar un techo donde pasar la noche\n");
        scanf("%c",&x);
        printf("FIN DEL JUEGO");



			break;

            case 2:
                printf("Ha elegido la dificultad media\n");
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

                break;
            case 3:
                printf("Ha elegido la dificultad dificil\n");
                    char y;

                    float solucion1=1000,solucion2=17,solucion3=3748,solucion4=20 ,solucion5=8 ,solucion6='d' ,solucion7=50;
                    int cont=0;
                        printf("Estas en el momento m%cs complicado de esta historia,espero que estes preparado...\n",160);
                        scanf("%c",&y);
                        printf("Se trata de la %cltima planta de este horrible hotel del que estas deseando escapar.\n",163);
                        printf("Antes de entrar a las habitaciones y encontrar la salida,debes resolver esta prueba para comprobar si estas al nivel\n");
                        scanf("%c",&y);
                        printf("Aqu%c tienes una baraja de 52 cartas, divida en dos mazos de 26 cartas cada uno.Si comprobar%cs las cartas que contiene  cada mazo 1000 veces\n",161,160);
                        printf("¿cu%cntas veces crees que coincidir%ca el n%cmero de cartas rojas de un mazo con el n%cmero de cartas   negras del otro mazo?\n",160,161,163,163);

                        cont=preguntamatematicas(solucion1);

                        printf("Vidas perdidas %i\n",cont);

                            if(cont==3)
                            {   printf("Explicaci%n:En una baraja de 52 cartas, hay 26 de cada color. Si formas mazos al azar con esa baraja, el n%mero de cartas rojas del mazo A es igual a 26 cartas menos el n%mero de cartas negras del mazo A. En el mazo B se da la situaci%cn inversa.\
                                       No importa c%mo se reparta la baraja, habr%c tantas cartas rojas en el mazo A como cartas negras haya en el mazo B, y viceversa",162,163,163,162,162,160);
                                printf("Lamento decirte que no has logrado superar ni si quiera esta sencilla prueba,por lo que a continuaci%cn seras arrojado al vac%co junto con los demas jugadores que lo han intentado",162,161);
                                printf("FIN DEL JUEGO");
                                return 0;
                            }

                                else
                                {
                                    printf("mmm...observo que eres un jugador astuto espero que estes preparado para entrar a la primera habitaci%cn\n",162);
                                    scanf("%c",&y);
                                }
                                    printf("(Se abre la primera puerta...)");
                                    scanf("%c",&y);
                                    printf("Hay un chico que est%c sentado en una esquina tirando un dado. Cada vez que recoge el dado, lo mira y murmura algo.\n",160);
                                    printf("Decides acercarte para escuchar lo que dice y parece repetir lo siguiente una y otra vez...:\n");
                                    printf("Cada vez que sale un 1, dice: 15.Cada vez que sale un 6, dice: 20.Repite esto una y otra vez.\n");
                                    printf("Hasta que de repente sale un 3 y el chico te observa y espera tu respuesta que responder%cas",161);

                                    cont=preguntamatematicas(solucion2);
                                    printf("Vidas perdidas %i\n",cont);

                                        if(cont==3)
                                        {
                                            printf("Lamento decirte que no has logrado superar la prueba del chico,por lo que este decide devorarte");
                                            printf("Explicaci%cn:El chico está contando los puntos visibles del dado. La %cnica cara que no ve es la que est% hacia abajo.\
                                             Las caras superior e inferior de un dado siempre suman siete, por lo que es f%ccil calcular el total de las cinco caras visibles al tirar un dado.",162,163,160,160);
                                            printf("FIN DEL JUEGO");
                                            return 0;
                                        }
                                            else
                                            {
                                                printf("El chico misteriso cambia su cara.Al parecer llevaba 50 a%cos atrapado intentado resolver el acertijo.Este decide ense%carte cual es el siguiente paso para huir. \n",164,164);
                                                scanf("%c",&y);
                                            }
                                                printf("Seg%cn el chico has comenzado con buen pie ,pero dice que no te confies que esta planta es realmente peligrosa...Te entrega un papel.\n",163);
                                                scanf("%c",&y);
                                                printf("Est%cs delante de la puerta a la que el chico te hab%ca mandado , pero no puedes entrar esta bloqueada necesita que introduzcas un c%cdigo\n",160,161,162);
                                                printf("observando la puerta ves una serie de marcas '(x-x/x)*x=10' CLAVE:xxxx, el chico te di%c un papel con una serie de n%cmeros: 3,4,7,8.(Debes introducir los n%cmeros ordenados para que cumplan la ecuaci%cn ",162,163,163,162);

                                                cont=preguntamatematicas(solucion3);
                                                printf("Vidas perdidas %i\n",cont);

                                                if(cont==3)
                                                    {
                                                        printf("Lamento decirte que no has logrado abrir esta puerta,por lo que seras arrojado al vac%co junto con los dem%cs jugadores que lo han intentado ",161,160);
                                                        printf("Explicaci%cn:Para resolver este problema hay que pensar en fracciones. Si no te percatas desde el principio, encontrar la solución puede ser muy dif%ccil.",162,161);
                                                        printf("FIN DEL JUEGO");
                                                        return 0;
                                                    }
                                                        else
                                                        {
                                                            printf("Enhorabuena, has conseguido acceder a la siguiente sala, ya te queda menos para poder escapar de este terrible hotel\n");
                                                            scanf("%c", &y);
                                                        }
                                                            printf("Una vez dentro, te fijas en la poca iluminaci%cn que hay y empiezas a buscar un interruptor para poder encender la l%cmpara de ara%ca que hay colgada del techo\n",162,160,164);
                                                            scanf("%c",&y);
                                                            printf("Mientras caminas, tropiezas con unos objetos que no puedes ver, pero son bastante pesados\n");
                                                            printf("Tras reincorporarte de la ca%cda con ayuda de la pared, sientes una peque%ca caja, con un bot%cn\n",161,164,162);
                                                            scanf("%c",&y);
                                                            printf("Tras unos pocos instantes, te das cuenta que has conseguido encontrar el interruptor que necesitabas para encender la luz, pero... hay un problema\n ");
                                                            printf("La luz no se enciende, por lo que decides abrir la caja para saber qu%c est%c ocurriendo\n",130,160);
                                                            printf("Lo abres y ves que hay unos cables enrrollados y junto a ellos, ves una nota...\n");
                                                            printf("si la luz deseas encender, el acertijo deberas resolver.\n");
                                                            printf("Has colocado las 52 cartas de una baraja mas un comod%cn boca abajo en una mesa. Luego empiezas a darles la vuelta una a una. Si no puedes dar la vuelta a la misma carta dos veces ¿Que probabilidades tienes de dar la vuelta a los cuatro ases antes de encontrar el comod%cn? (introduce la soluci%cn en porcentaje)\n",161,161,162);

                                                            cont=preguntamatematicas(solucion4);
                                                            printf("Vidas perdidas %i\n",cont);

                                                                if(cont==3)
                                                                {
                                                                    printf("No has conseguido encender la luz, por lo que los fantasmas del hotel se han sentido amenazados y te han atacado.\n");
                                                                    printf("Explicaci%n: Tienes cinco cartas (los ases y el comod%cn) a las que dar la vuelta y una de ellas tiene que ser la %cltima. As% que la soluci%cn es una entre cinco, o lo que es lo mismo: el 20 por ciento.\n",162,161,163,161,162);
                                                                    printf("FIN DEL JUEGO\n");
                                                                    return 0;
                                                                }
                                                                    else
                                                                    {
                                                                        printf("CORRECTO! MUY BIEN AVENTURERO!\n");
                                                                        printf("Por fin se hace la luz y consigues ver claramente la habitaci%cn.",162);
                                                                        scanf("%c",&y);
                                                                    }
                                                                        printf("Te fijas con lo que tropezaste antes, ves que es una caja de la que empieza a salir un fantasma.\n");
                                                                        printf("Empieza a hablarte, comentandote que el medico le ha preescrito unas medicinas, pero no sabe en que orden poner las pastillas y cu%cntas debe enumerar para no equivocarse.\n",160);
                                                                        printf("Muy agobiado te pide ayuda y te dice que si le consigues ayudar, una llave te dar%c para poder salir del cuarto.\n",160);
                                                                        printf("Acertijo: El m%cdico le ha prescrito 10 pastillas a un fantasma, el cual debe tomarse una al d%ca a partir de hoy, y en un orden espec%cfico ¿A cu%cntas debe poner n%cmero para no equivocarse?\n",130,161,161,160,163);

                                                                        cont=preguntamatematicas(solucion5);
                                                                        printf("Vidas perdidas %i\n",cont);

                                                                            if(cont==3)
                                                                            {
                                                                                printf("Te has equivocado!! El fantasma se ha enfadado y te ha encerrado en la caja.\n");
                                                                                printf("Explicaci%cn: Debe tomar la pastilla de hoy, y luego numerar las que le toque tomar desde el d%ca 2 al 9. La del d%ca 10 no necesita numerarla porque sera la %cnica que no estara numerada, as%c que no puede confundirse con otra.\n",162,161,161,163,161);
                                                                                printf("FIN DEL JUEGO");
                                                                                return 0;
                                                                            }
                                                                                else
                                                                                {
                                                                                    printf("Consigues acertar obtener la llave con la que abres la puerta.\n");
                                                                                    scanf("%c",&y);
                                                                                }
                                                                                    printf("Pasas la puerta y ves unas escaleras con la señal EXIT, no te lo puedes creer, has encontrado la salida.\n");
                                                                                    printf("Bajas las escaleras lo mas r%cpido que puedes para que, por fin puedas dejar atr%cs toda la locura.\n",160,160);
                                                                                    printf("Pero... esto no se ha acabado\n");
                                                                                    printf("Al llegar a la planta baja, te fijas que hay un grupo de zombies discutiendo sobre un tema de dinero.\n ");
                                                                                    printf("se te acercan y te dicen que si les ayudas a resolver el problema, te dejar%cn salir del hotel\n",160);
                                                                                    printf("Acertijo: Cada una de estas personas ha pedido dinero prestado a una de las otras cinco, y a su vez ha prestado dinero a otra persona. Si B pidi%c dinero a A, E no presto a A, y C presto a D ¿Qui%cn fue el que le presto dinero a A?\n",162,130);

                                                                                    cont=preguntatest(solucion6);
                                                                                    printf("Vidas perdidas %i\n",cont);

                                                                                        if(cont==3)
                                                                                        {
                                                                                            printf("No consigues resolver el acertijo y ayudarles, por lo que se enfadan contigo y se comen tu cerebro.\n");
                                                                                            printf("FIN DEL JUEGO");
                                                                                            return 0;
                                                                                        }
                                                                                            else
                                                                                            {
                                                                                                printf("Has conseguido ayudarles, estan tan contentos que te ayudan a llegar al coche aparcado en el jard%cn para que puedas escapar de tal lugar funebre.\n",161);
                                                                                                scanf("%c",&y);
                                                                                            }
                                                                                                printf("Llegas al jard%cn de enfrente cansado, con ganas de volver a casa y saludar a tu familia tras tanto tiempo encerrado y asustado, pero te encuentras con el %cltimo inconveniente...",161,163);
                                                                                                printf("No te lo puedes creer, tu coche ya no est%c, ya no tienes fuerzas de nada y del disgusto, te pones a llorar.\n",160);
                                                                                                printf("Unos granjeros se te acercan y empiezan a hablar contigo, les comentas tu situaci%cn y se ofreces a llevarte a casa si les ayudas a resolver un problema.\n",162);
                                                                                                printf("Acertijo: Alfred y Roland deben arar un terreno de 4 hect%creas por el que se pagan 100€. Teniendo en cuenta que dividen el terreno por la mitad para trabajar cada uno en un lado, que Alfred trabaja a un ritmo de 20 minutos por hect%crea, y que Roland tarda 40 minutos, pero lo hace tres veces m%cs r%cpido que Alfred. ¿Cu%cnto dinero ganar%c Roland?\n",160,160,160,160,160,160);

                                                                                                cont=preguntamatematicas(solucion7);
                                                                                                printf("Vidas perdidas %i\n",cont);

                                                                                                    if(cont==3)
                                                                                                    {
                                                                                                        printf("Pese a tus intentos, has fallado y los granjeros se han enfadado y te han dejado tirado, por lo que tienes que volver al hotel a refugiarte lo que supone tu muerte.\n");
                                                                                                        printf("Explicaci%cn: Al dividir el terreno por la mitad y ocuparse cada uno de una parte, ambos cobrar%cn la mitad de los 100%c que cuesta hacer el trabajo, independientemente de lo que tarden en hacer su parte.\n",162,160,36);
                                                                                                        printf("FIN DEL JUEGO");
                                                                                                        return 0;
                                                                                                    }
                                                                                                        else
                                                                                                        {
                                                                                                            printf("ENHORABUENA!! HAS CONSEGUIDO SALIR Y YA ESTAS DE CAMINO A TU CASA, GENIAL TRABAJO, ERES TODO UN PROFESIONAL DE LAS AVENTURAS.\n");
                                                                                                            printf("Esperamos verte de nuevo!!\n");
                                                                                                            //introducir ventana con video de creditos
                                                                                                            scanf("%c",&y);
                                                                                                        }

                break;
            case 4:
                printf("Ha elegido salir.\n¡Vuelva pronto!\n\n");
                return main();//esta acción realiza una vuelta al menú inicial
                break;
            }
        break;

 	case 2:
	    printf("Estas son las intrucciones:\n\n");
	    //Aqui se adjuntaran las instrucciones
	    return main();
	    break;
	case 3:
	    printf("Vuelva pronto \n");
        return (0);
        break;
 }
    return 0;
}



int FicheroUsuarios(struct usuario info[], int *nUsuarios){
    FILE *fichUsuarios;
    //Abrimos fichero en modo lectura
    fichUsuarios = fopen ("UsuariosContraseñas.txt", "r");
    //Control de existencia
    if(fichUsuarios==NULL){
		printf("No se ha podido encontrar el fichero\n");
		return 0;
	}
	//Bucle para leer usuarios y saber cuantos hay
	int i=0;
	while (fscanf(fichUsuarios, "%s %s", info[i].nombre, info[i].contrasena) != EOF)
        i++;
    *nUsuarios=i;

    //rewind(fichUsuarios);
    fclose(fichUsuarios); //Cerramos fichero
}


void IniciarSesion(int *nUsuarios,struct usuario info[]){
	int i,coincide=0;
	char Usuario1[200];
	char Contrasena1[200];

	//Pedir los datos de iniciar sesion al usuario
	do{
		printf("Introduzca  nombre de usuario:\n");
		fflush(stdin);
		scanf("%s", Usuario1);
		printf("Introduzca clave:\n");
		fflush(stdin);
		scanf("%s",Contrasena1);

		//Tenemos que ver que efectivamente existe ese usuario y contraseña.
		for(i=0;i<*nUsuarios;i++){
			if(strcmp(Usuario1,info[i].nombre)==0 && strcmp(Contrasena1,info[i].contrasena)==0){
				coincide++;
			}
		}

		if(coincide==0){
			printf("Usuario o clave incorrectos.\n");
            printf("Enter para volverlo a intentar");
		}else{
			printf("Usuario valido\n");
			printf("Enter para continuar");
		}
			fflush(stdin); //PAUSA
            getchar();

	}while(coincide==0);//Bucle hasta que exista un usuario que coincida


}

void CrearUsuarios(int *nUsuarios,struct usuario info[]){

	FILE *fichUsuarios;
	int i, coincide=0;

	char usuarioNuevo[200];
	char contrasenaNueva[200];

	//Comprobación usuario no existe anteriormente
	do{
		printf("Introduzca  nombre de usuario:\n");
		fflush(stdin);
		scanf("%s",usuarioNuevo);

		for(i=0;i<*nUsuarios;i++){
			if(strcmp(usuarioNuevo,info[i].nombre)==0){
				coincide++;
			}
		}

		if(coincide==1){
			printf("Ya existe ese usuario.Prueba de nuevo\n");

			fflush(stdin); //PAUSA
            getchar();
		}else{
			printf("Usuario valido\n");
			strcpy(info[*nUsuarios].nombre,usuarioNuevo);

		}

	}while(coincide==1);

	printf("Introduzca clave:\n",164);
	fflush(stdin);
	scanf("%s",info[i].contrasena);

    //Abrimos el fichero en modo añadir
	fichUsuarios = fopen("UsuariosContraseñas.txt","a");

    fprintf(fichUsuarios,"%s\n%s\n",info[i].nombre, info[i].contrasena);

	fclose(fichUsuarios);
	printf("Enter para continuar");
	fflush(stdin); //PAUSA
    getchar();
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
         return contador;}
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
    return contador;}


