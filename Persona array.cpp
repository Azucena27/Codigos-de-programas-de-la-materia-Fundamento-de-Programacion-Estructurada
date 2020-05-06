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
int p = 0, i = 0;
int main()
{
  Persona array_personas[10];
  char c;
  FILE *aarchivo;
  aarchivo = fopen("miarchivo.bin", "w+");
  if (aarchivo == NULL) 
{
  printf("Error de apertura del  archivo. \n");
}
else {
do {//mensaje para el usuario
   printf("Introduzca su nombre completo: \n");
   fgets(array_personas[i].nombre, 99, stdin);
   printf("Introduzca el sexo de la persona: \n");
   array[i].sexo = getc(stdin);
   //esta línea hace flush a la entrada:
   while ((c = getc(stdin)) != '\n' && c != EOF); 
   //mensaje para el usuario
   printf("Introduzca la direccion: \n");
   fgets(array_personas[i].direccion, 99, stdin);
   printf("Introduzca la religion: \n");
   fgets(array_personas[i].religion, 49, stdin);
   printf("Introduzca la escolaridad: \n");
   fgets(array_personas[i].escolaridad, 19, stdin);
   printf("Introduzca la edad: \n");
   scanf("%hu", &array_personas[i].edad);
   //esta línea hace flush a la entrada:
   while ((c = getc(stdin)) != '\n' && c != EOF); 
fwrite(&array_personas[i].nombre, strlen(array_personas[i].nombre), 1 , archivo);
fprintf(archivo, "%s", &array[0].sexo);

fwrite(&array_personas[i].direccion, strlen(array_personas[i].direccion), 1 , aarchivo);

fwrite(&array_personas[i].religion, strlen(array_personas[i].religion), 1 , aarchivo);

fwrite(&array_personas[i].escolaridad, strlen(array_personas[i].escolaridad), 1 , aarchivo);
		
fprintf(aarchivo, "%d", array_personas[i].edad); p= p+1;}
 while (p <= 10);
 fclose(aarchivo);
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
