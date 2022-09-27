#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <ctime>
using namespace std;

void liberar_arreglo (double* x, int n) {
	delete [] x;
	return;
}
double leer_double (istream& is) {
	double a;
	is>>a;
	return a;
}
double* leer_arreglo_double (istream& is, double* x, int n) {
	for (int i = 0; i < n; i++){
	x[i] = leer_double (is);
	}
	return x;
}
double val_min (double* x, int n) {
	if (n == 1) {
		return x[0];
	}
	double M = val_min(x,n-1);
	if (M < x[n - 1]) {
		return M;
	}return x[n - 1];
}
 
int pos_min (double* x, int n) {
	if(n == 1){
	return 0;
	}
	int k = pos_min(x, n - 1);
	if(x[k] < x[n - 1]){
		return k;
	}
	return (n - 1);
}
double val_min1 (double* x, int n) {
	double M = x[0];
	for (int i = 0; i<n; i++) {		
		if (M>x[i]) {			
			M=x[i];			
		}		
	}return M;	
}
 
int pos_min1 (double* x, int n) {
	int k = 0;	
	for (int i = 0; i<n; i++) {		
		if (x[k]>x[i]) {			
			k=i;
			}		
	}return k;	
}
double cuadrado (double x) {	
	return x*x;	
}double sumatoria (double* x, int n) {
	double s = 0;
	for (int i = 0; i<n; i++) {
		s += x[i];
	}return s;
}

double promedio (double* x, int n) {
	return sumatoria (x,n)/n;
}
void liberar_arreglo_double (double* x, int n) {
	delete [] x;
	return;
}
double varianza (double* x, int n) {
	double* y = new double [n];
	for (int i = 0;i<n;i++) {
		y[i] = cuadrado (x[i]- promedio(x,n));
	}double s = sumatoria (y,n);
	liberar_arreglo_double (y,n);
	return s/(n-1);
}
int leer_int (istream& is) {
	int a;
	is>>a;
	return a;
}
ostream& escribir_int (ostream& os, int a) {
	os<<a;
	return os;
}
ostream& escribir_char (ostream& os, char a) {
	os<<a;
	return os;
}

ostream& escribir_arreglo_int (ostream& os, int* x, int n) {
	for (int i = 0; i<n; i++){
		escribir_int (os,x[i]);
		escribir_char (os,'\t');
	}return os;	 
}

bool* criba (bool* x, int n) {
	x[0] = false;
	x[1] = false;
	for (int i = 2;i<=n;i++) {
		x[i] = true;
	}for (int i = 2; i*i<=n;i++) {
		if (x[i]) {
			for (int j = 2; i*j <= n; j++) {
				x[i*j] = false;
			}			
		}		
	}return x;	
}
ostream& escribir_double (ostream& os, double a) {
	os<<a;
	return os;
}
ostream& escribir_arreglo_double (ostream& os, double* x, int n){
	for (int i = 0; i<n; i++){
		escribir_double (os,x[i]);
		escribir_char (os,'\t');
	}
}
double* producto_escalar (double* x, int n, double a) {
	for (int i = 0; i<n; i++) {
		x[i] *= a;
	}
	return x;
}
int* leer_arreglo_int (istream& is, int* x, int n) {
	for (int i = 0; i < n; i++){
		x[i] = leer_int (is);
	}return x;
}
double* suma_vectores (double* x, double* y, int n) {
	for (int i = 0; i<n; i++) {
		x[i] = x[i] + y[i];
	}
	return x;
}
double* resta_vectores (double* x, double* y, int n) {	
	for (int i = 0; i<n; i++) {
		x[i] = x[i] - y[i];
	}
	return x;
}
double* producto_directo (double* x, double* y, int n) {
	for (int i = 0; i<n; i++) {
		x[i] = x[i] * y[i];
	}return x;
}
double val_max (double* x, int n) {
	if (n == 1) {
		return x[0];
	}double M = val_max(x,n-1);
	if (M > x[n - 1]) {
		return M;
	}return x[n - 1];
}
int pos_max (double* x, int n) {
	if(n == 1){
		return 0;
	}
	int k = pos_max(x, n - 1);
	if(x[k] > x[n - 1]){
		return k;
	}
	return (n - 1);
}
double* ceros (double* x, int n) {
	int k;
	for (int s = 0; s<n-1; s++) {
		for (int i = 0; i<n-1; i++) {
			if (x[i] == 0) {
				x[i] = x[i+1];
				x[i+1] = 0;
			};
		}
	}return x;
}
double potencia2 (int a) { //fucnión que calcula la potencia de dos con ciclos
	double b = 1.0;
	if (a==0) { //caso base
		return b;
	} else if (a>0) {
		for (a;a>0;a--) { //ciclo para potencias mayores a 0
			b*=2;
		}return b;
	} else {
		for (a; a<0; a++) { //ciclo para potencias menores a 0
			b*=2;
		}return 1/b;
	}
}

