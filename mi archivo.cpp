// mi archivo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *aarchivo;
    aarchivo =fopen("mi archivo.txt", "w");
    if (aarchivo == NULL)
    {
        printf("Errror al abrir archivo. \n");
        return(1)
    }

    fprintf(aarchivo, "Hola Mundo\n");
    fclose(aarchivo);
}

int main(int argc, char const* argv[])
{
    FILE* aarchivo;
    char linea[10];
    aarchivo = fopen("ids_unix.txt", "r");
    if (aarchivo == NULL) {
        printf("Error al abrir archivo.\n");
        return(1);
    }
    printf("Estas son las direcciones de correo de los alumnos de la clase:\n");
    while (fgets(linea, 10, archivo) != NULL)
    {
        trim(linea);
        if(strlen(linea) > 0)
            printf("0%s@ulsaoaxaca.edu.mx\n", linea);
    }
    fclose(aarchivo);
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
