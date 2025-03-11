#include <iostream>

using namespace std;

int main(){
	int edad, opc;
	string nombre;
	do{
		cout<<"\n1. Agregar edad"<<endl;
		cout<<"2. Agregar nombre"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"Digite una opcion: "; cin>>opc;
		
		if(opc >= 4) {
			cout<<"\nLo siento, esta opcion no ha sido agregada aun.";
		}
		
		switch(opc){
			case 1:
				cout<<"\nDigite su edad: "; cin>>edad;
				cout<<"Edad agregada!"<<endl; break;
			case 2:
				cout<<"\nIngrese su nombre: "; cin>>nombre;
				cout<<"Nombre agregado!"<<endl; break;
			case 3:
				break;
			default:
				cout<<"\nSeleccione una opcion valida.";
		}
	}while(opc != 3);
	
	return 0;
}