double decimal (double* x, int n) {
	int k = 0;
	for (int i = 0; i<n; i++) {
		k+=(x[i]*potencia2(i));
	}return k;
}
void liberar_arreglo_int (int* x, int n) {
	delete [] x;
	return;
}
void liberar_arreglo_bool (bool* x, int n) {
	delete [] x;
	return;
}
int longitud (int n) { //función que da la longitud del arreglo
	int i = 1;
	while (potencia2(i)<=n) {
		i++;
	};
	return i;
}
double* binario (int n) {
	int m = longitud (n);
	double* x = new double [m];
	for (int i = 0; i<m; i++) {
		x[i] = n%2;
		n /= 2;
	};
	return x;
}
int mcd_recursivo (int a, int b) {
	if (b==0) {
		return a;
	} else {
		return mcd_recursivo (b,a%b); 
	}
};

int mcd (int a, int b) { 
	if (a>b) {
		return mcd_recursivo (a,b);
	} else {
		return mcd_recursivo (b,a);
	}
}
int mcd_arreglo (int* x, int n) {
	for (int j = 1; j < n; j++) {
		x[j] = mcd (x[j-1], x[j]);
	}
	return x[n-1];
}
int mcm (int a, int b) {
	return (a*b)/(mcd(a,b)); 
}
int m(int *x,int mayor,int i){
	if(i<4){
		if(*(x+i)>mayor){
			mayor=*(x+i);
		}
	return m(x,mayor,i+1);
	}
	return mayor;
}
double* ordenar (double* x, int n) {
	if ( n == 1 ) {
		return x;
	} else {
		int k = pos_max (x, n);
		int t = x[k];
		x[k] = x[n-1];
		x[n-1] = t;
		return ordenar (x,n-1);
	}
}

