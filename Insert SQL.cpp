#include "Persona.cpp"
#include <iostream>
using namespace std;
class Cliente : Persona {
	// atributos
	private : string nit;
	//constructor
	public : 
	Cliente(string nom,string ape,string dir,int tel,string f,string n) : Persona(nom,ape,dir,tel,f){
		nit = n;
	}
	// set (modificar)
	void setNit(string n){	nit = n;}
	void setNombres(string nom){	nombres = nom;}
	void setApellidos(string ape){	apellidos = ape;}
	void setDireccion(string dir){	direccion = dir;}
	void setTelefono(int tel){	telefono = tel;}
	void setFN(string f){	fn = f;}
	// get (mostrar)
	string getNit(){return nit;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	string getFN(){return fn;}
	int getTelefono(){return telefono;}
	
	void mostrar(){
		cout<<"_______________"<<endl;
		cout<<"Nit:"<<nit<<endl;
		cout<<"Nombres:"<<nombres<<endl;
		cout<<"Apellidos:"<<apellidos<<endl;
		cout<<"Direccion:"<<direccion<<endl;
		cout<<"Telefono:"<<telefono<<endl;
		cout<<"Nacimiento:"<<fn<<endl;
	}
	void crear(){
		cout<<"Metodo crear de cliente"<<endl;
		
	}
	void leer(){
		cout<<"Metodo leer de cliente"<<endl;
		
	}
	void actualizar(){
		cout<<"Metodo actualizar de cliente"<<endl;
		
	}
	void borrar(){
		cout<<"Metodo barrar de cliente"<<endl;
		
	}
	
};
