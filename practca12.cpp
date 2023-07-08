#include<iostream>
#include<conio.h>
using namespace std;
int main(){
		printf("2°A de Programacion\n");
		printf("3 Parcial\n");
	printf("Institucion: CBTIS 29 ,Jose Ma. Morelos Y Pavon\n");
	printf("Profesor:Jose Edmundo Fabian Sanchez\n");
	printf("M1-S2: Aplica estructuras de control con un lenguaje de programacion\n");
	printf("Practica 12: Programar Arreglos\n");
	printf("Programa que ingrese 5 numeros en un arreglo,se copie a otro arreglo,multiplica por 2\n");
	printf("y mostramos el 2 arreglo\n");
	printf("Los integrantes del Equipo son:\n");
	printf("Alison Espinoza Colin(representante)\n");
	printf("Kelly Yamileht Martinez Hernandez(suplente)\n");
	printf("Marcos Rafael Meneses Rangel\n");
	printf("Erick Ian Garcia Carmona\n\n");

	
	int numeros[5],numeros2[5];
	
	for(int i=0;i<5;i++){
		cout<<i+1<<"Digite un numero: ";cin>>numeros[i];
	}
	for(int i=0;i<5;i++){
		numeros2[i] = numeros[i]*2;
	}
	cout<<"\nMostrando numeros multiplicados por 2:\n\n";
	for(int i=0;i<5;i++){
		cout<<numeros2[i]<<endl;
	}
	getch(); return 0;
}
