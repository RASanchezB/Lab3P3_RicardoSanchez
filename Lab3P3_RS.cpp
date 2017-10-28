#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

int*** crearMatriz(int);
int Ejercicio1();
int Ejercicio2(int);
string Ejercicio3(string);
void eliminarMatriz(int***,int);

int main(){
	int opcion = 0;
	vector <string> vec;
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
				string temp = Ejercicio3(Date);
				vec.push_back(temp);
				int opcion2 = 0;
				while(opcion2 != 3){

					cout<<"--Menu ejercicio 3--"<<endl
				   	 <<"1)Listar todo"<<endl
				   	 <<"2)Listar ordenado"<<endl
				   	 <<"3)salir del ejercicio3"<<endl
				   	 <<"Elija la opcion que desea"<<endl;
					cin>>opcion2;
					switch(opcion2){
					case 1:{
						cout<<"Listando todo"<<endl;
						
						}
					break;
					case 2:{
						cout<<"Ordenando"<<endl;
						
						}
					break;
					case 3:{}
					break;
					default:{}
					break;
					}
					}
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
	int*** matriz;
	matriz = crearMatriz(Grado); 
	int temp;
	int columna = 0;
	for(int i = 0; i <= Grado; i++){
		cout<<"Ingrese el numero con el grado xᶺ"<<i<<endl;
		cin >> temp;
			
	}
}
string Ejercicio3(string date){
	string Y = "";
	string M = "";
	string D = "";
	bool ExisteM = true;
	
	for(int i = 0; i < date.size(); i++){
		if(i <= 3){
			Y += date.at(i);
		}
		if(i > 3 && i <= 5){
			M += date.at(i);
		}
		if(i > 5){
			D += date.at(i);
		}
	}
	int mes = atoi(M.c_str());
	int dia = atoi(D.c_str());
	int anio = atoi(Y.c_str());
	switch(mes){
		case 1:{
			M = "Enero";
			if(dia > 31  || dia <= 0){
				ExisteM = false;
			}
		}
		break;
		case 2:{
			M = "Febrero";
			if(anio%4 == 0){
				if(dia > 29 || dia <= 0){
					ExisteM = false;
				}
			}else{
				if(dia > 28 || dia <= 0){
					ExisteM = false;
				}
			}
		}
		break;
		case 3:{
			M = "Marzo";
			if(dia > 31 || dia <= 0){
				ExisteM = false;
			}
		}
		break;
		case 4:{
			M = "Abril";
			if(dia > 30 || dia <= 0){
				ExisteM = false;
			}
		}
		break;
		case 5:{
			M = "Mayo";
			if(dia > 31 || dia <= 0){
				ExisteM = false;
			}
		}
		break;
		case 6:{
			M = "Junio";
			if(dia > 30 || dia <= 0){
				ExisteM = false;
			}
		}
		break;
		case 7:{
			M = "Julio";
			if(dia > 31 || dia <= 0){
				ExisteM = false;
			}
		}
		break;
		case 8:{
			M = "Agosto";
			if(dia > 31 || dia <= 0){
				ExisteM = false;
			}
		}
		break;
		case 9:{
			M = "Septiembre";
			if(dia > 30 || dia <= 0){
				ExisteM = false;
			}
		}
		break;
		case 10:{
			M = "Octubre";
			if(dia > 31 || dia <= 0){
				ExisteM = false;
			}
		}
		break;
		case 11:{
			M = "Noviembre";
			if(dia > 30 || dia <= 0){
				ExisteM = false;
			}
		}
		break;
		case 12:{
			M = "Diciembre";
			if(dia > 31 || dia <= 0){
				ExisteM = false;
			}
		}
		break;
		default:{
			M = "No existe";
			ExisteM = false;
		}
		break;
	}
	if(ExisteM){
		cout<<"Dia, "<<D<<" de "<<M<<" del "<<Y<<"."<<endl;

	}else{
		cout<<"Alguna informacion no es valida"<<endl;
	}
	string oracion;
	std::stringstream sstm;
	sstm<<"Dia, "<<D<<" de "<<M<<" del "<<Y<<".";
	oracion = sstm.str();
	return oracion;
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
