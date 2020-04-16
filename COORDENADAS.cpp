// COORDENADAS.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>
#include <stdlib.h>


int main()
{   //declaración de variables
    int lat, lon;
    float resultado1 = 0, resultado2 = 0, gra, min, seg, gra2, min2, seg2;
    char  n = 0, s = 0, e = 0, o=0;
   
    //mensaje para el usuario
    printf("\nPROGRAMA PARA GENERAR EL ENLACE DE COORDENADAS.\n");
    printf("\nFavor de ingrasar los datos que se piden.\n");

    //operaciones para la latitud
    printf("\nLatitud [1 = Norte / 2 = Sur]:");
    scanf_s("%d", &lat);
                                       
    printf("Grados:");
    scanf_s("%f", &gra);

    printf("Minutos:");
    scanf_s("%f", &min);

    printf("Segundos:");
    scanf_s("%f", &seg);

    //operaciones para la longitud
    printf("\nLongitud [1 = Este / 2 = Oeste]:");
    scanf_s("%d", &lon);
                                
    printf("Grados:");
    scanf_s("%f", &gra2);

    printf("Minutos:");
    scanf_s("%f", &min2);

     printf("Segundos: ");
     scanf_s("%f", &seg2);
                                  
    //operaciones correspondientes dependiendo de las condiciones
        if (lat == 1)
        {
            if (lon == 1)
            {
                resultado1 = gra + (min / 60) + (seg / 3600);

                resultado2 = gra2 + (min2 / 60) + (seg2 / 3600);
                //impresion del link de las coordenadas
                printf("\nhttps://maps.google.com/maps/place/%f ,%f\n", resultado1, resultado2);
            }
            else
                if( lon == 2 )
                {
                    resultado1 = gra + (min / 60) + (seg / 3600);

                    resultado2 = gra2 + (min2 / 60) + (seg2 / 3600);
                    //impresion del link de las coordenadas
                    printf("\nhttps://maps.google.com/maps/place/%f ,-%f\n", resultado1, resultado2);
                }
        }
     else
            if (lat == 2) 
            {
                if (lon == 1)
                {
                    resultado1 = gra + (min / 60) + (seg / 3600);

                    resultado2 = gra2 + (min2 / 60) + (seg2 / 3600);
                    //impresion del link de las coordenadas
                    printf("\nhttps://maps.google.com/maps/place/-%f ,%f\n", resultado1, resultado2);
                }
                else
                    if (lon == 2) 
                    {
                        resultado1 = gra + (min / 60) + (seg / 3600);

                        resultado2 = gra2 + (min2 / 60) + (seg2 / 3600);
                        //impresion del link de las coordenadas
                        printf("\nhttps://maps.google.com/maps/place/-%f ,-%f\n", resultado1, resultado2);
                    }
            }
   //fin del codigo
    
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
