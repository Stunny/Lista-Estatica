#include <stdio.h>
#include "listaestatica.h"

void printarMenu(){
	printf("1-Crear llista\n");
	printf("2-Eliminar llista\n");
	printf("3-Afegir element\n");
	printf("4-Eliminar element\n");
	printf("5-Mostrar elements\n");
	printf("6-Cercar element\n");
	printf("7-Sortir\n");
	printf("Opcion?\t");
}

void crearLista(Lista l){ l= LISTAESTATICA_Crea();}
void eliminarLista(Lista l){ LISTAESTATICA_Destruye(l);}
void add(Lista l){
	
	int e = 0;
	printf("Introduzca el elemento a añadir:\t");
	scanf("%d", &e);

	LISTAESTATICA_Inserir(e,l);
}



int main(int argc, char* argv[]){
	
	Lista l;
	printf("---Lista Estatica---\n");
	
	int opcion = 0;
	
	do{
		printarMenu();
		scanf("%d", &opcion);
		printf("\n");
		switch(opcion){
			
			case 1:
				crearLista(l);
				break;
			case 2:
				eliminarLista(l);
				break;
			case 3:
				add(l);
				break;
			case 4:
				delete();
				break;
			case 5:
				show();
				break;
			case 6:
				search();
				break;
			case 7:
				printf("Hasta luego!\n");
				eliminarLista();
				break;
			default:
				printf("Opcion no valida.\n");
				break;
		}
	}while(opcion != 7);

	return 0;
}
