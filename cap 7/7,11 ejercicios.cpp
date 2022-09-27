#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    double a,b,c;
    cout<<"Ingrese una longitud \n";
    cin>>a;
    cout<<"Ingrese una longitud \n";
    cin>>b;
    cout<<"Ingrese una longitud \n";
    cin>>c;
    if (!a>0 || !b>0 || !c>0){
    	cout<<"datos no validos";
	}else if((abs(a - c) < b) && (b < (a + c))) {
        cout<<"Si construye un triangulo";
       }else{
        cout<<"No construye un triangulo";
	}return 0;
}
