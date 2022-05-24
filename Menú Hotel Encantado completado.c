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
    float solucion1=1000,solucion2=17,solucion3=3748;
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
    if(cont==3){
        printf("Lamento decirte que no has logrado superar ni si quiera esta sencilla prueba,por lo que a continuacion seras arrojado al vacio junto con los demas jugadores que lo han intentado");
        printf("FIN DEL JUEGO");
    }
    else{
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
    if(cont==3){
        printf("Lamento decirte que no has logrado superar la prueba del chico,por lo que este decide devorarte");
        printf("FIN DEL JUEGO");
    }
    else{
        printf("El chico misteriso cambia su cara.Al parecer llevaba 50 años atrapado intentado resolver el acertijo.Este decide enseñarte cual es el siguiente paso para huir. \n");
        scanf("%c",&x);}
    printf("Segun el chico has comenzado con buen pie pero dice que no te confies que esta planta es realmente peligrosa...Te entrega un papel.\n");
    scanf("%c",&x);
    printf("Estas delante de la puerta a la que el chico te habia mandado , pero no puedes entrar esta bloqueada necesita que introduzcas un codigo\n");
    printf("observando la puerta ves una serie de marcas '(X-X/X)*X=10' CLAVE:XXXX, el chico te dio un papel con una serie de numeros: 3,4,7,8.(Debes introducir los numeros ordenados para que cumplan la ecucacion ");
    cont=preguntamatematicas(solucion3);
    printf("Vidas perdidas %i\n",cont);
    if(cont==3){
        printf("Lamento decirte que no has logrado abrir esta puerta,por lo que seras arrojado al vacio junto con los demas jugadores que lo han intentado ");
        printf("FIN DEL JUEGO");}

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

