#include "Persona.cpp"
#include <iostream>
using namespace std;

class Cliente: Persona{
	//atributos
	private: string nit;
	
	//costructor
	public:
		Cliente(){
		}
		
		Cliente(string nom,string ape,string dir,int tel,string n):Persona(nom,ape,dir,tel){
		nit=n;	
		
		}
		void mostrar(){
			cout<<"_________"<<endl;
			cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
		}
		
	
	
};