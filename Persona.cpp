// Persona.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>

struct estructura_persona {
	char nombre[30];
	char direccion[100];
	char religion[50];
	char sexo[10];
	unsigned long int edad;
	unsigned long int id;
	char escolaridad[20];
};

struct estructura_persona persona;
main()
{
	char d;
	printf("Escribe el nombre de la persona: ");
	gets(persona.nombre);

	printf("Escribe la direccion de la persona: ");
	gets(persona.direccion);

	printf("Escribe la religion de la persona: ");
	gets(persona.religion);

	printf("Escribe el sexo de la persona: ");
	gets(persona.sexo);

	printf("Escribe la escolaridad de la persona: ");
	gets(persona.escolaridad);

	printf("La persona %s, con direccion en %s.\nDe religion es %s.\nSexo: %s.\nY hasta escolaridad %s.\n", persona.nombre, persona.direccion, persona.religion, persona.sexo, persona.escolaridad);
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
