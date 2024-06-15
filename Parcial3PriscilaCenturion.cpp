#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define TAM 10

void evaluarSist(int *, int *, int);
void cargarDatos(int, int, int *, int*, int);
int menu();

int main (){
	
	int op, altura, distancia, i=0;
	int vAltura[TAM]={0}, vDistancia[TAM]={0};
	
	system("Color a");
	printf("\n\t\tPROGRAMA SENDERO\n");
	printf("\n\t*********************************\n");
	printf("\n\n");
	
	do{
		
	op=menu();	
	
	switch(op){
		
		case 1:
			printf("\nIngresar alturas de las partes principales del sendero: \n");
			scanf("%d", &altura);
			printf("\nIngresar distancia de los puntos del sendero: \n");
			scanf("%d", &distancia);
			cargarDatos(altura, distancia, vAltura, vDistancia, i);
			
			i++;
			
			system("pause");
			system("cls");
			
			break;
			
		case 2:
			
			evaluarSist(vAltura, vDistancia, i);
			system("pause");
			system("cls");
			
			break;	
	}
	
	}while(op!=3);

}

void evaluarSist(int *vAlt, int *vDist, int i){
	int x=0, altExB=0, altExA=0;
	int exTotal=0, distTotal;
	
	for (x=0;x<i;x++){
		
		if(*(vAlt+x) > 500 && *(vDist+x) > 2000){
			printf("\nEl nivel de exigencia es ALTO.\n");
			altExA++;
		} else{
			printf("\nEl nivel de exigencia es BAJO.\n");
			altExB++;
		}
		
		distTotal += *(vDist+ x);
		
	}
			printf("\nLa distancia total a recorrer es de %d metros.\n", distTotal);
			
			if(altExA > altExB){
				printf("\nEl sendero tiene un total de dificultad ALTA.\n\n");
			}
	
}

void cargarDatos(int alt, int dist, int *vAlt, int*vDist, int i){
	
	*(vAlt+i)=alt;
	*(vDist+i)=dist;
	
}

int menu(){
	int opc;
	printf("\n1 - Ingresar alturas y distancias de puntos principales del sendero.\n");
	printf("\n2 - Evaluacion de nivel de exigencia del sendero.\n");
	printf("\n3 - Salir\n");
	scanf("%d", &opc);
	
	return opc;

}


	

