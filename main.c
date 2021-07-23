#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *apuntaArchivo;
    apuntaArchivo = fopen("alumnos.txt", "r");
    if(apuntaArchivo == NULL)
    {
        printf("Error al abrir el archivo!\n");\
        return 1;
    }
    printf("El archivo fue abierto exitosamente!\n");
    fclose(apuntaArchivo);
    return 0;
}
