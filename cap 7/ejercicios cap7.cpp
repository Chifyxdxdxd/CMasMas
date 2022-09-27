#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

double vector(double x, double cx, double y, double cy){
	return sqrt(pow((x-cx),2)+pow((y-cy),2));
}
int main (){
	int e, j, h, m, n;
	double a, b, c, x, y, z, A, B, C, D, a1, b2, c3, cx, cy, r, v, aux1, aux2, aux3;
	cout<<"numero del ejercicio que quiere verificar";
	cin>>e;
	switch (e){
		case 1:
			cout<< "cual es el area del corral? (metros cuadrados) \n";
			cin>> x;
			cout<< "cuntas gallinas hay en el corrar? \n";
			cin>> y;
			if(x<=0 || y<=0){
				cout<<"datos no validos";
			}else {
				a=y/x;
				cout<< "el area que le corresponde a cada gallina es "<<a<<" metros cuadrados.";
			}break;
		case 2:
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
			}break;
		case 3:
			cout<<"cual es la longitud del brazo largo? (cm)";
			cin>>a;
			cout<<"cual es la longitud del brazo corto? (cm)";
			cin>>b;
			cout<<"cual es el peso ubicado en el brazo largo? (kg)";
			cin>>x;
			if(a<=0 || b<=0 || x<=0){
				cout<<"datos no validos";
			}else {
				y=(a*x)/b;
				cout<<"se necesita un peso ubidaco en le brazo corto de "<<y<<" kg";
			}break;
		case 4:
			cout<<"cual es la longitud del brazo largo? (cm)";
			cin>>a;
			cout<<"cual es la longitud del brazo corto? (cm)";
			cin>>b;
			cout<<"cual es el peso ubicado en el brazo corto? (kg)";
			cin>>y;
			if(a<=0 || b<=0 || y<=0){
				cout<<"datos no validos";
			}else {
				x=(b*y)/a;
				cout<<"se necesita un peso ubidaco en le brazo largo de "<<x<<" kg";
			}break;
		case 5:
			cout<<"cual es la longitud del brazo corto? (cm)";
			cin>>b;
			cout<<"cual es el peso ubicado en el brazo largo? (kg)";
			cin>>x;
			cout<<"cual es el peso ubicado en el brazo corto? (kg)";
			cin>>y;
			if(b<=0 || x<=0 || y<=0){
				cout<<"datos no validos";
			}else {	
				a=(b*y)/x;
			cout<<"se necesita un brazo largo de  longitud "<<a<<" cm";
			}break;
		case 6:
			cout<<"cual es la longitud del brazo largo? (cm)";
			cin>>a;
			cout<<"cual es el peso ubicado en el brazo largo? (kg)";
			cin>>x;
			cout<<"cual es el peso ubicado en el brazo corto? (kg)";
			cin>>y;
			if(a<=0  || x<=0 || y<=0){
				cout<<"datos no validos";
			}else {
			b=(a*x)/y;
			cout<<"se necesita un brazo corto de  longitud "<<b<<" cm";
			}break;
		case 7:
			cout<<"cuantos litros de D se quieren obtener?";
			cin>>D;
			A=D*5/20, B=D*8/20, C=D*7/20;		
			cout<<"para 10 litros de D se necesitan \n"<<A<<" litros de A \n"<<B<<" litros de B \n"<<C<<" litros de C";
			break;
		case 8:
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
			}break;	
		case 9:
			cout<<"cuantas mujeres hay? \n";
			cin>>m;
			cout<<"cuantos hombres hay? \n";
			cin>>h;
			if((h+m)!=100){
				cout<<"datos no validos";
				return 0;
			}cout<<"cuantas mesas hay? \n";
			cin>>n;
			m=100-h, aux1=m/n, aux2=h/n, aux3=abs(aux1-aux2);
			if (aux3>2){
				cout<<"la diferencia entre hombres y mujeres por mesa es demasiada";
				return 0;
			}cout<<"son "<<aux1<<" sillas para mujeres y "<<aux2<<" sillas para hombres por mesa \n";
			cout<<"cual voto vale mas mujeres (1) u hombres (2)? \n ";
			cin>>n;
			switch (n){
				case 1:
					aux3=100, aux2=(aux3+2)/2.5;
					cout<<"el numero de votos de mujeres que se necesita para ganar es: "<<aux2<<endl;
					break;
				case 2:
					aux3=100, aux1=(aux3-2)/2.5, aux2=aux3-aux1;
					cout<<"el numero de votos de mujeres que se necesita para ganar es: "<<aux2<<endl;
					break;
				default:
					cout<<"datos no validos";
				}break;
		case 10:	
			cout<<"Cual es la coordenada x del centro del circulo? \n";
			cin>>cx;
			cout<<"Cual es la coordenada y del centro del circulo? \n";
			cin>>cy;
			cout<<"Cual es el radio del circulo? \n";
			cin>>r;
			cout<<"Cual es la coordenada x del punto? \n";
			cin>>x;
			cout<<"Cual es la coordenada y del punto? \n";
			cin>>y;
			v=vector(x,cx,y,cy);
			if (v<=r){
				cout<<"si pertenece al circulo";
			}else {
				cout<<"no pertenece al circulo";
			}break;
		case 11:	
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
			}break;
		case 12:
			cout<<"ingrese un caracter \n";
			cin>>j;
			switch(j){
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
					cout<<"es un digito";	
					break;
			default:
					cout<<"no es un digito";
			}break;
		default:
			cout<<"no se revisaran ejercicios";
}system ("pause");
return 0;
}
