#include <iostream>
using namespace std;

int main () {
	double A, B, C, D, a1, b2, c3;
	cout<<"Cuantos litros de tienen de A?";
	cin>>A;
	cout<<"Cuantos litros de tienen de B?";
	cin>>B;
	cout<<"Cuantos litros de tienen de C?";
	cin>>C;
	if(A<=0 || B<=0 || C<=0){
		cout<<"Datos no validos";
	}a1=A*5/20, b2=B*8/20, c3=C*7/20;
	if(a1<=b2 && a1<=c3){
		D=a1;
		cout<<"Se pueden fabricar "<<D<<" de D";
	}else if(b2<=a1 && b2<=c3){
		D=b2;
		cout<<"Se pueden fabricar "<<D<<" de D";
	}else if(c3<=a1 && c3<=b2){
		D=c3;
		cout<<"Se pueden fabricar "<<D<<" de D";
	}return 0;	
}

