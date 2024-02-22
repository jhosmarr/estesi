#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){

     string nit,nombres,apellidos,direccion;
     int telefono;
     
     cout<<"ingresar Nit:";
     cin>>nit;
     cout<<"ingrese Nombres:";
     cin>>nombres;
     cout<<"ingresar Apellidos:";
     cin>>apellidos;
     cout<<"ingresar Direccion:";
     cin>>direccion;
     cout<<"ingresar Telefono:";
     cin>>telefono;
     
     //instancia de un objeto
     Cliente obj= Cliente(nombres,apellidos,direccion,telefono,nit);
     obj.mostrar();
     
	 
	 }
     