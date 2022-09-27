#include <iostream>

using namespace std;

int main(){
	bool p, q, r ;
	
	cout<<"introducir un valor de 0 o 1 para p: "; cin>>p;
	cout<<"introducir un valor de 0 o 1 para q: "; cin>>q;
	cout<<"introducir un valor de 0 o 1 para r: "; cin>>r;
	
	 if(p==1&&q==1&&r==1){
	 	cout<<"El valor de verdad para la expresion p||q&&r es: "<<true<<endl;
	 }
	 else if(p==1&&q==1&&r==0){
	 	cout<<"El valor de verdad para la expresion p||q&&r es: "<<true<<endl;
	 }
	 else if(p==1&&q==0&&r==1){
	 	cout<<"El valor de verdad para la expresion p||q&&r es: "<<true<<endl;
	 }
	 else if(p==1&&q==0&&r==0){
	 	cout<<"El valor de verdad para la expresion p||q&&r es: "<<true<<endl;
	 }
	 else if(p==0&&q==1&&r==1){
	 	cout<<"El valor de verdad para la expresion p||q&&r es: "<<true<<endl;
	 }
	 else if(p==0&&q==1&&r==0){
	 	cout<<"El valor de verdad para la expresion p||q&&r es: "<<false<<endl;
	 }
	 else if(p==0&&q==0&&r==1){
	 	cout<<"El valor de verdad para la expresion p||q&&r es: "<<false<<endl;
	 }
	 else if(p==0&&q==0&&r==0){
	 	cout<<"El valor de verdad para la expresion p||q&&r es: "<<false<<endl;
	 }
	return 0;
}
