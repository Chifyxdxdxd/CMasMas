#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double Q1,Q2,r,F=0,K=(9*pow(10,-9)); 
		
	cout<< "digite la carga No.1: " ; 
	cin>>Q1;
	cout<< "digite la carga No.2: " ; 
	cin>>Q2;
	cout<< "digite la distancia entre ellas: "; 
	cin>>r;
	

	F= K*((Q1*Q2)/(pow(r,2)));
	
	cout<< "\nEl resultado es: "<<F;
	
	return 0;
}
