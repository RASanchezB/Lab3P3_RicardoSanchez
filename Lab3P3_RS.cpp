#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int*** crearMatriz(int);
int Ejercicio1();
int Ejercicio2(int);
void Ejercicio3(string);
void eliminarMatriz(int***,int);

int main(){
	int opcion = 0;
	while(opcion != 4){
		cout<<""<<endl;
		cout<<"Laboratorio 3 Programacion 3"<<endl;
		cout<<"-----MENU-----"<<endl
	    	<< "1) Podar y buscar"<<endl
	    	<< "2) Teorema de Rufin"<<endl
	    	<< "3) Fechas"<<endl
	    	<< "4) Salir"<<endl
	    	<< "Ingrese el numero del ejercicio que desea:" <<endl;
		cin >> opcion;
		switch(opcion){
			case 1:{
				cout<<"Ejercicio 1:"<<endl;
				
				}
				break;
			case 2:{
				cout<<"Ejercicio 2:"<<endl;
				cout<<"Ingrese el grado mas grande del polinomio"<<endl;
				int GradoM;
				cin >> GradoM;
				Ejercicio2(GradoM);
				}
				break;
			case 3:{
				cout<<"Ejercicio 3:"<<endl;
				string Date;
				cout<<"Ingrese la fecha en el siguiente formato YYYYMMDD"<<endl;
				cin>>Date;
				Ejercicio3(Date);
				}
				break;
			Default:{}
				break;
		}
	}
}
int Ejercicio1(){
}
int Ejercicio2(int Grado){
	
	int temp;
	for(int i = 0; i <= Grado; i++){
		cout<<"Ingrese el numero con el grado xᶺ"<<i<<endl;
		cin >> temp;
			
	}
}
void Ejercicio3(string date){
	
}
int*** crearMatriz(int size){
	int*** matriz = new int**[size];
	for(int i = 0; i < size; i++){
		matriz[i] = new int*[3];
	}
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			matriz[i][j] = new int[size];
		}
	}
	return matriz;
}
void eliminarMatriz(int*** matriz, int size){
	for(int i = 0; i < size; i++){
		for(int j = 0; j < 3; j++){
			delete[] matriz[i][j];
		}
	}
	for(int i = 0; i < size; i++){
		delete[] matriz[i];
	}
	return;
}
