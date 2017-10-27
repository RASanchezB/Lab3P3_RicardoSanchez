#include <iostream>
#include <string>
#include <vector>

using namespace std;


int Ejercicio1();
int Ejercicio2(int);
int Ejercicio3();


int main(){
	int opcion = 0;
	while(opcion != 4){
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
				
				}
				break;
			Default:{}
				break;
		}
	}
}

int Ejercicio2(int Grado){
	vector <int> Ecuacion;
	int temp;
	for(int i = 0; i <= Grado; i++){
		cout<<"Ingrese el numero con el grado xᶺ"<<endl;
		cin >> temp;
		
	}
}
