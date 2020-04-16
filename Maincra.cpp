// Maincra.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>

#define SIZE 5

int main() {
    int aguante, num_filas;
    long long int diamantes[SIZE];
    long long int suma1 = 0, suma2 = 0;

    scanf_s("%d", &num_filas);//se pide numero de filas

    printf("Ingrese los diamantes en cada fila");
    for (int i = 0; i < num_filas; i++) //For para pedir los diamantes en cada fila
    {
        scanf_s("%lld", &diamantes[i]);
    }
    printf("Ingrese el aguante del pico");
    scanf_s("%d", &aguante); //se pide el aguante del pico


    for (long long int i = 0; i < num_filas; i++) {
        //if ((num_filas - i) < aguante) continue;
        for (long long int j = 0; j < aguante; j++) {
            if ((i + j) >= num_filas)
                continue;
            suma1 += diamantes[i + j];
        }
        if (suma1 >= suma2) {
            suma2 = suma1;
            suma1 = 0;
        }
        else {
            suma1 = 0;
        }
    }


    printf("\n\n%lld\n\n", suma2);// se imprime el valor más alto
    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
