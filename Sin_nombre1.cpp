#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main(){ 
int ejercicio,m,n,h,i,j,k,a,b,c,d;
double x,y,det,matriz[5][5]; 
do {
	cout<<"que ejercicio desea realizar"<<endl;
	cin>>ejercicio;
	switch(ejercicio) {
	case 1:
		cout<<"Solucion sistema 2 incognitas"<<endl<<endl;
		cout<<"Primera Ecuacion"<<endl<<endl;
		cout<<"Ingrese el coeficiente de x: "<<endl;
		cin>>matriz[0][0];
		cout<<"Ingrese el coeficiente de y: "<<endl;
		cin>>matriz[0][1];
		cout<<"Ingrese el valor del termino independiente: "<<endl;
		cin>>matriz[0][2];
		cout<<"Segunda Ecuacion"<<endl<<endl;
		cout<<"Ingrese el coeficiente de x: "<<endl;
		cin>>matriz[1][0];
		cout<<"Ingrese el coeficiente de y: "<<endl;
		cin>>matriz[1][1];
		cout<<"Ingrese el valor del termino independiente: "<<endl;
		cin>>matriz[1][2];
		det=matriz[0][0]*matriz[1][1]-matriz[0][1]*matriz[1][0]; 
		x=(matriz[0][2]*matriz[1][1]-matriz[0][1]*matriz[1][2])/det; 
		y=(matriz[0][0]*matriz[1][2]-matriz[0][2]*matriz[1][0])/det; 
		cout<<"valor de X="<<x<<endl; 
		cout<<"valor de Y="<<y<<endl;
		break;
	case 2:
		cout<<"inversa de una matriz 2x2"<<endl<<endl;
		m=2,n=2;
		for(int i=0; i<n; i++){
			for(int j = 0; j<m; j++){
				cin>>matriz[i][j];
		}}
		det=matriz[0][0]*matriz[1][1]-matriz[0][1]*matriz[1][0];
		if (det=0){
			cout<<"la matriz no tiene inversa"<<endl<<endl;
		}det=matriz[0][0]*matriz[1][1]-matriz[0][1]*matriz[1][0]; 
		a=(1/det)*matriz[1][1], b=(-1/det)*matriz[0][1], c=(-1/det)*matriz[1][0], d=(1/det)*matriz[0][0];
		matriz[0][0]=a, matriz[0][1]=b, matriz[1][0]=c, matriz[1][1]=d;
		cout<<"la matriz inversa es: ";
		for(int i=0; i<n; i++){
			cout<<endl;
			for(int j = 0; j<m; j++){
				cout<<matriz[i][j]<<"\t";
		}}
	default:
		cout<<"no se reviso nada"<<endl<<endl;
		break;
}
	cout<<"1 para repetir";
	cin>>ejercicio;
} while(ejercicio==1);
return 0;
} 
