#include <iostream>
#include <math.h>

using namespace std;

int main () {
	int h, m, n;
	double aux1, aux2, aux3;
	cout<<"cuantas mujeres hay? \n";
	cin>>m;
	cout<<"cuantos hombres hay? \n";
	cin>>h;
	if((h+m)!=100){
		cout<<"datos no validos";
		return 0;
	}cout<<"cuantas mesas hay? \n";
	cin>>n;
	m=100-h, aux1=m/n, aux2=h/n, aux3=abs(aux1-aux2);
	if (aux3>2){
		cout<<"la diferencia entre hombres y mujeres por mesa es demasiada";
		return 0;
	}cout<<"son "<<aux1<<" sillas para mujeres y "<<aux2<<" sillas para hombres por mesa \n";
	cout<<"cual voto vale mas mujeres (1) u hombres (2)?";
	cin>>n;
	switch (n){
		case 1:
			aux3=100, aux2=(aux3+2)/2.5;
			cout<<"el numero de votos de mujeres que se necesita para ganar es: "<<aux2<<endl;
			break;
		case 2:
			aux3=100, aux1=(aux3-2)/2.5, aux2=aux3-aux1;
			cout<<"el numero de votos de mujeres que se necesita para ganar es: "<<aux2<<endl;
			break;
		default:
			cout<<"datos no validos";
	}return 0;
}
