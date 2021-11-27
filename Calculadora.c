//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//Biblioteca de Funciones
#include "menu.h"
#include "FuncionPresentacion.h"
#include "FuncionSuma.h"
#include "FuncionResta.h"
#include "FuncionMultiplicacion.h"
#include "FuncionDivision.h"
#include "FuncionFactorial.h"
//#include "FuncionIngresarValor.h"

//COLORES 



//Funciones
int menu();
float sumarNumeros(float A,float B);
int restarNumeros(int A,int B);
void dividirNumeros(float A,float B);
int multiplicarNumeros(int A,int B);
int factoreal(int A, int B);
void presentacion();
//float ingresarValores(float A,float B );


//Main
int main(){
    
    char loop='T';
    int opcion= 0 ;
    float A= 0;
    float B= 0;
    
    presentacion();

    printf("|***********************************|\n");
    printf("|*| Ingrese el primer Valor:      |*|\n");
    printf("|***********************************|\n");
    scanf("%f",&A);

    printf("|***********************************|\n");
    printf("|*| Ingrese el segundo Valor:     |*|\n");
    printf("|***********************************|\n");
    scanf("%f",&B);

    

    while (loop =='T'){

        menu();
        scanf("%d", &opcion);
        switch (opcion){

        case 1 :
            sumarNumeros(A,B);
            break;
        case 2 :
            restarNumeros(A,B);
            break;
        case 3 :
            dividirNumeros(A,B);
            break;
        case 4 :
            multiplicarNumeros(A,B);
            break;
        case 5 :
            factoreal(A,B);
            break;
        case 6 :
            sumarNumeros(A,B);
            restarNumeros(A,B);
            dividirNumeros(A,B);
            multiplicarNumeros(A,B);
            factoreal(A,B);
            break;
        case 7 :
            loop='F';
            break;
        default:
                printf("Opcion ingresada incorrecta, Seleccione una opcion correcta o la opcion 7 para salir.");        
        };       
    };
}