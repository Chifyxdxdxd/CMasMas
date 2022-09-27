#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int b=-2,c=3;
	double a=0.5, resultado=0;

	resultado= -b+b*b%3-4*a*c/2*a;
	
	cout<< "\nEl resultado es: "<<resultado;
	
	return 0;
}
