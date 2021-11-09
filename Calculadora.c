//Bibliotecas
#include <stdio.h>
#include <stdlib.h>

//Biblioteca de Funciones
#include "menu.h"
#include "FuncionSuma.h"
#include "FuncionResta.h"
#include "FuncionMultiplicacion.h"
#include "FuncionDivision.h"

//Funciones
int menu();
int sumarNumeros(int A,int B);
int restarNumeros(int A,int B);
int dividirNumeros(int A,int B);
int multiplicarNumeros(int A,int B);


//Main
int main(){
    char loop='T';
    int opcion= 0 ;
    int A= 0;
    int B= 0;
    printf("Ingrese el primer numero: ");
    scanf("%d",&A);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&B);

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
            /* code */
            break;
        case 6 :
            sumarNumeros(A,B);
            restarNumeros(A,B);
            dividirNumeros(A,B);
            multiplicarNumeros(A,B);
            break;
        case 7 :
            loop='F';
            break;
        default:
                printf("Opcion ingresada incorrecta, Seleccione una opcion correcta o la opcion 7 para salir.");
        }
        
    }
  return 0;

}