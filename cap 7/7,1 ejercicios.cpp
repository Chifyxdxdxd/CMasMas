#include <iostream>
using namespace std;


int main  () {
double a, x, y;

cout<< "cual es el area del corral? (metros cuadrados) \n";
cin>> x;
cout<< "cuntas gallinas hay en el corrar? \n";
cin>> y;
if(x<=0 || y<=0){
	cout<<"datos no validos";
}else {
	a=y/x;
	cout<< "el area que le corresponde a cada gallina es "<<a<<" metros cuadrados.";
}return 0;
} 
