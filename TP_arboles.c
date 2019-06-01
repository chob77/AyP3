/*
 * TP_arboles.c
 *
 *  Created on: 26 may. 2019
 *      Author: chob
 */


#include <stdio.h>
#include <string.h>
#include <string.h>
#include "definiciones_arboles.h"
#include "funciones_arboles.h"


/**
*	IMPLEMENTE UN ÁRBOL BST EN C. FUNCIONES PARA:
* 	INSERTAR ELEMENTO, ELIMINAR ELEMENTO, RECORRER ÁRBOL (PRE-ORDER, IN-ORDER, POST-ORDER) Y BÚSQUEDA.
*	EL ÁRBOL TIENE QUE SER BALANCEADO.
*/


int main(){
	clrscr();

    int opcion;
	int i = 0;

	i=0;

	do
	{
    	mostrar_menu_arboles();
    	printf("\nElija una Opcion: ");
        scanf("%d", &opcion);

        switch ( opcion )
        {
            case 1: //OPCION 1 INSERTAR ELEMENTOS
				cargarArbol( &ArbolInt );
            	break;

            case 2: //OPCION 2 ELIMINAR ELEMENTO
            	eliminarElemento( &ArbolInt );
            	break;

            case 3: //OPCION 3 RECORRER ÁRBOL PRE-ORDER
				clrscr();
				printf("\n\nRECORRER %cRBOL PreOrden: ", acento_A );
			    PreOrden( ArbolInt, Mostrar );
				printf("\n\n");
            	break;

            case 4: //OPCION 4 RECORRER ÁRBOL IN-ORDER
            	clrscr();
				printf("\n\nRECORRER %cRBOL InOrden: ", acento_A );
				InOrden( ArbolInt, Mostrar );
				printf("\n\n");
            	break;

            case 5: //OPCION 5 RECORRER ÁRBOL POST-ORDER
            	clrscr();
				printf("\n\nRECORRER %cRBOL PostOrden: ", acento_A );
				PostOrden( ArbolInt, Mostrar );
				printf("\n\n");
            	break;

            case 6: //OPCION 6 BÚSQUEDA
					int dato;
					clrscr();
					printf("\nBUSCAR UN ELEMENTO EN EL %cRBOL: ", acento_A );
					printf( "\n---------------------------------------" );
					printf("\n\nINGRESA EL ELEMENTO A BUSCAR: " );
					scanf( "%d", dato );

					Buscar( ArbolInt, dato );
                break;

            default:
                clrscr();
                printf("\n\nFIN DEL PROGRAMA\n");
                break;
        }
    }while( opcion !=0 );
	//pause();
}