#include <iostream>
using namespace std;


int main  () {
	double x, y, z;
	cout<< "escriba 3 numeros reales diferentes \n";
	cin>> x>> y >>z;
	if (x==y && y==z){
		cout<<"los numeros son iguales \n";
	}else if (x==y){
		if (y<z){
			cout<<z<<" es el numero mas grande \n";
		}else{
			cout<<x<<" es el numero mas grande \n";
	}}else if (y==z){
		if (x<y){
			cout<<y<<" es el numero mas grande \n";
		}else{
			cout<<x<<" es el numero mas grande \n";
	}}else if (x>y && x>z){
		cout<< x<<" es el numero mas grande \n";
	}else if(y>x && y>z) {
		cout<< y<<" es el numero mas grande \n";
	}else if(z>x && z>y) {
		cout<< z<<" es el numero mas grande \n";
	}else {
		cout<< "las opciones no son validas";
	}return 0;
}
	
