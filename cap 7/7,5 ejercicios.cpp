#include <iostream>
using namespace std;


int main  () {
	double a, b, x, y;
	cout<<"cual es la longitud del brazo corto? (cm)";
	cin>>b;
	cout<<"cual es el peso ubicado en el brazo largo? (kg)";
	cin>>x;
	cout<<"cual es el peso ubicado en el brazo corto? (kg)";
	cin>>y;
	if(b<=0 || x<=0 || y<=0){
		cout<<"datos no validos";
	}else {	
		a=(b*y)/x;
		cout<<"se necesita un brazo largo de  longitud "<<a<<" cm";
	}return 0;	
}
