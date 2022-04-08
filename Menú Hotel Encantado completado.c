#include <stdio.h>

int main ()
{
    printf("Bienvenido al juego del Hotel Encantado\nEste juego consiste en abandonar el hotel encantado resolviendo diversos acertijos\n¡Disfruta!");
    printf("Selecciona una de las opciones\n");
    int menu; //"menu" es la variable que guarda la opcion que escojes
    int dificultad; //"dificultad" es la variable que engloba la difucltad del juego
    printf("1)Jugar\n2)Instrucciones\n3)Salir\n");
    scanf("%d", &menu); //te guarda la opción del menu principal escogida
    switch (menu)
 {
 	case 1:
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
                return main();//esta acción realiza unna vuelta al menú inicial
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
