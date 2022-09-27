#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int a=3;
	int b=10;
	double c=0.5;
	int d=4;
int	resultado=0;

	resultado= (int)(b * c) % a * -b / c + d - a % d;
	
	cout<< "\nEl resultado es: "<<resultado;
	
	return 0;
}
