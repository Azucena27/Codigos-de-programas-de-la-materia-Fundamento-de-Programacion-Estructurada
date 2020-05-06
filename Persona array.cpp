// Persona array.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct persona
{ //Inicializar el array
	unsigned long int id_persona;
	char nombre[100];
	char sexo;
	char direccion[100], religion[50], escolaridad[20];
	unsigned short int edad;
}
Persona;
int p = 0;
int main()
{
	Persona array[10];
	char c;
	FILE *archivo;
	archivo = fopen("Persona.txt", "w+");
	if (archivo == NULL) 
	{
		printf("Error de apertura del  archivo. \n");
	}
	else {
	do {//mensaje para el usuario
		printf("Introduzca su nombre completo: \n");
		fgets(array[0].nombre, 99, stdin);
		//mensaje para el usuario
		printf("Introduzca el sexo de la persona: \n");
		array[0].sexo = getc(stdin);
		//esta línea hace flush a la entrada:
		while ((c = getc(stdin)) != '\n' && c != EOF); 
		//mensaje para el usuario
		printf("Introduzca la direccion: \n");
		fgets(array[0].direccion, 99, stdin);
		//mensaje para el usuario
		printf("Introduzca la religion: \n");
		fgets(array[0].religion, 49, stdin);
		//mensaje para el usuario
		printf("Introduzca la escolaridad: \n");
		fgets(array[0].escolaridad, 19, stdin);
		//mensaje para el usuario
        printf("Introduzca la edad: \n");
	    scanf("%d", &array[0].edad);
		//esta línea hace flush a la entrada:
		while ((c = getc(stdin)) != '\n' && c != EOF); 

	fwrite(&array[0].nombre, strlen(array[0].nombre), 1 , archivo);
	//salida de datos
	fprintf(archivo, "%s", &array[0].sexo);

	fwrite(&array[0].direccion, strlen(array[0].direccion), 1 , archivo);

	fwrite(&array[0].religion, strlen(array[0].religion), 1 , archivo);

	fwrite(&array[0].escolaridad, strlen(array[0].escolaridad), 1 , archivo);
		
	fprintf(archivo, "%d", array[0].edad); p= p+1;
	}
	 while (p <= 10);
	 fclose(archivo);
    }//fin del código
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
