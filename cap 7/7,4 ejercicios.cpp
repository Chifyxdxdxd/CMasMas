#include <iostream>
using namespace std;


int main  () {
	double a, b, x, y;
	cout<<"cual es la longitud del brazo largo? (cm)";
	cin>>a;
	cout<<"cual es la longitud del brazo corto? (cm)";
	cin>>b;
	cout<<"cual es el peso ubicado en el brazo corto? (kg)";
	cin>>y;
	if(a<=0 || b<=0 || y<=0){
		cout<<"datos no validos";
	}else {
		x=(b*y)/a;
		cout<<"se necesita un peso ubidaco en le brazo largo de "<<x<<" kg";
	}return 0;
}
