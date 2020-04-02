// SIGNO ZODIACAL 1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>
#include <math.h>

int main()
{ //declaración de variables a ocupar
    int mes, dia = 0;
    //Mensaje para el usuario
    printf("Introduzca el numero del mes: ");
    scanf_s("%d", &mes);

    // Primeros condicionales
    while ((mes > 12) || (mes < 1))
    {
        printf("Introduzca el numero del mes: ");
        scanf_s("%d", &mes);
    }

    if (mes == 1)
    {
        printf("Introduzca el numero del dia: ");
        scanf_s("%d", &dia);
        while ((dia > 31) || (dia < 1))
        {
            printf("Introduzca dia: ");
            scanf_s("%d", &dia);
        }
        if (dia < 20) 
            printf("\nEl signo es Capricornio.\n\nLa estacion es Invierno\n\n ");
        else printf("\nEl signo es Acuario.\n\nLa estacion es Invierno\n\n");
       
    }

    else if (mes == 2)
    {
        printf("Introduzca el numero del dia: ");
        scanf_s("%d", &dia);
        while ((dia > 29) || (dia < 1))
        {
            printf("Introduzca dia: ");
            scanf_s("%d", &dia);
        }
        if (dia < 19)  
            printf("\nEl signo es Acuario.\n\nLa esatacion es Invierno\n\n");
        else printf("\nEl signo es Picis.\n\nLa estacion es Invierno\n\n");
    }

    else if (mes == 3)
    {
        printf("Introduzca el numero del dia:");
        scanf_s("%d", &dia);
        while ((dia > 31) || (dia < 1))
        {
            printf("Introduzca dia: ");
            scanf_s("%d", &dia);
        }
        if (dia <= 20) 
            printf("\nEl signo es Picis.\n\nLa estacion es Invierno\n\n");
        else printf("\nEl signo es Aries.\n\nLa estacion es Primavera\n\n");
    }

    else if (mes == 4)
    {
        printf("Introduzca el numero del dia: ");
        scanf_s("%d", &dia);
        while ((dia > 30) || (dia < 1))
        {
            printf("Introduzca dia: ");
            scanf_s("%d", &dia);
        }
        if (dia < 20) 
            printf("\nEl signo es Aries.\n\nLa estacion es Primavera\n\n");
        else printf("\nEl signo es Tauro.\n\nLa estacion es Primavera\n\n");
    }

    else if (mes == 5)
    {
        printf("Introduzca el numero del dia: ");
        scanf_s("%d", &dia);
        while ((dia > 31) || (dia < 1))
        {
            printf("Introduzca dia: ");
            scanf_s("%d", &dia);
        }
        if (dia < 21)  
            printf("\nEl signo es Tauro.\n\nLa estacion es Primavera\n\n");
        else printf("\nEl signo es Geminis.\n\nLa estacion es Primavera\n\n");
    }

    else if (mes == 6)
    {
        printf("Introduzca el numero del dia: ");
        scanf_s("%d", &dia);
        while ((dia > 30) || (dia < 1))
        {
            printf("Introduzca dia: ");
            scanf_s("%d", &dia);
        }
        if (dia < 21)  
            printf("\nEl signo es Geminis.\n\nLa estacion es Primavera\n\n");
        else printf("\nEl signo es Cancer.\n\nLa estacion es Verano\n\n");
    }

    else if (mes == 7)
    {
        printf("Introduzca el numero del dia: ");
        scanf_s("%d", &dia);
        while ((dia > 31) || (dia < 1))
        {
            printf("Introduzca dia(: ");
            scanf_s("%d", &dia);
        }
        if (dia < 23) 
            printf("\nEl signo es Cancer.\n\nLa estacion es Verano\n\n");
        else printf("\nEl signo es Leo.\n\nLa estacion es Verano\n\n");
    }

    else if (mes == 8)
    {
        printf("Introduzca el numero del dia: ");
        scanf_s("%d", &dia);
        while ((dia > 31) || (dia < 1))
        {
            printf("Introduzca dia: ");
            scanf_s("%d", &dia);
        }

        if (dia < 23)
            printf("\nEl signo es Leo.\n\nLa estacion es Verano\n\n");
            printf("\nEl signo es Virgo.\n\nLa estacion es Verano\n\n");
    }

    else if (mes == 9)
    {
        printf("Introduzca el numero del dia: ");
        scanf_s("%d", &dia);
        while ((dia > 30) || (dia < 1))
        {
            printf("Introduzca dia: ");
            scanf_s("%d", &dia);
        }

        if (dia < 23) 
            printf("\nEl signo es Virgo.\n\nLa estacion es Otono\n\n");
        else printf("\nEl signo es Libra.\n\nLa estacion es Otono\n\n");
    }

    else if (mes == 10)
    {
        printf("Introduzca el numero del dia: ");
        scanf_s("%d", &dia);
        while ((dia > 31) || (dia < 1))
        {
            printf("Introduzca dia: ");
            scanf_s("%d", &dia);
        }

        if (dia < 23)  
            printf("\nEl signo es Libra.\n\nLa estacion es Otono\n\n");
        else printf("\nEl signo es Escorpion.\n\nLa estacion es Otono\n\n");
    }

    else if (mes == 11)
    {
        printf("Introduzca el numero del dia: ");
        scanf_s("%d", &dia);
        while ((dia > 30) || (dia < 1))
        {
            printf("Introduzca dia: ");
            scanf_s("%d", &dia);
        }

        if (dia < 22) 
            printf("\nEl signo es Escorpion.\n\nLa estacion es Otono\n\n");
        else printf("\nEl signo es Sagitario.\n\nLa estacion es Otono\n\n");
    }

    else if (mes == 12)
    {
        printf("Introduzca el numero del dia: ");
        scanf_s("%d", &dia);
        while ((dia > 31) || (dia < 1))
        {
            printf("Introduzca dia: ");
            scanf_s("%d", &dia);
        }

        if (dia <= 21) 
            printf("\nEl signo es Sagitario.\n\nLa estacion es Invierno\n\n");
        else printf("\nEl signo es Capricornio.\n\nLa estacion es Invierno\n\n");
    }
    //Fin del código
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
