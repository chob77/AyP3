/*
 * definiciones_arboles.c
 *
 *  Created on: 26 may. 2019
 *      Author: chob
 */

const int acento_a = 160; //á: 160
const int acento_e = 130; //é: 130
const int acento_i = 161; //í: 161
const int acento_o = 162; //ó: 162
const int acento_u = 163; //ú: 163
const int acento_A = 181; //Á: 181
const int acento_E = 144; //É: 144
const int acento_I = 214; //Í: 214
const int acento_O = 224; //Ó: 224
const int acento_U = 23; //Ú: 23
const int enie     = 164; //ñ: 164
const int Enie     = 165; //Ñ: 165

enum {IZQUIERDO, DERECHO};

#define TRUE 1
#define FALSE 0

// Estructuras y tipos
typedef struct nodo_arbol
{
   int dato;
   int Fac_equ; //FACTOR DE EQUILIBRIO
   struct nodo_arbol *derecho;
   struct nodo_arbol *izquierdo;
   struct nodo_arbol *padre;
} tipoNodo;

typedef tipoNodo *pNodo;
typedef tipoNodo *Arbol;

Arbol ArbolInt = NULL;

// Funciones con árboles:
// Insertar en árbol ordenado:
void Insertar(Arbol *a, int dat);

// Borrar un elemento:
void Borrar(Arbol *a, int dat);

// Función de búsqueda:
int Buscar(Arbol a, int dat);

// Comprobar si el árbol está vacío:
int Vacio(Arbol r);

// Comprobar si es un nodo hoja:
int EsHoja(pNodo r);

// Contar número de nodos:
int NumeroNodos(Arbol a, int* c);

// Aplicar una función a cada elemento del árbol:
void InOrden(Arbol, void (*func)(int*));
void PreOrden(Arbol, void (*func)(int*));
void PostOrden(Arbol, void (*func)(int*));

// Funciones de equilibrado:
void Equilibrar(Arbol *raiz, pNodo nodo, int, int);
void RSI(Arbol *raiz, pNodo nodo);
void RSD(Arbol *raiz, pNodo nodo);
void RDI(Arbol *raiz, pNodo nodo);
void RDD(Arbol *raiz, pNodo nodo);

// Funciones auxiliares:
void Mostrar(int *d);
int isNumero( char * st );