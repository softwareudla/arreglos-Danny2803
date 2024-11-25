#include <stdio.h>
#include "funciones.h"
// Crear un programa que permita al usuario gestionar una lista de nombres de estudiantes.
// El programa debe ofrecer un menú con las siguientes opciones:
// Agregar un nuevo nombre de estudiante.
// Eliminar un nombre de estudiante por su posición en la lista.
// Mostrar todos los nombres de estudiantes.
// Salir del programa.

int main()
{
    char nombres[personas][CARACTERES];
    int opc1 = 0;
    float *p , *a, *b ;
    float notas[personas][1];
    do
    {
        printf("MENU\n");
        printf("Elija la opcion que desee\n");
        printf("1.-Agregar un nuevo nombre de estudiante.\n2.-Eliminar un nombre de estudiante por su posicion en la lista.\n3.-Mostrar todos los nombres de estudiantes.\n4.-Editar un nombre:\n");
        printf("5.Ingresar notas\n6.Editar notas y promediar\n7.SALIR");
        scanf("%d", &opc1);

        switch (opc1)
        {
        case 1:
            agregarnombre(nombres);

            break;

        case 2:
            eliminarnombre(nombres);
            break;

        case 3:
            imprimirnombres(nombres);

            break;

        case 4:
            editarnombres(nombres);
            break;
        case 5:
            ingresarnotas(notas,p,a,b);
            break;
        case 6:
            break;
            
case 7:
            printf ("SALIENDO...");
            break;

        default:
            printf("No se encontro la opcion marcada");
            break;
        }
    } while (opc1 != 7);

    printf("Saliendo del programa...");

    return 0;
}