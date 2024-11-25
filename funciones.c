#include <stdio.h>
#include "funciones.h"
#include <string.h>

void agregarnombre(char nombres[5][CARACTERES])
{
    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el nombre %d:", i + 1);
        fflush(stdin);
        fgets(nombres[i], CARACTERES, stdin);
    }
}

void eliminarnombre(char nombre[5][CARACTERES])
{
    char nombre_edit[CARACTERES];
    printf("Ingrese el nombre a buscar:\n");
    fflush(stdin);
    fgets(nombre_edit, CARACTERES, stdin);

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(nombre_edit, nombre[i]) == 0) // strcmp me permite comparar entre caracteres
        {
            strcpy(nombre[i], "\n");
            printf("\nEliminado...\n");
        }
        else
        {
            printf("El nombre no se encontro:\n");
        }
    }
}

void imprimirnombres(char nombres[5][CARACTERES])
{
    for (int i = 0; i < 5; i++)
    {

        if (strcmp(nombres[i], "\n") != 0)
        {
            printf("Los nombres son: %s", nombres[i]);
        }
    }
}

void editarnombres(char nombres[5][CARACTERES])
{
    char cambiar[CARACTERES];
    printf("Ingrese el nombre a buscar:\n");
    fflush(stdin);
    fgets(cambiar, CARACTERES, stdin);

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(cambiar, nombres[i]) == 0) // strcmp me permite comparar entre caracteres
        {
            printf("\nIngresar:\n");
            fflush(stdin);
            fgets(nombres[i], CARACTERES, stdin);
        }
        else
        {
            printf("El nombre no se encontro:\n");
        }
    }
}

void ingresarnotas(float notas[5][1], float *p, float *a, float *b)
{
    float prom1 = 0;
    float p1 = prom1;
    float max = 0;
    *a = max;
    float min[5] = {10, 10, 10, 10, 10};

    for (int i = 0; i < 5; i++)
    {
        printf("Ingresa una nota:\n");
        scanf("%f", &notas[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        prom1 += notas[i][1];
        if (a < notas[i])
        {
            a = notas[i];
        }
    
    }
    *p = prom1 / 5;
}
  