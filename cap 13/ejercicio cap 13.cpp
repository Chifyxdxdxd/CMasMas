#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main(){ 
int ejercicio,m,n,h,i,j,k,a,b,c,d,e,f,g,o,p,q;
double x,y,z,det,matriz[50][50], matriz2[50][50], matriz3[50][50]; 
do {
	cout<<"que ejercicio desea realizar"<<endl;
	cin>>ejercicio;
	switch(ejercicio) {
	case 1:
		cout<<"SISTEMA 2 INCOGNITAS"<<endl<<endl;
		cout<<"Primera Ecuacion"<<endl<<endl;
		cout<<"coeficiente de x: "<<endl;
		cin>>matriz[0][0];
		cout<<"coeficiente de y: "<<endl;
		cin>>matriz[0][1];
		cout<<"termino independiente: "<<endl;
		cin>>matriz[0][2];
		cout<<"Segunda Ecuacion"<<endl<<endl;
		cout<<"coeficiente de x: "<<endl;
		cin>>matriz[1][0];
		cout<<"coeficiente de y: "<<endl;
		cin>>matriz[1][1];
		cout<<"termino independiente: "<<endl;
		cin>>matriz[1][2];
		det=matriz[0][0]*matriz[1][1]-matriz[0][1]*matriz[1][0]; 
		x=(matriz[0][2]*matriz[1][1]-matriz[0][1]*matriz[1][2])/det; 
		y=(matriz[0][0]*matriz[1][2]-matriz[0][2]*matriz[1][0])/det; 
		cout<<"valor de X="<<x<<endl; 
		cout<<"valor de Y="<<y<<endl;
		break;
	case 2:
		cout<<"INVERSA DE UNA MATRIZ 2X2"<<endl<<endl;
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
		cout<<"la matriz inversa es: "<<endl;
		for(int i=0; i<n; i++){
			cout<<endl;
			for(int j = 0; j<m; j++){
				cout<<matriz[i][j]<<"\t";
		}}break;
	case 3:
		cout<<"DETERMINANTE MATRIZ 3X3"<<endl<<endl;
		m=3,n=3;
		for(int i=0; i<n; i++){
			for(int j = 0; j<m; j++){
				cout<<"valor de A"<<i+1<<j+1<<endl;
				cin>>matriz[i][j];
		}}det=matriz[0][0]*matriz[1][1]*matriz[2][2]+matriz[1][0]*matriz[2][1]*matriz[0][2]+matriz[2][0]*matriz[0][1]*matriz[1][2]-matriz[0][2]*matriz[1][1]*matriz[2][0]-matriz[1][2]*matriz[2][1]*matriz[0][0]-matriz[1][0]*matriz[2][2]*matriz[0][1];
		cout<<"el determinante de su matriz 3x3 es: "<<det<<endl; 
		cout<<"su matriz es: "<<endl;
		for(int i=0; i<n; i++){
			cout<<endl;
			for(int j = 0; j<m; j++){
				cout<<matriz[i][j]<<"\t";
		}}break;
	case 4:
		m=4,n=3;
		cout<<"SISTEMA 3 INCOGNITAS"<<endl<<endl;
		cout<<"Primera ecuacion"<<endl<<endl;
 		cout<<"coeficiente de x: ";
		cin>>matriz[0][0];
		cout<<endl<<"coeficiente de y: ";
		cin>>matriz[0][1];
		cout<<endl<<"coeficiente de z: ";
		cin>>matriz[0][2];
		cout<<endl<<"termino independiente: ";
		cin>>matriz[0][3];
		cout<<endl<<"Segunda ecuacion"<<endl<<endl;
		cout<<"coeficiente de x: ";
		cin>>matriz[1][0];
		cout<<endl<<"coeficiente de y: ";
		cin>>matriz[1][1];
		cout<<endl<<"coeficiente de z: ";
		cin>>matriz[1][2];
		cout<<endl<<"termino independiente: ";
		cin>>matriz[1][3];
		cout<<endl<<"Tercera ecuacion"<<endl<<endl;
		cout<<"coeficiente de x: ";		
		cin>>matriz[2][0];
		cout<<endl<<"coeficiente de y: ";
		cin>>matriz[2][1];
		cout<<endl<<"coeficiente de z: ";
		cin>>matriz[2][2];
		cout<<endl<<"termino independiente: ";
		cin>>matriz[2][3];
		det=matriz[0][0]*matriz[1][1]*matriz[2][2]+matriz[1][0]*matriz[2][1]*matriz[0][2]+matriz[2][0]*matriz[0][1]*matriz[1][2]-matriz[0][2]*matriz[1][1]*matriz[2][0]-matriz[1][2]*matriz[2][1]*matriz[0][0]-matriz[1][0]*matriz[2][2]*matriz[0][1];
		x=(matriz[0][3]*matriz[1][1]*matriz[2][2]+matriz[0][1]*matriz[1][2]*matriz[2][3]+matriz[0][2]*matriz[1][3]*matriz[2][1]-matriz[0][2]*matriz[1][1]*matriz[2][3]-matriz[0][1]*matriz[1][3]*matriz[2][2]-matriz[0][3]*matriz[1][2]*matriz[2][1])/det;
		y=(matriz[0][0]*matriz[1][3]*matriz[2][2]+matriz[0][3]*matriz[1][2]*matriz[2][0]+matriz[0][2]*matriz[1][0]*matriz[2][3]-matriz[0][2]*matriz[1][3]*matriz[2][0]-matriz[0][3]*matriz[1][0]*matriz[2][2]-matriz[0][0]*matriz[1][2]*matriz[2][3])/det;
		z=(matriz[0][0]*matriz[1][1]*matriz[2][3]+matriz[0][1]*matriz[1][3]*matriz[2][0]+matriz[0][3]*matriz[1][0]*matriz[2][1]-matriz[0][3]*matriz[1][1]*matriz[2][0]-matriz[0][1]*matriz[1][0]*matriz[2][3]-matriz[0][0]*matriz[1][3]*matriz[2][1])/det;
		cout<<endl<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;
		cout<<"z="<<z<<endl;
		cout<<"su matriz es: "<<endl;
		for(int i=0; i<n; i++){
			cout<<endl;
			for(int j = 0; j<m; j++){
				cout<<matriz[i][j]<<"\t";
		}}break;
	case 5:	
		cout<<"TRAZA DE UNA MATRIZ"<<endl<<endl;
		cout<<"cual es el tamano de la matriz?"<<endl;
		cin>>m;
		cin>>n;
		if (m!=n){
			cout<<"matriz no valida"<<endl;
		do{
		cout<<"cual es el tamano de la matriz?"<<endl;
		cin>>m;
		cin>>n;
		}while (m!=n);
		}cout<<"cuales oson los valores de la matriz?"<<endl;
		for(int i=0; i<n; i++){
			for(int j = 0; j<m; j++){
				cout<<"valor de A"<<i+1<<j+1<<endl;
				cin>>matriz[i][j];
		}}for (int i=0;i<n;i++, j++){
			det+=matriz[i][j];
		}cout<<"su matriz es: "<<endl;
		for(int i=0; i<n; i++){
			cout<<endl;
			for(int j = 0; j<m; j++){
				cout<<matriz[i][j]<<"\t";
		}}cout<<endl<<"la traza de la matriz es: "<<det<<endl;
		break;
	case 6:	
		cout<<"SUMA DE UNA COLUMNA"<<endl<<endl;
		cout<<"cual es el tamano de la matriz?"<<endl;
		cin>>m;
		cin>>n;
		cout<<"cuales son los valores de la matriz?"<<endl;
		for(int i=0; i<n; i++){
			for(int j = 0; j<m; j++){
				cout<<"valor de A"<<i+1<<j+1<<endl;
				cin>>matriz[i][j];
		}}cout<<"cual columna desea sumar?"<<endl;
		cin>>k;
		if (k>n||k<=0){
			cout<<"columna no valida"<<endl;
		do{
		cout<<"cual columna desea sumar?"<<endl;
		cin>>k;
		}while (k>n||k<=0);
		}for(int i = 0; i<n; i++){
			det+=matriz[i][k-1];
		}cout<<"su matriz es: "<<endl;
		for(int i=0; i<n; i++){
			cout<<endl;
			for(int j = 0; j<m; j++){
				cout<<matriz[i][j]<<"\t";
		}}cout<<endl<<"la suma de la columna es: "<<det<<endl;
		break;	
	case 7:	
		cout<<"SUMA DE UNA FILA"<<endl<<endl;
		cout<<"cual es el tamano de la matriz?"<<endl;
		cin>>m;
		cin>>n;
		cout<<"cuales son los valores de la matriz?"<<endl;
		for(int i=0; i<n; i++){
			for(int j = 0; j<m; j++){
				cout<<"valor de A"<<i+1<<j+1<<endl;
				cin>>matriz[i][j];
		}}cout<<"cual fila desea sumar?"<<endl;
		cin>>k;
		if (k>n||k<=0){
			cout<<"fila no valida"<<endl;
		do{
		cout<<"cual fila desea sumar?"<<endl;
		cin>>k;
		}while (k>n||k<=0);
		}for(int j = 0; j<m; j++){
			det+=matriz[k-1][j];
		}cout<<"su matriz es: "<<endl;
		for(int i=0; i<n; i++){
			cout<<endl;
			for(int j = 0; j<m; j++){
				cout<<matriz[i][j]<<"\t";
		}}cout<<endl<<"la suma de la fila es: "<<det<<endl;
		break;
	case 8:
		cout<<"SUMA DE DOS MATRICES"<<endl<<endl;
		do {
		cout<<"cual es el tamano de la primera matriz?"<<endl;
		cin>>m;
		cin>>n;
		cout<<"cual es el tamano de la segunda matriz?"<<endl;
		cin>>o;
		cin>>p;
		if (o!=m&&p!=n) cout<<"matrices no validas, introdusca unas validas"<<endl;
		}while (o!=m&&p!=n);
		cout<<"cuales son los valores de la primera matriz?"<<endl;
		for(int i=0; i<n; i++){
			for(int j = 0; j<m; j++){
				cout<<"valor de A"<<i+1<<j+1<<endl;
				cin>>matriz[i][j];
		}}cout<<"cuales son los valores de la segunda matriz?"<<endl;
		for(int i=0; i<p; i++){
			for(int j = 0; j<o; j++){
				cout<<"valor de A"<<i+1<<j+1<<endl;
				cin>>matriz2[i][j];
		}}cout<<endl<<"la primera matriz es matriz es: "<<endl;
		for(int i=0; i<n; i++){
			cout<<endl;
			for(int j = 0; j<m; j++){
				cout<<matriz[i][j]<<"\t";
		}}cout<<endl<<"la segunda matriz es  matriz es: "<<endl;
		for(int i=0; i<p; i++){
			cout<<endl;
			for(int j = 0; j<o; j++){
				cout<<matriz2[i][j]<<"\t";
		}}for(int i=0; i<p; i++){
			for(int j = 0; j<o; j++){
				matriz3[i][j]=matriz[i][j]+matriz2[i][j];
		}}cout<<endl<<"la suma de las matrices es: "<<endl;
		for(int i=0; i<n; i++){
			cout<<endl;
			for(int j = 0; j<m; j++){
				cout<<matriz3[i][j]<<"\t";
		}}break;
	case 9:
		cout<<"MATRIZ TRASPUESTA"<<endl<<endl;
		cout<<"cual es el tamano de la matriz?"<<endl;
		cin>>m;
		cin>>n;
		cout<<"cuales son los valores de la matriz?"<<endl;
		for(int i=0; i<n; i++){
			for(int j = 0; j<m; j++){
				cout<<"valor de A"<<i+1<<j+1<<endl;
				cin>>matriz[i][j];
				matriz2[j][i]=matriz[i][j];
		}}cout<<endl<<"la matriz es: "<<endl;
		for(int i=0; i<n; i++){
			cout<<endl;
			for(int j = 0; j<m; j++){
				cout<<matriz[i][j]<<"\t";
		}}cout<<endl<<"la traspuesta de la matriz es: "<<endl;
		for(int i=0; i<m; i++){
			cout<<endl;
			for(int j = 0; j<n; j++){
				cout<<matriz2[i][j]<<"\t";
		}}break;
	case 10:
		cout<<"PRODUCTO DE DOS MATRICES"<<endl<<endl;
		do {
		cout<<"cual es el tamano de la primera matriz?"<<endl;
		cin>>n;
		cin>>m;
		cout<<"cual es el tamano de la segunda matriz?"<<endl;
		cin>>o;
		cin>>p;
		if (o!=m) cout<<"matrices no validas, introdusca unas validas"<<endl;
		}while (o!=m);
		cout<<"cuales son los valores de la primera matriz?"<<endl;
		for(int i=0; i<n; i++){
			for(int j = 0; j<m; j++){
				cout<<"valor de A"<<i+1<<j+1<<endl;
				cin>>matriz[i][j];
		}}cout<<"cuales son los valores de la segunda matriz?"<<endl;
		for(int i=0; i<p; i++){
			for(int j = 0; j<o; j++){
				cout<<"valor de A"<<i+1<<j+1<<endl;
				cin>>matriz2[i][j];
		}}cout<<endl<<"la primera matriz es matriz es: "<<endl;
		for(int i=0; i<n; i++){
			cout<<endl;
			for(int j = 0; j<m; j++){
				cout<<matriz[i][j]<<"\t";
		}}cout<<endl<<"la segunda matriz es  matriz es: "<<endl;
		for(int i=0; i<p; i++){
			cout<<endl;
			for(int j = 0; j<o; j++){
				cout<<matriz2[i][j]<<"\t";
		}}for (i=0;i<n;i++){
			for (j=0;j<m;j++){
    		    for (k=0;k<o;k++){
				matriz3[i][j]+=matriz[i][k-1]*matriz2[k-1][j];
    	}}}cout<<endl<<"el producto de las matrices es: "<<endl;
		for(int i=0; i<n; i++){
			cout<<endl;
			for(int j = 0; j<m; j++){
				cout<<matriz3[i][j]<<"\t";
		}}break;
	case 11:
		cout<<"MATRIZ MAGICA"<<endl<<endl;
		cout<<"cual es el tamano de la matriz?"<<endl;
		cin>>n;
		m=n, y=0;
		cout<<"cuales son los valores de la matriz?"<<endl;
		for(int i=0; i<n; i++){
			for(int j = 0; j<m; j++){
				cout<<"valor de A"<<i+1<<j+1<<endl;
				cin>>matriz[i][j];
		}}cout<<endl<<"la matriz es: "<<endl;
		for(int i=0; i<n; i++){
			cout<<endl;
			for(int j = 0; j<m; j++){
				cout<<matriz[i][j]<<"\t";
		}}for (i=0;i<n;i++){
			x=0;
			for (j=0;j<m;j++){
    		    x+=matriz[j][i];
    		}if (i==0) y=x;
			else if (y!=x) a=-1;
    	}a=x; 
		for (i=0;i<n;i++){
			x=0;
			for (j=0;j<m;j++){
    		    x+=matriz[i][j];
    		}if (i==0) y=x;
			else if (y!=x) b=-1;
		}b=x, x=0, y=0; 
		for (i=0;i<n;i++){
			x+=matriz[i][i];
    	}for (j=0;j<m;j++){
    		y+=matriz[i][m-i-1];
    	}if (i==0) y=x;
		else if (y!=x) c=-1;
		c=x;
		if(a==b && a==c && a!=-1){
			cout<<"la matriz es magica"<<endl;
		}else{
			cout<<"la matriz no es magica"<<endl;
		}break;
	case 12:
		cout<<"CAMBIO DE MATRIZ"<<endl<<endl;
		cout<<"cual es el tamano de la matriz?"<<endl;
		cin>>n;
		cin>>m;
		cout<<"cuales son los valores de la matriz?"<<endl;
		for(int i=0; i<n; i++){
			for(int j = 0; j<m; j++){
				cout<<"valor de A"<<i+1<<j+1<<endl;
				cin>>matriz[i][j];
		}}cout<<"cual es el numero para remplazar?"<<endl;
		cin>>x;
		cout<<endl<<"la matriz es: "<<endl;
		for(int i=0; i<n; i++){
			cout<<endl;
			for(int j = 0; j<m; j++){
				cout<<matriz[i][j]<<"\t";
		}}for(int i=0; i<n; i++){
			for(int j = 0; j<m; j++){
				if (matriz[i][j]<=x) matriz[i][j]=0;
				else matriz[i][j]=1;
		}}cout<<endl<<"la matriz cambiada es: "<<endl;
		for(int i=0; i<n; i++){
			cout<<endl;
			for(int j = 0; j<m; j++){
				cout<<matriz[i][j]<<"\t";
		}}break;
	case 13:
		cout<<"MATRIZ MARCO"<<endl<<endl;
		cout<<"cual es el tamano de la matriz?"<<endl;
		cin>>n;
		m=n;
		for(int i=0; i<n; i++){
			for(int j = 0; j<m; j++){
				if (i==0||(i+1)==n||j==0||(j+1)==m) matriz[i][j]=1;
				else matriz[i][j]=0;
		}}cout<<endl<<"la matriz es: "<<endl;
		for(int i=0; i<n; i++){
			cout<<endl;
			for(int j = 0; j<m; j++){
				cout<<matriz[i][j]<<"\t";
		}}break;

	default:
		cout<<"no se reviso nada"<<endl<<endl;
		break;
}
	cout<<endl<<"1 para repetir"<<endl<<endl;
	cin>>ejercicio;
} while(ejercicio==1);
return 0;
} 
