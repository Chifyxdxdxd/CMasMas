#include <iostream>
using namespace std;


int main  () {
	double a, b, x, y;
	cout<<"cual es la longitud del brazo largo? (cm)";
	cin>>a;
	cout<<"cual es la longitud del brazo corto? (cm)";
	cin>>b;
	cout<<"cual es el peso ubicado en el brazo largo? (kg)";
	cin>>x;
	if(a<=0 || b<=0 || x<=0){
		cout<<"datos no validos";
	}else {
		y=(a*x)/b;
		cout<<"se necesita un peso ubidaco en le brazo corto de "<<y<<" kg";
	}return 0;
}
