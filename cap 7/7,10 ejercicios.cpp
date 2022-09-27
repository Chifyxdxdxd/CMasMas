#include<iostream>
#include<math.h>
using namespace std;

double vector(double x, double cx, double y, double cy){
	return sqrt(pow((x-cx),2)+pow((y-cy),2));
}

int main () {
	double x, y, cx, cy, r, v;
	cout<<"Cual es la coordenada x del centro del circulo? \n";
	cin>>cx;
	cout<<"Cual es la coordenada y del centro del circulo? \n";
	cin>>cy;
	cout<<"Cual es el radio del circulo? \n";
	cin>>r;
	cout<<"Cual es la coordenada x del punto? \n";
	cin>>x;
	cout<<"Cual es la coordenada y del punto? \n";
	cin>>y;
	v=vector(x,cx,y,cy);
	if (v<=r){
		cout<<"si pertenece al circulo";
	}else {
		cout<<"no pertenece al circulo";
	}return 0;
}
