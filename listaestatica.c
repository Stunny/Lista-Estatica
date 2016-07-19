#include "listaestatica.h"

Lista LISTAESTATICA_Crea(){
	Lista l;
	l.pri = 0;
	l.ant = 0;
	l.els[0].sig = -1;
	return l;
}

void LISTAESTATICA_Destruye(Lista l){
	
	foreach(Nodo *n, l.els){
		n->e = NULL;
		n->sig = NULL;
	}
	l.els[0].e = NULL;
	l.els[0].sig = -1;

	l.pri = 0; //El primer node sempre sera el fantasma.
	l.ant = 0;

}

int LISTAESTATICA_Consulta(Lista l){
	
	return l.els[l.els[l.ant].sig];

}

Lista LISTAESTATICA_Inserir(int e, Lista l){
	
	int i = 0;
	
	foreach(Nodo *n, l.els){
		if(n->sig != -1) i++;
	}

	if(i == TAMANO -1) return NULL;
	
	Nodo new;
	new.e = e;
	new.sig = -1;
	
	l.els[i].sig = i+1;
	l.els[i+1] = new;
	
	return l;
}

int LISTAESTATICA_Vacia(Lista l){
	return l.els[l.pri].sig == -1;
}

int LISTAESTATICA_Llena(Lista l){
	
	int i = 0;
	
	foreach(Nodo *n, l.els){
		if(n->sig != -1) i++;
	}
	
	return i == TAMANO - 1;
}

Lista LISTAESTATICA_Avanza(Lista l){
	
	if(l.ant == TAMANO-1) return l;
	if(l.els[0].sig == -1) return l;
	if(l.els[l.ant].sig == -1) return l;

	l.ant++;
	return l;
}

Lista LISTAESTATICA_VeInicio(Lista l){
	l.ant = 0;
}

int LISTAESTATICA_Final(Lista l){
	return l.ant == TAMANO-1;	
}

Lista LISTAESTATICA_Borra(Lista l){
	
	int aux = l.ant;
	Lista li;
	
	l.els[l.els[l.ant].sig]
			

}