double mediana (double* x, int n) {
	double m;
	if (n%2 == 0) {
		m = x[(n/2)-1] + x[n/2];
		m /= 2;
	} else {
		m = x[(n-1)/2];
	}return m;
}
void uno(){
	int n = 10;
	ifstream arreglo ("arreglo_numeros.txt");
	double* a = new double [n];
	a = leer_arreglo_double (arreglo,a,n);
	cout<<"El menor numero esta en la posicion: "<<pos_min(a,n) + 1<<" y es: "<<val_min(a,n)<<endl;
	liberar_arreglo (a,n);
	arreglo.close ();
	cout<<endl;
}
void dos(){
	int n = 10;
	ifstream arreglo ("arreglo_numeros.txt");
	double* a = new double [n];
	a = leer_arreglo_double (arreglo,a,n);
	cout<<"El menor numero esta en la posicion: "<<pos_min1(a,n) + 1<<" y es: "<<val_min1(a,n)<<endl;
	liberar_arreglo (a,n);
	arreglo.close ();
	cout<<endl;
}
void tres(){
	int n = 10;
	ifstream arreglo ("arreglo_numeros.txt");
	double* a = new double [n];
	a = leer_arreglo_double (arreglo,a,n);
	cout<<"El menor numero es: "<<val_min(a,n)<<" y esta en la posicion: "<<pos_min(a,n) + 1<<endl;
	liberar_arreglo (a,n);
	arreglo.close ();
	cout<<endl;
}
void cuatro(){
	int n = 10;
	ifstream arreglo ("arreglo_numeros.txt");
	double* a = new double [n];
	a = leer_arreglo_double (arreglo,a,n);
	cout<<"El menor numero es: "<<val_min1(a,n)<<" y esta en la posicion: "<<pos_min1(a,n) + 1<<endl;
	liberar_arreglo (a,n);
	arreglo.close ();
	cout<<endl;
}
void cinco(){
	int n = 10;
	ifstream arreglo ("arreglo_numeros.txt");
	double* a = new double [n];
	a = leer_arreglo_double (arreglo,a,n);
	cout<<"La Varianza de los datos es: "<<varianza (a,n)<<endl;
	liberar_arreglo_double (a,n);
	arreglo.close ();
	cout<<endl;
}
void seis(){
	int n = 10;
	ifstream arreglo ("arreglo_numeros.txt");
	double* a = new double [n];
	a = leer_arreglo_double (arreglo,a,n);
	cout<<"La desviacion estandar de los datos es: "<<sqrt(varianza (a,n))<<endl;
	liberar_arreglo_double (a,n);
	arreglo.close ();
	cout<<endl;
}
void siete(){
	int n,m,t,k;
	ofstream primos ("arreglo_salida.txt");
	cout<<"Ingrese un numero natural\n\n";
	n = leer_int (cin);
	m = n+1;
	bool* y = new bool [m];
		y = criba (y,n);
		cout<<"\nLos numeros primos menores o iguales a "<<n<<" son:\n\n";
	t = 0;
	for (int i = 0; i <= n; i++) {
		if (y[i]) {
			cout<<i<<endl<<endl;
			t++;
		};
	}int* x = new int [t];
	k = 0;
	for (int i = 0; i<=n; i++) {
		if (y[i]) {
			x[k]=i;
			k++;
		};
	}escribir_arreglo_int (primos, x, t);
	liberar_arreglo_int (x,t);
	liberar_arreglo_bool (y,n);	
	primos.close();
	cout<<endl;
}
void ocho(){
	int n = 10;
	double a;
	ifstream arreglo ("arreglo_numeros.txt");
	ofstream p ("arreglo_salida.txt");
	cout<<"Ingrese un numero\n\n";
	cin>>a;
	double* x = new double [n];
	x = leer_arreglo_double (arreglo,x,n);
	cout<<"\nvector inicial:\n\n";
	for (int i = 0; i<n; i++) {
		cout<<x[i]<<"\t";
	}cout<<endl;
	system ("Pause");
	x = producto_escalar (x,n,a);
	cout<<"\nvector por "<<a<<":\n\n";
	for (int i = 0; i<n; i++) {
		cout<<x[i]<<"\t";
	}cout<<endl;
	escribir_arreglo_double (p,x,n);
	liberar_arreglo_double (x,n);	
	arreglo.close();
	p.close();
	cout<<endl;
}
void nueve(){
	int n = 10;
	ifstream arreglo ("arreglo_numeros.txt");
	ifstream arreglo2 ("arreglo_numeros2.txt");
	ofstream p ("arreglo_salida.txt");
	double* x = new double [n];
	double* y = new double [n];
	x = leer_arreglo_double (arreglo,x,n);
	y = leer_arreglo_double (arreglo2,y,n);
	for (int i = 0; i<n; i++) {
		cout<<x[i]<<"\t";
	}cout<<endl;
	for (int i = 0; i<n; i++) {
		cout<<"+\t";
	}cout<<endl;
	for (int i = 0; i<n; i++) {
		cout<<y[i]<<"\t";
	}cout<<endl;
	for (int i = 0; i<n; i++) {
		cout<<"=\t";
	}cout<<endl;
	x = suma_vectores (x,y,n);
		for (int i = 0; i<n; i++) {
		cout<<x[i]<<"\t";
	}cout<<endl;
	escribir_arreglo_double (p,x,n);
	liberar_arreglo_double (x,n);
	liberar_arreglo_double (y,n);	
	arreglo.close();
	arreglo2.close();
	p.close();
	cout<<endl;
}
void diez(){
	int n = 10;
	ifstream arreglo ("arreglo_numeros.txt");
	ifstream arreglo2 ("arreglo_numeros2.txt");
	ofstream p ("arreglo_salida.txt");
	double* x = new double [n];
	double* y = new double [n];
	x = leer_arreglo_double (arreglo,x,n);
	y = leer_arreglo_double (arreglo2,y,n);
	for (int i = 0; i<n; i++) {
		cout<<x[i]<<"\t";
	}cout<<endl;
	for (int i = 0; i<n; i++) {
		cout<<"-\t";
	}cout<<endl;
	for (int i = 0; i<n; i++) {
		cout<<y[i]<<"\t";
	}cout<<endl;
	for (int i = 0; i<n; i++) {
		cout<<"=\t";
	}cout<<endl;
	x = resta_vectores (x,y,n);
	for (int i = 0; i<n; i++) {
		cout<<x[i]<<"\t";
	}cout<<endl;
	escribir_arreglo_double (p,x,n);
	liberar_arreglo_double (x,n);
	liberar_arreglo_double (y,n);	
	arreglo.close();
	arreglo2.close();
	p.close();
	cout<<endl;
}
void once(){
	int n = 10;
	ifstream arreglo ("arreglo_numeros.txt");
	ifstream arreglo2 ("arreglo_numeros2.txt");
	ofstream p ("arreglo_salida.txt");
	double* x = new double [n];
	double* y = new double [n];
	x = leer_arreglo_double (arreglo,x,n);
	y = leer_arreglo_double (arreglo2,y,n);
	for (int i = 0; i<n; i++) {
		cout<<x[i]<<"\t";
	}cout<<endl;
	for (int i = 0; i<n; i++) {
		cout<<".\t";
	}cout<<endl;
	for (int i = 0; i<n; i++) {
		cout<<y[i]<<"\t";
	}cout<<endl;
	for (int i = 0; i<n; i++) {
		cout<<"=\t";
	}cout<<endl;
	x = producto_directo (x,y,n);
	for (int i = 0; i<n; i++) {
		cout<<x[i]<<"\t";
	}cout<<endl;
	cout<<"Producto punto de los vectores:\n\n"<<sumatoria (x,n)<<endl;
	liberar_arreglo_double (x,n);
	liberar_arreglo_double (y,n);	
	arreglo.close();
	arreglo2.close();
	p.close();
	cout<<endl;
}
void doce(){
	int n = 10;
	ifstream arreglo ("arreglo_numeros.txt");
	ifstream arreglo2 ("arreglo_numeros2.txt");
	ofstream p ("arreglo_salida.txt");
	double* x = new double [n];
	double* y = new double [n];
	x = leer_arreglo_double (arreglo,x,n);
	y = leer_arreglo_double (arreglo2,y,n);
	for (int i = 0; i<n; i++) {
		cout<<x[i]<<"\t";
	}cout<<endl;
	for (int i = 0; i<n; i++) {
		cout<<".\t";
	}cout<<endl;
	for (int i = 0; i<n; i++) {
		cout<<y[i]<<"\t";
	}cout<<endl;
	for (int i = 0; i<n; i++) {
		cout<<"=\t";
	}cout<<endl;
	x = producto_directo (x,y,n);
	for (int i = 0; i<n; i++) {
		cout<<x[i]<<"\t";
	}cout<<endl;
	escribir_arreglo_double (p,x,n);
	liberar_arreglo_double (x,n);
	liberar_arreglo_double (y,n);	
	arreglo.close();
	arreglo2.close();
	p.close();
	cout<<endl;
}
void trece(){
	int n = 10;
	ifstream arreglo ("arreglo_numeros.txt");
	double* a = new double [n];
	a = leer_arreglo_double (arreglo,a,n);
	for (int i = 0; i<n; i++) {
		cout<<a[i]<<"\t";
	}cout<<"\n\nOrdenado de menor a mayor:\n\n";
	a = ordenar (a,n);
	for (int i = 0; i<n; i++) {
		cout<<a[i]<<"\t";
	}cout<<"\n\nSu mediana es: "<<mediana(a,n)<<endl;
	liberar_arreglo (a,n);
	arreglo.close ();
	cout<<endl;
}
void catorce(){
	int n = 10;
	ifstream arreglo ("arreglo_numeros.txt");
	ofstream p ("arreglo_salida.txt");
	double* a = new double [n];
	a = leer_arreglo_double (arreglo,a,n);
	for (int i = 0; i<n; i++) {
		cout<<a[i]<<"\t";
	}cout<<"\nCeros a al derecha:\n\n";
	a = ceros (a,n);
	for (int i = 0; i<n; i++) {
		cout<<a[i]<<"\t";
	}escribir_arreglo_double (p,a,n);
	liberar_arreglo (a,n);
	arreglo.close ();
	p.close();
	cout<<endl;
}
void quince(){
	int n = 10;
	ifstream arreglo ("arreglo_numeros2.txt");
	double* a = new double [n];
	a = leer_arreglo_double (arreglo,a,n);
	cout<<"Numero binario al reves:\n\n";
	for (int i = 0; i<n; i++) {
		cout<<a[i]<<"\t";
	}cout<<"\nRepresetnacion decimal:\n\n"<<decimal(a,n)<<endl;
	liberar_arreglo (a,n);
	arreglo.close ();
	cout<<endl;
}
void dieciseis(){
	int x;
	ingresar:
	system ("cls");
	cout<<"Ingrese un numero entero positivo: ";
	cin>>x;
	if (x<=0) {
		cout<<"Este número no es válido, ingrese un número entero positivo.\n\n";
		system ("Pause");
		goto ingresar;
	} else {
	cout<<"\nLongitud: "<<longitud(x)<<"\n\n";
	int n = longitud(x);
	int m = x;
	double* a = new double [n];
	a = binario (x);
	cout<<"Representacion binaria al reves de "<<x<<".\n\n";
	for (int i = 0; i<n; i++) {
		cout<<a[i]<<"\t";
	}cout<<endl;
	ofstream binario ("arreglo_numeros2.txt");
	escribir_arreglo_double (binario, a, n);
	liberar_arreglo (a,n);
	binario.close ();
	};
	cout<<endl;
}
void diecisiete(){int n = 6;
	int m;
	ifstream arreglo ("arreglo_numeros.txt");
	int* a = new int [n];
	a = leer_arreglo_int (arreglo,a,n);
	cout<<"El Arreglo es:\n\n";
	for (int i = 0; i<n; i++) {
		cout<<a[i]<<"\t";
	}cout<<"\n\nEl minimo comun divisor del arreglo es: "<<mcd_arreglo(a,n);
	liberar_arreglo_int (a,n);
	arreglo.close ();
	cout<<endl;
}
void dieciocho(){
	ifstream ifs("arreglo_numeros2.txt");
	int*x;
	x= new int[4]; 
	for(int i=0;i<4;i++){
		ifs>>*(x+i);
	}int mayor=*x;
	mayor=m(x,mayor,0);
	int aux=mayor;
	for(int i=0;i<4;i++){
		if (mayor%x[i]!=0){
			mayor=mayor+aux;
			i=0;
	}}cout<<"el minimo comun multiplo es: "<<mayor;
	cout<<endl;
}


int main(){
		
int num;
	while(num<=16){
	cout<<"Que punto desea ver?"<<endl;
	cin>>num;
	
	switch(num){
		case 1:
			uno();
		break;
		case 2:
			dos();
		break;
		case 3:
			tres();
		break;
		case 4:cuatro();
		break;
		case 5:
			cinco();
		break;
		case 6:
			seis();
		break;
		case 7:
			siete();
		break;
		case 8:
			ocho();
		break;
		case 9:
			nueve();
		break;
		case 10:
			diez();
		break;
		case 11:
			once();
		break;
		case 12:
			doce();
		break;
		case 13:
			trece();
		break;
		case 14:
			catorce();
		break;
		case 15:
			quince();
		break;
		case 16:
			dieciseis();
		break;
		case 17:
			diecisiete();
		break;
		case 18:
			dieciocho();
		break;
		
		default:
		cout<<"Numero invalido"<<endl;
	
	}	
}	
	
	
	
	return 0;
}
