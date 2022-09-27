#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

void inicio(){
	const string nfichero= "entrada.txt";
	char letra;
	ifstream fichero;
	fichero.open(nfichero.c_str());
	if(!fichero.fail()){
		fichero.get(letra);
		while(!fichero.eof()){
		   cout<<letra;
		   fichero.get(letra);
		}
	fichero.close();
	}
}


int main (){
	inicio();
 return 0;
 }
