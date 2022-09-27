#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;

int main(){
int k,n,m,i,j,a,x,y;
double b,c,d,A,B;
do{
	cout<<"cual ejercicio va a revisar?"<<endl;
	cin>>k;
	switch (k){
		case 1:
			cout<<"EJERCICIO LISTA CUADRADOS"<<endl<<endl;
			do{
				cout<<"hasta que numero es la lista?"<<endl;
				cin>>x;
			}while (x<=0); 
			y=1;
			while (y<=x){
				cout<<y<<"\t"<<y*y<<endl;
				y++;		
			}break;
		case 2:
			cout<<"EJERCICIO LISTA IMPAR-PAR"<<endl<<endl;
			do{
				cout<<"hasta que numero es la lista?"<<endl;
				cin>>x;
			}while (x<=0);
			y=1;
			while (y<=x){
				if ((y%2)==1)cout<<y<<endl;
				y++;
			}y=1;
			while (y<=x){
				if ((y%2)==0)cout<<y<<endl;
				y++;
			}break;
		case 3:
			cout<<"EJERCICIO NUMEROS PARES MENOS QUE N"<<endl<<endl;
			do{
				cout<<"hasta que numero es la lista?"<<endl;
				cin>>x;
			}while (x<=0);
			while (x>=2){
				if ((x%2)==0)cout<<x<<endl;
				x--;
			}break;
		case 4:
			cout<<"EJERCICIO FIBONACCI"<<endl<<endl;
			do{
				cout<<"hasta que numero es la lista?"<<endl;
				cin>>x;
			}while (x<=0);
			n=0, m=1, y=0;
			cout<<n<<endl<<m<<endl;
			while (y<=x){
				b=n+m;
				cout<<b<<endl;
				m=n, n=b, y++;
			}break;
		case 5:
			cout<<"EJERCICIO FACTORIAL"<<endl<<endl;
			do{
				cout<<"hasta que numero es la lista?"<<endl;
				cin>>x;
			}while (x<=0);
			n=1, m=1, y=0;
			while (y<=x){
				b=b*n;
				cout<<b<<endl;
				n+=1, y++;
			}break;
		case 6:
			cout<<"EJERCICIO POTENCIA DE 2"<<endl<<endl;
			do{
				cout<<"cual es la potencia?"<<endl;
				cin>>x;
			}while (x<0); 
			if (x==0) {cout<<"n=1"<<endl;return 0;}
			if (x==1) {cout<<"n="<<n<<endl;return 0;}
			n=2;
			while (x>1){
				n*=2,x--;
			}if (x!=0)cout<<"n="<<n<<endl;
			break;
		case 7:
			cout<<"EJERCICIO POTENCIA DE n"<<endl<<endl;
			do{
				cout<<"cual es la potencia?"<<endl;
				cin>>x;
				cout<<"cual es el numero para potenciar?"<<endl;
				cin>>n;
			}while (x<0||n<=0); 
			if (x==0) {cout<<"n=1"<<endl;return 0;}
			if (x==1) {cout<<"n="<<n<<endl;return 0;}
			m=n;
			while (x>1){
				m*=n,x--;
			}if (x!=0)cout<<"n="<<m<<endl;
			break;
	return 0;
		case 8:
			cout<<"EJERCICIO POBLACION A Y B"<<endl<<endl;
			while (x<=0);
			A=25, B=19.9, y=2010;
			while (A>B){
				A=A+(A*0.02), B=B+(B*0.03);
				y++;
			}cout<<"en ano en que B tiene mas poblacion es: "<<y<<endl;
			break;
		case 9:
			cout<<"EJERCICIO CLAVE CON WHILE"<<endl;
			cout<<"diigite un numero"<<endl;
			cin>>x;
			if (x<0)y=(-1);
			else{
				while (x>=0){
					y+=x%10,x/=10;
					if (x<1) break;
				}y%=7;
			}cout<<"su clave es: "<<y<<endl;
			break;
		case 10:
			cout<<"EJERCICIO TABLAS DE MULTIPLICAR"<<endl<<endl;
			do{
				cout<<"hasta que numero es la lista?"<<endl;
				cin>>x;
			}while (x<=0); y=1;
			while (y<=x){
				cout<<y<<" x 1 = "<<y*1<<endl;
				cout<<y<<" x 2 = "<<y*2<<endl;
				cout<<y<<" x 3 = "<<y*3<<endl;
				cout<<y<<" x 4 = "<<y*4<<endl;
				cout<<y<<" x 5 = "<<y*5<<endl;
				cout<<y<<" x 6 = "<<y*6<<endl;
				cout<<y<<" x 7 = "<<y*7<<endl;
				cout<<y<<" x 8 = "<<y*8<<endl;
				cout<<y<<" x 9 = "<<y*9<<endl;
				cout<<y<<" x 10 = "<<y*10<<endl;
				y++;cout<<"--------------"<<endl;
			}break;
		case 11:
			cout<<"EJERCICIO MULTIPLOS EN RANGO"<<endl<<endl;
			do{
				cout<<"ingrese el valor minimo del rango"<<endl;
				cin>>x;
			}while (x<0);
			do{
				cout<<"ingrese el valor maximo del rango"<<endl;
				cin>>y;
			}while (y<x);
			do{
				cout<<"los multiplos son de?"<<endl;
				cin>>n;
			}while (n<0);
			while (m<=y){
				if ((m%n)==0 && m<y && m>x )cout<<m<<",\t";
				m++;
			}break;
		default:
			cout<<"no se reviso ningun ejercicio"<<endl<<endl;
			break;
	}cout<<"\n \n1 para repetir"<<endl<<endl;
	cin>>k;
	}while (k==1);
	return 0;
}
