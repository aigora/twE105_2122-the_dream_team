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
                printf("Ha elegido la dificultad facil");
                break;
            case 2:
                printf("Ha elegido la dificultad media");
                break;
            case 3:
                printf("Ha elegido la dificultad dificil");
                    char x;
                    float solucion1=1000,solucion2=17,solucion3=3748,solucion4='c' ,solucion5='d' ,solucion6='d' ,solucion7=0154 ;
                    int cont=0;
                        printf("Estas en el momento mas complicado de esta historia,espero que estes preparado...\n");
                        scanf("%c",&x);
                        printf("Se trata de la ultima planta de este horrible hotel del que estas deseando escapar.\n");
                        printf("Antes de entrar a las habitaciones y encontrar la salida,debes resolver esta prueba para comprobar si estas al nivel\n");
                        scanf("%c",&x);
                        printf("Aqui tienes una baraja de 52 cartas, dividas en dos mazos de 26 cartas cada uno.Si comprobaras las cartas que contiene  cada mazo 1000 veces");
                        printf("¿cuántas veces crees que coincidiría el número de cartas rojas de un mazo con el número de cartas   negras del otro mazo?\n");

                        cont=preguntamatematicas(solucion1);

                        printf("Vidas perdidas %i\n",cont);

                            if(cont==3)
                            {
                                printf("Lamento decirte que no has logrado superar ni si quiera esta sencilla prueba,por lo que a continuacion seras arrojado al vacio junto con los demas jugadores que lo han intentado");
                                printf("FIN DEL JUEGO");
                            }

                                else
                                {
                                    printf("mmm...observo que eres un jugador astuto espero que estes preparado para entrar a la primera habitacion\n");
                                    scanf("%c",&x);
                                }
                                    printf("(Se abre la primera puerta...)");
                                    scanf("%c",&x);
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
                                        }
                                            else
                                            {
                                                printf("El chico misteriso cambia su cara.Al parecer llevaba 50 años atrapado intentado resolver el acertijo.Este decide enseñarte cual es el siguiente paso para huir. \n");
                                                scanf("%c",&x);
                                            }
                                                printf("Segun el chico has comenzado con buen pie pero dice que no te confies que esta planta es realmente peligrosa...Te entrega un papel.\n");
                                                scanf("%c",&x);
                                                printf("Estas delante de la puerta a la que el chico te habia mandado , pero no puedes entrar esta bloqueada necesita que introduzcas un codigo\n");
                                                printf("observando la puerta ves una serie de marcas '(X-X/X)*X=10' CLAVE:XXXX, el chico te dio un papel con una serie de numeros: 3,4,7,8.(Debes introducir los numeros ordenados para que cumplan la ecucacion ");

                                                cont=preguntamatematicas(solucion3);
                                                printf("Vidas perdidas %i\n",cont);

                                                    if(cont==3)
                                                    {
                                                        printf("Lamento decirte que no has logrado abrir esta puerta,por lo que seras arrojado al vacio junto con los demas jugadores que lo han intentado ");
                                                        printf("FIN DEL JUEGO");
                                                    }
                                                        else
                                                        {
                                                            printf("Enhorabuena, has conseguido acceder a la siguiente sala, ya te queda menos para poder escapar de este terrible hotel")
                                                            scanf("%c", &x);
                                                        }
                                                            printf("Una vez dentro, te fijas en la poca iluminacion que hay y empiezas a buscar un interruptor para poder encender la lámpara de araña que hay colgada del techo\n");
                                                            scanf("%c",&x);
                                                            printf("Minetras caminas, tropiezas con unos objetos que no puedes ver, pero son bastante pesados\n");
                                                            printf("Tras reincorporarte de la caida con ayuda de la pared, sientes una pequeña caja, con un boton\n");
                                                            scanf("%c",&x);
                                                            printf("Tras unos pocos instantes, te das cuenta que has conseguido encontrar el interruptor que necesitabas para encender la luz, pero... hay un problema\n ");
                                                            printf("La luz no se enciende, por lo que decides abrir la caja para saber qué está ocurriendo\n");
                                                            printf("Lo abres y ves que hay unos cables enrrollados y junto a ellos, ves una nota...\n");
                                                            printf("si la luz deseas encender, el cable que estirado tenga un nudo deberás reconocer.\n");
                                                            //108

                                                            cont=preguntamatematicas(solucion4);
                                                            printf("Vidas perdidas %i\n",cont);

                                                                if(cont==3)
                                                                {
                                                                    printf("No has conseguido encender la luz, por lo que los fantasmas del hotel no se han sentido amenazados y te han atacado");
                                                                    printf("FIN DEL JUEGO");
                                                                }
                                                                    else
                                                                    {
                                                                        printf("Por fin se hace la luz y consigues ver claramente la habitación.\n");
                                                                        scanf("%c",&x);
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
                                                                            }
                                                                                else
                                                                                {
                                                                                    printf("Consigues acertar la caja distinta y obtener la llave con la que abres la puerta.\n");
                                                                                    scanf("%c",&x);
                                                                                }
                                                                                    printf("Pasas la puerta y ves unas escaleras con la señal EXIT, no te lo puedes creer, has encontrado la salida.\n");
                                                                                    scanf("%c",&x);
                                                                                    printf("Bajas las escaleras lo mas rapido que puedes para que, por fin puedas dejar atras toda la locura...\n");
                                                                                    printf("Pero... esto no se ha acabado\n");
                                                                                    scanf("%c",&x);
                                                                                    printf("Al llegar a la planta baja, te fijas que hay un grupo de zombies discutiendo sobre un tema de dinero.\n ");
                                                                                    printf("se te acercan y te dicen que si les ayudas a resolver el problema, te dejarán salir del hotel\n");
                                                                                    //066

                                                                                    cont=preguntamatematicas(solucion6);
                                                                                    printf("Vidas perdidas %i\n",cont);

                                                                                        if(cont==3)
                                                                                        {
                                                                                            printf("No consigues resolver el acertijo y ayudarles, por lo que se enfadan contigo y se comen tu cerebro.\n");
                                                                                            printf("FIN DEL JUEGO");
                                                                                        }
                                                                                            else
                                                                                            {
                                                                                                printf("Has conseguido ayudarles, estan tan contentos que te ayudan a llegar al coche aparcado en el jardin para que puedas escapar de tal lugar funebre.\n");
                                                                                                scanf("%c",&x);
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
                                                                                                    }
                                                                                                        else
                                                                                                        {
                                                                                                            printf("ENHORABUENA!! HAS CONSEGUIDO SALIR Y YA ESTAS DE CAMINO A TU CASA, GENIAL TRABAJO, ERES TODO UN PROFESIONAL DE LAS AVENTURAS.\n");
                                                                                                            printf("Esperamos verte de nuevo!!\n");
                                                                                                            //introducir ventana con video de creditos
                                                                                                            scanf("%c",&x);
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
			system("PAUSE");

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
			system("PAUSE");
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
	system("PAUSE");
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

