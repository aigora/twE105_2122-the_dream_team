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
                break;
            case 3:
                printf("Ha elegido la dificultad dificil\n");
                    char y;

                    float solucion1=1000,solucion2=17,solucion3=3748,solucion4=20 ,solucion5='d' ,solucion6='d' ,solucion7=0154 ;
                    int cont=0;
                        printf("Estas en el momento mas complicado de esta historia,espero que estes preparado...\n");
                        scanf("%c",&y);
                        printf("Se trata de la ultima planta de este horrible hotel del que estas deseando escapar.\n");
                        printf("Antes de entrar a las habitaciones y encontrar la salida,debes resolver esta prueba para comprobar si estas al nivel\n");
                        scanf("%c",&y);
                        printf("Aqui tienes una baraja de 52 cartas, dividas en dos mazos de 26 cartas cada uno.Si comprobaras las cartas que contiene  cada mazo 1000 veces");
                        printf("¿cuántas veces crees que coincidiría el número de cartas rojas de un mazo con el número de cartas   negras del otro mazo?\n");

                        cont=preguntamatematicas(solucion1);

                        printf("Vidas perdidas %i\n",cont);

                            if(cont==3)
                            {
                                printf("Lamento decirte que no has logrado superar ni si quiera esta sencilla prueba,por lo que a continuacion seras arrojado al vacio junto con los demas jugadores que lo han intentado");
                                printf("FIN DEL JUEGO");
                                return 0;
                            }

                                else
                                {
                                    printf("mmm...observo que eres un jugador astuto espero que estes preparado para entrar a la primera habitacion\n");
                                    scanf("%c",&y);
                                }
                                    printf("(Se abre la primera puerta...)");
                                    scanf("%c",&y);
                                    printf("Hay un chico que está sentado en una esquina tirando un dado. Cada vez que recoge el dado, lo mira y murmura algo.\n");
                                    printf("Decides acercarte para escuchar lo que dice y parece repetir lo siguinte una y otra vez...:\n");
                                    printf("Cada vez que sale un 1, dice: 15.Cada vez que sale un 6, dice: 20.Repite esto una y otra vez.\n");
                                    printf("Hasta que de repente sale un 3 y el chico te observa y espera tu respuesta que responderías");

                                    cont=preguntamatematicas(solucion2);
                                    printf("Vidas perdidas %i\n",cont);

                                        if(cont==3)
                                        {
                                            printf("Lamento decirte que no has logrado superar la prueba del chico,por lo que este decide devorarte");
                                            printf("FIN DEL JUEGO");
                                            return 0;
                                        }
                                            else
                                            {
                                                printf("El chico misteriso cambia su cara.Al parecer llevaba 50 años atrapado intentado resolver el acertijo.Este decide enseñarte cual es el siguiente paso para huir. \n");
                                                scanf("%c",&y);
                                            }
                                                printf("Segun el chico has comenzado con buen pie pero dice que no te confies que esta planta es realmente peligrosa...Te entrega un papel.\n");
                                                scanf("%c",&y);
                                                printf("Estas delante de la puerta a la que el chico te habia mandado , pero no puedes entrar esta bloqueada necesita que introduzcas un codigo\n");
                                                printf("observando la puerta ves una serie de marcas '(X-X/X)*X=10' CLAVE:XXXX, el chico te dio un papel con una serie de numeros: 3,4,7,8.(Debes introducir los numeros ordenados para que cumplan la ecucacion ");

                                                cont=preguntamatematicas(solucion3);
                                                printf("Vidas perdidas %i\n",cont);

                                                    if(cont==3)
                                                    {
                                                        printf("Lamento decirte que no has logrado abrir esta puerta,por lo que seras arrojado al vacio junto con los demas jugadores que lo han intentado ");
                                                        printf("FIN DEL JUEGO");
                                                        return 0;
                                                    }
                                                        else
                                                        {
                                                            printf("Enhorabuena, has conseguido acceder a la siguiente sala, ya te queda menos para poder escapar de este terrible hotel");
                                                            scanf("%c", &y);
                                                        }
                                                            printf("Una vez dentro, te fijas en la poca iluminacion que hay y empiezas a buscar un interruptor para poder encender la lámpara de araña que hay colgada del techo\n");
                                                            scanf("%c",&y);
                                                            printf("Minetras caminas, tropiezas con unos objetos que no puedes ver, pero son bastante pesados\n");
                                                            printf("Tras reincorporarte de la caida con ayuda de la pared, sientes una pequeña caja, con un boton\n");
                                                            scanf("%c",&y);
                                                            printf("Tras unos pocos instantes, te das cuenta que has conseguido encontrar el interruptor que necesitabas para encender la luz, pero... hay un problema\n ");
                                                            printf("La luz no se enciende, por lo que decides abrir la caja para saber qué está ocurriendo\n");
                                                            printf("Lo abres y ves que hay unos cables enrrollados y junto a ellos, ves una nota...\n");
                                                            printf("si la luz deseas encender, el acertijo deberas resolver.\n");
                                                            printf("Has colocado las 52 cartas de una baraja mas un comodin boca abajo en una mesa. Luego empiezas a darles la vuelta una a una. Si no puedes dar la vuelta a la misma carta dos veces ¿Que probabilidades tienes de dar la vuelta a los cuatro ases antes de encontrar el comodin? (introduce la solucion en porcentaje)");

                                                            cont=preguntamatematicas(solucion4);
                                                            printf("Vidas perdidas %i\n",cont);

                                                                if(cont==3)
                                                                {
                                                                    printf("No has conseguido encender la luz, por lo que los fantasmas del hotel no se han sentido amenazados y te han atacado");
                                                                    printf("FIN DEL JUEGO");
                                                                    return 0;
                                                                }
                                                                    else
                                                                    {
                                                                        printf("Por fin se hace la luz y consigues ver claramente la habitación.\n");
                                                                        scanf("%c",&y);
                                                                    }
                                                                        printf("Te fijas con lo que tropezaste antes, ves que son unas cajas cuadradas con dibujos en todas sus caras");
                                                                        printf("Te empiezas a acercar para observarlas mejor, pero empieza a sonar una cinta y te asustas.\n");
                                                                        printf("(Si quieres salir de la habitacion, tienes que buscar la llave en una de las cajas, pero cuidado, tres de ellas estan llenas de avispas y solo una, con distinto diseño, tiene la llave)\n");
                                                                        printf("Entras en panico, eres alergico a las avispas y no tienes tus medicamentos contigo, por lo que no te puedes permitir fallar.\n");
                                                                        //115

                                                                        cont=preguntamatematicas(solucion5);
                                                                        printf("Vidas perdidas %i\n",cont);

                                                                            if(cont==3)
                                                                            {
                                                                                printf("Te has equivocado de caja, las avispas te estan siguiendo para atacarte y no puedes acer nada para protegerte");
                                                                                printf("FIN DEL JUEGO");
                                                                                return 0;
                                                                            }
                                                                                else
                                                                                {
                                                                                    printf("Consigues acertar la caja distinta y obtener la llave con la que abres la puerta.\n");
                                                                                    scanf("%c",&y);
                                                                                }
                                                                                    printf("Pasas la puerta y ves unas escaleras con la señal EXIT, no te lo puedes creer, has encontrado la salida.\n");
                                                                                    scanf("%c",&y);
                                                                                    printf("Bajas las escaleras lo mas rapido que puedes para que, por fin puedas dejar atras toda la locura...\n");
                                                                                    printf("Pero... esto no se ha acabado\n");
                                                                                    scanf("%c",&y);
                                                                                    printf("Al llegar a la planta baja, te fijas que hay un grupo de zombies discutiendo sobre un tema de dinero.\n ");
                                                                                    printf("se te acercan y te dicen que si les ayudas a resolver el problema, te dejarán salir del hotel\n");
                                                                                    //066

                                                                                    cont=preguntamatematicas(solucion6);
                                                                                    printf("Vidas perdidas %i\n",cont);

                                                                                        if(cont==3)
                                                                                        {
                                                                                            printf("No consigues resolver el acertijo y ayudarles, por lo que se enfadan contigo y se comen tu cerebro.\n");
                                                                                            printf("FIN DEL JUEGO");
                                                                                            return 0;
                                                                                        }
                                                                                            else
                                                                                            {
                                                                                                printf("Has conseguido ayudarles, estan tan contentos que te ayudan a llegar al coche aparcado en el jardin para que puedas escapar de tal lugar funebre.\n");
                                                                                                scanf("%c",&y);
                                                                                            }
                                                                                                printf("Llegas al coche cansado, con ganas de volver a casa y saludar a tu familia tras tanto tiempo encerrado y asustado, pero te encuentras con el ultimo inconveniente...");
                                                                                                printf("No te lo puedes creer, hay un codigo en la puerta del coche que tienes que descifrar para poder abrir la puerta y encender el motor.\n");
                                                                                                //81 caja pandora

                                                                                                cont=preguntamatematicas(solucion7);
                                                                                                printf("Vidas perdidas %i\n",cont);

                                                                                                    if(cont==3)
                                                                                                    {
                                                                                                        printf("Pese a tus intentos, has fallado el codigo, y por triste que parezca, tendras que quedarte en este hotel hasta el fin de tus tiempos.\n");
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
		}else{
			printf("Usuario valido\n");
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


