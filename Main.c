//BIBLIOTECAS/LIBRERIAS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>


//BIBLIOTECA DE FUNCIONES
#include "FuncionPresentacion.h"
#include "menu.h"
#include "FuncionSuma.h"
#include "FuncionResta.h"
#include "FuncionDivision.h"
#include "FuncionMultiplicacion.h"
#include "FuncionFactorial.h"
#include "FuncionValidar.h"

//DECLARACION DE FUNCIONES
void presentacion();
int validar(char numero1[],char numero2[]);
int menu();
int sumarNumeros(int numeroValido1,int numeroValido2);
int dividirNumeros(int numeroValido1,int numeroValido2);
int multiplicarNumeros(int numeroValido1,int numeroValido2);
int factoreal(int numeroValido1,int numeroValido2);


//PRINCIPAL
int main (){

    ////FUNCIONES PARA EL DO WHILE DE VALIDACION

    char numero1[5];
    char numero2[5];
    int numeroValido1;
    int numeroValido2;
    int N1;

    //////FUNCIONES DEL MENU WHILE

    int loop ='T';
    int opcion=0;

    presentacion();


    //Do While PARA VALIDACION DE NUMEROS
    do{
        system("COLOR 09");
        printf("|*****************************|\n");
        printf("|*|Ingrese el primer numero |*|\n");
        printf("|*****************************|\n");
        scanf("%s", numero1);

        printf("|******************************|\n");
        printf("|*|Ingrese el segundo numero |*|\n");
        printf("|******************************|\n");
        scanf("%s", numero2);

        N1 = validar(numero1, numero2); //Llamada de la funcion validar

    } while (N1==0);

    numeroValido1= atoi (numero1);
    numeroValido2= atoi (numero2);
    printf("|*****************************************|\n");
    printf("|   Numero 1: %i           Numero 2:%i   *|\n", numeroValido1,numeroValido2);
    printf("|*****************************************|\n");
    printf("\n");
    system("PAUSE");
    system("cls");

    //WHILE PARA EL MENU DE CALCULADORA   
    while (loop == 'T'){
        menu(); //LLAMADA DE LA FUNCION MENUq 
        scanf("%d", &opcion);
        switch (opcion){   

        case 1: 
            printf("|******************|\n");
            printf("|*Funcion Suma    *|\n");
            printf("|******************|\n");
            printf("\n");
            printf("Los numeros sumados dan como resultado: %d \n", sumarNumeros(numeroValido1, numeroValido2));
            printf("\n");
            system("PAUSE");
            system("cls");
            break;

        case 2: 
            printf("|*******************|\n");
            printf("|*Funcion Resta    *|\n");
            printf("|*******************|\n");
            printf("\n");
            printf("Los numeros restados dan como resultado: %d \n", restarNumeros(numeroValido1, numeroValido2));
            system("PAUSE");
            system("cls");
            break;

        case 3: 
            printf("|**********************|\n");
            printf("|*Funcion Division    *|\n");
            printf("|**********************|\n");
            printf("\n");
            printf("La division de los numeros da como resto: %d \n", dividirNumeros(numeroValido1, numeroValido2));
            system("PAUSE");
            system("cls");
            break;

        case 4: 
            printf("|****************************|\n");
            printf("|*Funcion Multiplicacion    *|\n");
            printf("|****************************|\n");
            printf("\n");
            printf("La multiplicacion de los numeros da como resultado: %d \n", multiplicarNumeros(numeroValido1, numeroValido2));
            system("PAUSE");
            system("cls");
            break;
        case 5: 
            printf("|**********************|\n");
            printf("|*Funcion Factoreo    *|\n");
            printf("|**********************|\n");
            printf("\n");
            printf("El factoreo de los numeros son los siguientes: \n");
            printf("\n");
            factoreal(numeroValido1,numeroValido2);
            system("PAUSE");
            system("cls");
            break;
        case 6: 
            printf("|************************|\n");
            printf("|*Todas las funciones   *|\n");
            printf("|************************|\n");
            printf("\n");
            printf("Suma: %d \n",sumarNumeros(numeroValido1, numeroValido2));
            printf("Resta: %d \n",restarNumeros(numeroValido1, numeroValido2));
            printf("Division: %d \n",dividirNumeros(numeroValido1, numeroValido2));
            printf("Multiplicacion: %d \n",multiplicarNumeros(numeroValido1, numeroValido2));
            printf("factoreal: \n");
            factoreal(numeroValido1,numeroValido2);
            system("PAUSE");
            system("cls");
            break;
        case 7: 
            printf("Gracias por usar esta calculadora =D \n");
            system("PAUSE");
            loop='F';
            break;
        
        default:
            printf("Opcion fuera de rango oprime 7 para salir");
            break;
        }       
    }
    return 1;   
}

