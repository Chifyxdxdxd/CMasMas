#include <iostream>
using namespace std;


int main  () {
	double a, b, x, y;
	cout<<"cual es la longitud del brazo largo? (cm)";
	cin>>a;
	cout<<"cual es el peso ubicado en el brazo largo? (kg)";
	cin>>x;
	cout<<"cual es el peso ubicado en el brazo corto? (kg)";
	cin>>y;
	if(a<=0  || b<=0 || c<=0){
		cout<<"datos no validos";
	}else {
	b=(a*x)/y;
	cout<<"se necesita un brazo corto de  longitud "<<b<<" cm";
	}return 0;
}
