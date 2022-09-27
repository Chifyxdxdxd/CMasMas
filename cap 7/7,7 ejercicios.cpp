#include <iostream>
using namespace std;

int main () {
	double A, B, C, D;
	cout<<"cuantos litros de D se quieren obtener?";
	cin>>D;
	A=D*5/20, B=D*8/20, C=D*7/20;		
	cout<<"para 10 litros de D se necesitan \n"<<A<<" litros de A \n"<<B<<" litros de B \n"<<C<<" litros de C";
	return 0;	
}
