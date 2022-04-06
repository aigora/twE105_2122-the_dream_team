#include <stdio.h>

int main ()
{
    printf("Bienvenido al juego del Hotel Encantado\nEste juego consiste en abandonar el hotel encantado resolviendo diversos acertijos\n¡Disfruta!");
    printf("Selecciona una de las opciones\n");
    int menu;
    int dificultad;
    printf("1)Jugar\n2)Instrucciones\n3)Salir\n");
    scanf("%d", &menu);
    switch (menu)
 {
 	case 1:
 		printf("Elige la dificultad del juego\n");
 		printf("1)Facil\n2)Medio\n3)Dificil\n4)Salir\n");
        scanf("%d", &dificultad);
        break;

 	case 2:
	    printf("Estas son las intrucciones:");
	    break;
	case 3:
	    printf("Vuelva pronto \n");
		break;
 }
    return 0;
}
