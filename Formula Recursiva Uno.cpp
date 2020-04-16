// Formula Recursiva Uno.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>

int f(int n)
{
	if (n < 1 || n > 60)
	{
		printf("Error!!!!\n");
		return -1;
	}
	else
	{
			return (f(n - 2) * 5);
	}


int factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}


int main()
{
	int  numero;
	char c;

	printf("¿De que numero deseas conocer la funcion F? ");
	scanf_s("%d", &numero);
	while ((c = getc(stdin)) != "\n" && c != EOF); //Esta linea hace flush a la entrada
	printf("El factorial es: %d\f ", factorial(numero));
	scanf_s("%d ", &numero);

}
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
