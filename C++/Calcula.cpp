#include<iostream>
#include<math.h>
#include<time.h>
#include<stdlib.h>
using namespace std;
void opc(){
	int opcion;
	char fecha[9];
	char hora[9];
	float x = 0, resultado;
	_strdate(fecha);
	_strtime(hora);
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tFECHA: "<<fecha<<"\n"<<"\t\t\t\t\t\t\t\t\t\t\t\t\t"<<"HORA: "<<hora<<endl;
	cout<<"\n\t\t1. Saber raiz cuadrada de un numero"<<endl;
	cout<<"\t\t2. Salir del programa"<<endl;
	cout<<"\t\tDigite una opcion: "; cin>>opcion;
	_strdate(fecha);
	_strtime(hora);
	do{
	  switch(opcion){
	  	case 1: cout<<"\n\t\tDigite un numero: "; cin>>x;
		   resultado = sqrt(x); 
	  	    cout<<"\n\t\tRaiz cuadrada: "<<resultado<<"\n"; break;
	  	case 2:
	  		break;
	    default:
	    	cout<<"\t\tOpc no disponible.";	
	  }	
	}while(opcion != 2);
}
using namespace std;

int main(){
	opc();
	system("pause");
	/*
	****************************************************
	*                                  FECHA: 03/14/25 *  
    *                                  HORA: 13:36:24  *
    *                                                  *
    *           1. Saber raiz cuadrada de un numero    * 
    *           2. Salir del programa                  *
    *           Digite una opcion: 81                  *
	*           Raiz cuadrada: 9                       *
	*                                                  *
	*                                                  *
	*                                                  *
	****************************************************                                               
	*/ 
	return 0;
}
