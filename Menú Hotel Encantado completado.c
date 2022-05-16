#include <stdio.h>
#define maxPerfiles 100
struct usuario{
    char nombre[100];
    char contrasena[100];
};

int FicheroUsuarios(struct usuario info[], int *nUsuarios);
void IniciarSesion(int *nUsuarios,struct usuario info[]);
void CrearUsuarios(int *nUsuarios,struct usuario info[]);
void preguntatest(char solucion);
void preguntamatematicas(float solucion);

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
 	    printf("1)Iniciar sesión\n2)Crear sesión\n3)Atrás\n");
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
		printf("Introduzca contraseña:\n");
		fflush(stdin);
		scanf("%s",Contrasena1);

		//Tenemos que ver que efectivamente existe ese usuario y contraseña.
		for(i=0;i<*nUsuarios;i++){
			if(strcmp(Usuario1,info[i].nombre)==0 && strcmp(Contrasena1,info[i].contrasena)==0){
				coincide++;
			}
		}

		if(coincide==0){
			printf("Usuario o contraseña incorrectos.\n");
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

	printf("Introduzca contraseña:\n",164);
	fflush(stdin);
	scanf("%s",info[i].contrasena);

    //Abrimos el fichero en modo añadir
	fichUsuarios = fopen("UsuariosContraseñas.txt","a");

    fprintf(fichUsuarios,"%s\n%s\n",info[i].nombre, info[i].contrasena);

	fclose(fichUsuarios);
	system("PAUSE");
}
void preguntatest(char solucion){
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


         printf("Intentos  %i\n",contador);}
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

