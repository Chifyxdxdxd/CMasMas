#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int k, b, c, A, B, D, res, s, i, z, q, v, n, m, w, d, f, g, h;
	bool P, Q, R, o;
	double Q1, Q2, r, F, K, a, C;
	cout<<"cual ejercicio quiere revisar? \n";
	cin>>k;
	switch (k){
		case 1:
			cout<<"introducir un valor de 0 o 1 para p: \n"; cin>>P;
			cout<<"introducir un valor de 0 o 1 para q: \n"; cin>>Q;
			cout<<"introducir un valor de 0 o 1 para r: \n"; cin>>R;
			o=P||Q&&R;
			cout<<"p||q&&r es "<<o<<endl;
			break;
		case 2:
			F=0, K=(9*pow(10,-9));
			cout<< "cual es la carga No.1: \n"; 
			cin>>Q1;
			cout<< "cual es la carga No.2: \n" ; 
			cin>>Q2;
			cout<< "cual es la distancia entre ellas: \n"; 
			cin>>r;
			F= K*((Q1*Q2)/(pow(r,2)));
			cout<< "El resultado es: "<<F;
			break;
		case 3:
			b=-2, c=3, a=0.5, r=0;
			r=-b+b*b%3-4*a*c/2*a;	
			cout<< "el resultado es: "<<r;
			break;
		case 4:
			A=3, B=10, C=0.5, D=4, res=0;
			res= (int)(B * C) % A * -B/ C + D - A % D;
			cout<< "El resultado es: "<<res;
			break;
		case 5:
			s=0, i=0;
			z= s += i, q= i++, c= s += i, v= i++, b= s += i, n= i++, m= s += i, A= i++, w= s += i, d= i++, f= s += i, g= i++, h= s += i;	
			cout<<z<<endl<<q<<endl<<c<<endl<<v<<endl<<b<<endl<<n<<endl<<m<<endl<<A<<endl<<w<<endl<<d<<endl<<f<<endl<<g<<endl<<h<<endl;
			break;
		default:
			cout<<"saliendo del programa";
			break;
	}return 0;
}
