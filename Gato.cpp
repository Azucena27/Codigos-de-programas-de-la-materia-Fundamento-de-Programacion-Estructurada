

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
    char tablero[20];
    FILE* fptr;
    if ((fptr = fopen(argv[1], "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }
    fscanf(fptr, "%s", &tablero);

    if (strcmp(argv[2], "1") == 0) {
        if (strcmp(argv[3], "2") == 0) {
            fptr = fopen(argv[1], "w+"); //abrimos para escribir


            if ((strcmp(tablero, "2--------") == 0) || (strcmp(tablero, "-2-------") == 0) || (strcmp(tablero, "------2--") == 0) || (strcmp(tablero, "--------2") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -5, SEEK_CUR);
                fputs(argv[2], fptr);
            }
            if (strcmp(tablero, "2-2-1----") == 0) {
                fputs(tablero, fptr); //Aqui se vuelve a escribir el tablero
                fseek(fptr, -8, SEEK_CUR); //En esta parte vamos a tapar el 3
                fputs(argv[2], fptr);
            }
            // if (strcmp(tablero,"2---1-2--") == 0)    {
            //   fputs( tablero, fptr ); //Aqui se vuelve a escribir el tablero
            //   fseek(fptr, -6, SEEK_CUR); //En esta parte vamos a tapar el 3
            //   fputs( argv[2], fptr );
            // }
            // if (strcmp(tablero,"--2-1---2") == 0)    {
            //   fputs( tablero, fptr ); //Aqui se vuelve a escribir el tablero
            //   fseek(fptr, -4, SEEK_CUR); //En esta parte vamos a tapar el 3
            //   fputs( argv[2], fptr );
            // }
            // if (strcmp(tablero,"2-2-1----") == 0)    {
            //   fputs( tablero, fptr ); //Aqui se vuelve a escribir el tablero
            //   fseek(fptr, -8, SEEK_CUR); //En esta parte vamos a tapar el 3
            //   fputs( argv[2], fptr );
            // }
            if (strcmp(tablero, "2---1-2--") == 0) {
                fputs(tablero, fptr); //Aqui se vuelve a escribir el tablero
                fseek(fptr, -6, SEEK_CUR); //En esta parte vamos a tapar el 3
                fputs(argv[2], fptr);
            }
            // if (strcmp(tablero,"----1-2-2") == 0)    {
            //   fputs( tablero, fptr ); //Aqui se vuelve a escribir el tablero
            //   fseek(fptr, -2, SEEK_CUR); //En esta parte vamos a tapar el 3
            //   fputs( argv[2], fptr );
            // }
            if (strcmp(tablero, "--2-1---2") == 0) {
                fputs(tablero, fptr); //Aqui se vuelve a escribir el tablero
                fseek(fptr, -4, SEEK_CUR); //En esta parte vamos a tapar el 3
                fputs(argv[2], fptr);
            }
            if (strcmp(tablero, "----1-2-2") == 0) {
                fputs(tablero, fptr); //Aqui se vuelve a escribir el tablero
                fseek(fptr, -2, SEEK_CUR); //En esta parte vamos a tapar el 3
                fputs(argv[2], fptr);
            }//212-1----
            if ((strcmp(tablero, "21221----") == 0) || (strcmp(tablero, "212-12---") == 0) || (strcmp(tablero, "212-1-2--") == 0) || (strcmp(tablero, "212-1---1") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -2, SEEK_CUR);
                fputs(argv[2], fptr);
            }//Victoria magistral
      //2--11-2--
            if ((strcmp(tablero, "22-11-2--") == 0) || (strcmp(tablero, "2-211-2--") == 0) || (strcmp(tablero, "2--11-22-") == 0) || (strcmp(tablero, "2--11-2-2") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -4, SEEK_CUR);
                fputs(argv[2], fptr);
            }//Victoria magistral
            //--2-11--2
            if ((strcmp(tablero, "-22-11--2") == 0) || (strcmp(tablero, "2-2-11--2") == 0) || (strcmp(tablero, "--2-112-2") == 0) || (strcmp(tablero, "--2-11-22") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -6, SEEK_CUR);
                fputs(argv[2], fptr);
            }
            //----1-212
            if ((strcmp(tablero, "2---1-212") == 0) || (strcmp(tablero, "--2-1-212") == 0) || (strcmp(tablero, "---21-212") == 0) || (strcmp(tablero, "----12212") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -8, SEEK_CUR);
                fputs(argv[2], fptr);
            }
            //212-1--2-
            if (strcmp(tablero, "212-1--2-") == 0) {
                fputs(tablero, fptr); //Aqui se vuelve a escribir el tablero
                fseek(fptr, -6, SEEK_CUR); //En esta parte vamos a tapar el 3
                fputs(argv[2], fptr);
            }//2--1122--
            if (strcmp(tablero, "2--1122--") == 0) {
                fputs(tablero, fptr); //Aqui se vuelve a escribir el tablero
                fseek(fptr, -2, SEEK_CUR); //En esta parte vamos a tapar el 3
                fputs(argv[2], fptr);
            }//--2211--2
            if (strcmp(tablero, "--2211--2") == 0) {
                fputs(tablero, fptr); //Aqui se vuelve a escribir el tablero
                fseek(fptr, -2, SEEK_CUR); //En esta parte vamos a tapar el 3
                fputs(argv[2], fptr);
            }//-2--1-212
            if (strcmp(tablero, "-2--1-212") == 0) {
                fputs(tablero, fptr); //Aqui se vuelve a escribir el tablero
                fseek(fptr, -6, SEEK_CUR); //En esta parte vamos a tapar el 3
                fputs(argv[2], fptr);
            }//---------
            if ((strcmp(tablero, "21211-22-") == 0) || (strcmp(tablero, "212-1--22") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -4, SEEK_CUR);
                fputs(argv[2], fptr);
            }//2--11221-
            if ((strcmp(tablero, "2-211221-") == 0) || (strcmp(tablero, "2--112212") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -8, SEEK_CUR);
                fputs(argv[2], fptr);
            }//--2211-12
            // if ((strcmp(tablero,"2-211221-") == 0)||(strcmp(tablero,"2--112212") == 0)){ //Esta es la opcion
            //         fputs( tablero, fptr );
            //         fseek(fptr, -8, SEEK_CUR);
            //         fputs( argv[2], fptr );
            // }//-2-11-212
            if ((strcmp(tablero, "22-11-212") == 0) || (strcmp(tablero, "-2211-212") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -4, SEEK_CUR);
                fputs(argv[2], fptr);
            }
            if (strcmp(tablero, "212112-2-") == 0) {
                fputs(tablero, fptr); //Aqui se vuelve a escribir el tablero
                fseek(fptr, -3, SEEK_CUR); //En esta parte vamos a tapar el 3
                fputs(argv[2], fptr);
            }
            if (strcmp(tablero, "22-11221-") == 0) {
                fputs(tablero, fptr); //Aqui se vuelve a escribir el tablero
                fseek(fptr, -7, SEEK_CUR); //En esta parte vamos a tapar el 3
                fputs(argv[2], fptr);
            }
            if (strcmp(tablero, "-22211-12") == 0) {
                fputs(tablero, fptr); //Aqui se vuelve a escribir el tablero
                fseek(fptr, -3, SEEK_CUR); //En esta parte vamos a tapar el 3
                fputs(argv[2], fptr);
            }
            if (strcmp(tablero, "-2-112212") == 0) {
                fputs(tablero, fptr); //Aqui se vuelve a escribir el tablero
                fseek(fptr, -7, SEEK_CUR); //En esta parte vamos a tapar el 3
                fputs(argv[2], fptr);
            }
            if ((strcmp(tablero, "2---1---2") == 0) || (strcmp(tablero, "--2-1-2--") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -2, SEEK_CUR);
                fputs(argv[2], fptr);
            }
            //
            if ((strcmp(tablero, "2-2-1--12") == 0) || (strcmp(tablero, "2--21--12") == 0) || (strcmp(tablero, "2---12-12") == 0)) {
                fputs(tablero, fptr); //Aqui se vuelve a escribir el tablero
                fseek(fptr, -8, SEEK_CUR); //En esta parte vamos a tapar el 3
                fputs(argv[2], fptr);
            }
            if ((strcmp(tablero, "22--1--12") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -7, SEEK_CUR);
                fputs(argv[2], fptr);
            }
            if ((strcmp(tablero, "22121--12") == 0) || (strcmp(tablero, "221-12-12") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -3, SEEK_CUR);
                fputs(argv[2], fptr);
            }
            if ((strcmp(tablero, "221-1--12") == 0) || (strcmp(tablero, "221-1--12") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -3, SEEK_CUR);
                fputs(argv[2], fptr);
            }
            if ((strcmp(tablero, "221-1-212") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -6, SEEK_CUR);
                fputs(argv[2], fptr);
            }
            if ((strcmp(tablero, "2-2-1-21-") == 0) || (strcmp(tablero, "--221-21-") == 0) || (strcmp(tablero, "--2-1221-") == 0)) {
                fputs(tablero, fptr); //Aqui se vuelve a escribir el tablero
                fseek(fptr, -8, SEEK_CUR); //En esta parte vamos a tapar el 3
                fputs(argv[2], fptr);
            }
            if ((strcmp(tablero, "21--1-2-2") == 0) || (strcmp(tablero, "21-21---2") == 0) || (strcmp(tablero, "21--12--2") == 0) || (strcmp(tablero, "212-1---2") == 0)) {
                fputs(tablero, fptr); //Aqui se vuelve a escribir el tablero
                fseek(fptr, -2, SEEK_CUR); //En esta parte vamos a tapar el 3
                fputs(argv[2], fptr);
            }
            if ((strcmp(tablero, "21--1-2-2") == 0) || (strcmp(tablero, "21-21---2") == 0) || (strcmp(tablero, "21--12--2") == 0) || (strcmp(tablero, "212-1---2") == 0)) {
                fputs(tablero, fptr); //Aqui se vuelve a escribir el tablero
                fseek(fptr, -2, SEEK_CUR); //En esta parte vamos a tapar el 3
                fputs(argv[2], fptr);
            }
            if ((strcmp(tablero, "-1221-2--") == 0) || (strcmp(tablero, "-12-122--") == 0) || (strcmp(tablero, "-12-1-2-2") == 0) || (strcmp(tablero, "212-1---2") == 0)) {
                fputs(tablero, fptr); //Aqui se vuelve a escribir el tablero
                fseek(fptr, -2, SEEK_CUR); //En esta parte vamos a tapar el 3
                fputs(argv[2], fptr);
            }


            if (strcmp(tablero, "---------") == 0) { //Esta es la opcion
                fputs("---------", fptr);
                fseek(fptr, -9, SEEK_CUR);
                fputs(argv[2], fptr);
            }
            if ((strcmp(tablero, "12-------") == 0) || (strcmp(tablero, "1-2------") == 0) || (strcmp(tablero, "1--2-----") == 0) || (strcmp(tablero, "1---2----") == 0) || (strcmp(tablero, "1----2---") == 0) || (strcmp(tablero, "1-----2--") == 0) || (strcmp(tablero, "1------2-") == 0) || (strcmp(tablero, "1-------2") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -1, SEEK_CUR);
                fputs(argv[2], fptr);
            }
            if ((strcmp(tablero, "1-2-2---1") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -3, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }
            if ((strcmp(tablero, "1-222-1-1") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -2, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }
            if ((strcmp(tablero, "1-2-2-121") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -6, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }
            if ((strcmp(tablero, "122-2-1-1") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -6, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }//1-2-2-1-1
            if ((strcmp(tablero, "1-2-221-1") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -6, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }
            if ((strcmp(tablero, "1---2-2-1") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -7, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }
            if ((strcmp(tablero, "121-2-2-1") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -4, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }
            if ((strcmp(tablero, "1-1-222-1") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -8, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }
            if ((strcmp(tablero, "12--2---1") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -2, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }
            if ((strcmp(tablero, "1--22---1") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -4, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }
            if ((strcmp(tablero, "1---22--1") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -6, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }
            if ((strcmp(tablero, "1---2--21") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -8, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }
            if ((strcmp(tablero, "12--2-211") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -7, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }
            if ((strcmp(tablero, "12-22--11") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -3, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }if ((strcmp(tablero, "122-2--11") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -3, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }if ((strcmp(tablero, "12--22-11") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -3, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }
            if ((strcmp(tablero, "12122-211") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -4, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }
            if ((strcmp(tablero, "121-22211") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -6, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }
            if ((strcmp(tablero, "1--221-21") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -7, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }
            if ((strcmp(tablero, "1--2212-1") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -7, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }
            if ((strcmp(tablero, "12-221--1") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -7, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }
            if ((strcmp(tablero, "1-2-21-21") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -8, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }
            if ((strcmp(tablero, "122-21121") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -6, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }
            if ((strcmp(tablero, "1--122--1") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -3, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }
            if ((strcmp(tablero, "1--12--21") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -3, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }
            if ((strcmp(tablero, "12-12---1") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -3, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }
            if ((strcmp(tablero, "1-212---1") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -3, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }
            if ((strcmp(tablero, "1--12-2-1") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -7, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }
            if ((strcmp(tablero, "1211222-1") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -2, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }
            if ((strcmp(tablero, "1-1122221") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -8, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }
            if ((strcmp(tablero, "11-22--21") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -7, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }
            if ((strcmp(tablero, "11--2-221") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -7, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }
            if ((strcmp(tablero, "11--22-21") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -7, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }
            if ((strcmp(tablero, "1-2-2--21") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -3, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }
            if ((strcmp(tablero, "112-22121") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -6, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }
            if ((strcmp(tablero, "11232-121") == 0)) { //Esta es la opcion
                fputs(tablero, fptr);
                fseek(fptr, -4, SEEK_CUR);
                fputs(argv[2], fptr);//win
            }
        }
    }



    fclose(fptr);

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
