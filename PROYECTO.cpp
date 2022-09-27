#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <time.h>
using namespace std;

string palabra_original;
string palabra_mostrar;
int vidas;

void mostrar();
void ingresar(char x);
void inicializar();
string obtener_palabra_aleatoria();




int main(){
	inicializar();
	mostrar();
	while(vidas>0 && palabra_mostrar!=palabra_original){
		char x;
		cin>>x;
		ingresar(x);
		mostrar();
	}
	if(vidas>0){
		cout<<"------Ganaste-----"<<endl;
	}
	else{
		cout<<"Perdiste \n"<<"Respuesta: "<<palabra_original<<endl;
	}
	Stoppls:
		return 0;
}
	void mostrar(){
		cout<<"Vidas: "<<vidas<<endl;
		cout<<palabra_mostrar<<endl;
	}
	
	void inicializar(){
		vidas=5;
		palabra_original=obtener_palabra_aleatoria();    //ingresar de ontra forma la palabra 
		for(int i=0; i<palabra_original.length(); i++){
			if(palabra_original[i]>='A' && palabra_original[i]<='Z'){
				palabra_original[i]+=32;
			}
		}
		for(int i=0; i<palabra_original.length(); i++){
			if(palabra_original[i]>='a' && palabra_original[i]<='z'){
				palabra_mostrar+='-';
			}
			else{
				palabra_mostrar+=palabra_mostrar[i];
			}
		}
	}
	
	void ingresar(char x){
		bool perdervidas=true;
		
		for (int i=0; i<palabra_original.length(); i++){
			if(x==palabra_original[i]){
				perdervidas=false;
				palabra_mostrar[i]=x;
			}
		}
		if(perdervidas){
			vidas--;
		}
	}	
vector<string> obtener_coleccion_de_palabras(){
	vector<string> palabras;
	bool x;
	int salir();
	cout<<"jugara solo (1) o en grupo (0)"<<endl;
	cin>>x;
	if (x==0){
		ifstream file_input_stream("entrada.txt");
	string palabra;
	while(file_input_stream>>palabra)
		palabras.push_back(palabra);
		file_input_stream.close();
	}
	if (x==1){
		ifstream file_input_stream("entrada2.txt");
	string palabra;
	while(file_input_stream>>palabra)
		palabras.push_back(palabra);
		file_input_stream.close();
	}
	if (x!=1|| x!=2){
		salir();
	}
	return palabras;
}	
int obtener_numero_aleatorio_menor(int b){
	srand(time(0));
	int numero_aleatorio = rand();
	return numero_aleatorio % b;
}	
string obtener_palabra_aleatoria(){
	vector<string> palabras= obtener_coleccion_de_palabras();
	int numero_aleatorio=obtener_numero_aleatorio_menor(palabras.size());
	return palabras[numero_aleatorio];
}

