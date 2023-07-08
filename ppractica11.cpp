#include <iostream>

using namespace std;

int main(){
	printf("2°A de Programacion\n");
	printf("Institucion: CBTIS 29 ,Jose Ma. Morelos Y Pavon\n");
	printf("Profesor:Jose Edmundo Fabian Sanchez\n");
	printf("M1-S2: Aplica estructuras de control con un lenguaje de programacion\n");
	printf("Parcial:3\n");
	printf("semestre:2\n");
	printf("Practica 11:Programar estructuras de repeticion Do-While\n ");
	printf("Tabla de multiplicar de los numeros del 1 al 10\n");
	printf("Fecha :23/05/2023\n");
	printf("Los integrantes del Equipo son:\n");
	printf("Alison Espinoza Colin(representante)\n"),
	printf("Kelly Yamileht Martinez Hernandez(suplente)\n");
	printf("Marcos Rafael Meneses Rangel\n");
	printf("Erick Ian Garcia Carmona\n\n\n");
	
	int numero;
	
	do{
		cout<<"Digite un numero: ";cin>>numero;
	}while((numero<1) || (numero>10));
	
	for(int i=1;i<=10;i++){
		cout<<numero<<" x "<<i<<"="<<numero*i<<endl;
	}
	
	return 0;
}
