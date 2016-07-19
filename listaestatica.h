#ifndef _LISTAESTATICA_H
#define _LISTAESTATICA_H

#include "listaestatica.c"
//---constantes---//
#define TAMANO 50
//----------------//

//---Macros---//
	//-->Equivalent a l'estructura foreach de PHP
#define foreach(element, array) \
	for (int keep = 1,	\
			 count = 0, \
			 size = sizeof (array) / sizeof *(array); \
		 keep && count != size; \
		 keep = !keep, count++) \
		for (element = (array)+count; keep; keep = !keep)


//---Tipos---//
typedef struct {
	int e;
	int sig;
} Nodo;

typedef struct {
	int pri;
	int ant;
	Nodo els[TAMANO];
}Lista;
//-----------//

//--Interficie-//

Lista	LISTAESTATICA_Crea();
void	LISTAESTATICA_Destruye(Lista l);
int		LISTAESTATICA_Consulta(Lista l);
Lista	LISTAESTATICA_Inserir(int e, Lista l);
int 	LISTAESTATICA_Vacia(Lista l);
int 	LISTAESTATICA_Llena(Lista l);
Lista 	LISTAESTATICA_Avanza(Lista l);
Lista 	LISTAESTATICA_VeInicio(Lista l);
int 	LISTAESTATICA_Final(Lista l);
Lista 	LISTAESTATICA_Borra(Lista l);
int 	LISTAESTATICA_Cuantos(Lista l);


//-------------//
#endif
