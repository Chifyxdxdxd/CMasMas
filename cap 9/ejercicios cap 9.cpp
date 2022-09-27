#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;

int fr_uno(int m, int n){
	if(m==0){
		cout<<"m es menor que n"<<endl;
		return m;
	}else if(n==0){
		cout<<"m es mayor que n"<<endl;
		return n;
	}else{
		return fr_uno(m-1,n-1);
}}int fr_dos(int m, int n){
	if(m==0){
		cout<<"n es mayor que m"<<endl;
		return m;
	}else if(n==0){
		cout<<"m es mayor que n"<<endl;
		return n;
	}else{
		return fr_dos(m-1,n-1);
}}int fr_tres(int n){
	if (n==0){
		return 0;
	}return n+fr_tres(n-1);
}int fr_cuatro(int n){
	if (n==0){
		return 0;
	}return (n*n)+fr_cuatro(n-1);
}int fr_cinco(int n){
	if (n==1){
		return 1;
}return n*fr_cinco(n-1);
}int fr_seis(int n){
	if (n==1){
		return 1;
}return (n*n)*fr_seis(n-1);
}int fr_siete(int n, int i){
	if (n==0){
		return i;
	}else if ((n%2)<2){
		n/=2;
		return fr_siete(n,i+1);
	}return i;
}int fr_ocho(int n,int j,int i){
	if (n==0){
		return i;
	}else if ((n%j)<j){
		n/=j;
		return fr_ocho(n,j,i+1);
	}return i;
}int fr_nueve(int a, int j){
	if (a==0){
		return 0;
	}if ((j*j)<a){
		return fr_nueve(a,j+1);
	}if ((j*j)>a){
		return j-1;
	}return j;
}int fr_diez(int a, int j, int i){
	if (a==0){
		return 0;
	}if ((pow(j,i))<a){
		return fr_diez(a,j+1,i);
	}if ((pow(j,i))>a){
		return j-1;
	}return j;
}int fr_once(int n,int i){
	if (n==0){
		return 0;
	}if (n<i){
		return n;
	}return fr_once(n-i,i);
}int fr_doce(int n){
	if (n==0){
		return 0;
	}if (n<10){
		return n;
	}return fr_doce(n-10);
}int fr_13(int n, int i){
	if (n==0){
		return 0;
	}if (n<10){
		return i+1;
	}return fr_13(n/10,i+1);
}fr_14(int n, int i){
	if (n==0){
		return 0;
	}if (n<10){
		i+=n-3;
		return i;
	}i+=(n%10);
	return fr_14(n/10,i);
}int fr_15(int n){
	if (n==0){
		return 0;
	}if (n<10){
		return n;
	}return fr_15(n/10);
}int fr_16(int n){
	cout<<n%10;
	if (n>10) fr_16(n/10);
}int fr_17(int n,int j, int m){
	j=(j*10)+(n%10);
	if (n>10) fr_17(n/10,j, m);
	if (n<10) return j;
}int fr_18(int n,int m, int x, int y){
	int j=0, i=0;
	i=m*x, j=n*y;
	if (i==j){
		cout<<"el minimo comun multiplo es "<<i<<endl;
		return i;
	}if (i<j){
		return fr_18(n,m,x+1,y);
	}if (j<i){
		return fr_18(n,m,x,y+1);
}}






int main(){
int k,m,n,i,j=0,a,x,y;
do{
	cout<<"cual ejercicio va a revisar?"<<endl<<endl;
	cin>>k;
	switch (k){
		case 1:
			cout<<"EJERCICIO - PRIMER NUMERO MAYOR?"<<endl<<endl;
			cout<<"ingrese un numero positivo para m \n";
			cin>>m;
			if (m<0){
				cout<<"datos invalidos";
				break;
			}cout<<"ingrese un numero positivo para n \n";
			cin>>n;
			if (m<0){
				cout<<"datos invalidos";
				break;
			}fr_uno(m,n);
			break;
		case 2:
			cout<<"EJERCICIO - CUAL NUMERO ES MAYOR?"<<endl<<endl;
			cout<<"ingrese un numero positivo para m \n";
			cin>>m;
			if (m<0){
				cout<<"datos invalidos";
				break;
			}cout<<"ingrese un numero positivo para n \n";
			cin>>n;if (n<0){
				cout<<"datos invalidos";
				break;
			}fr_dos(m,n);
			break;
		case 3:
			cout<<"EJERCICIO - SUMATORIA I"<<endl<<endl;
			cout<<"hasta que numero es la sumatoria? \n";
			cin>>n;
			if (n<0){
				cout<<"datos invalidos";
				break;
			}cout<<"la suma es"<<fr_tres(n)<<endl;
			break;
		case 4:
			cout<<"EJERCICIO - SUMATORIA I^2"<<endl<<endl;
			cout<<"hasta que numero es la sumatoria? \n";
			cin>>n;
			if (m<0){
				cout<<"datos invalidos";
				break;
			}cout<<"la suma es"<<fr_cuatro(n)<<endl;
			break;
		case 5:
			cout<<"EJERCICIO - PRODUCTORIA I"<<endl<<endl;
			cout<<"hasta que numero es la productoria? \n";
			cin>>n;
			if (n<=0){
				cout<<"datos invalidos";
				break;
			}cout<<"el producto es"<<fr_cinco(n)<<endl;
			break;
		case 6:
			cout<<"EJERCICIO - PRODUCTORIA I^2"<<endl<<endl;
			cout<<"hasta que numero es la productoria? \n";
			cin>>n;
			if (n<=0){
				cout<<"datos invalidos";
				break;
			}cout<<"el producto es"<<fr_seis(n)<<endl;
			break;
		case 7:
			cout<<"EJERCICIO - LOGARITMO DE 2"<<endl<<endl;
			cout<<"que numero es el logaritmo?: \n";
			cin>>n;
			if (n<0){
				cout<<"datos invalidos";
				break;
			}i=-1, cout<<"el entero del logaritmo es: "<<fr_siete(n,i)<<endl;
			break;
		case 8:
			cout<<"EJERCICIO - LOGARITMO DE B"<<endl<<endl;
			cout<<"que numero es el logaritmo?: \n";
			cin>>n;
			if (n<0){
				cout<<"datos invalidos";
				break;
			}cout<<"cual es la base del logaritmo?: \n";
			cin>>j;
			if (j<0){
				cout<<"datos invalidos";
				break;
			}i=-1, cout<<"el entero del logaritmo es: "<<fr_ocho(n,j,i)<<endl;	
			break;
		case 9:
			cout<<"EJERCICIO - RAIZ CUADRADA"<<endl<<endl;
			cout<<"de cual numero quiere la raiz?: \n";
			cin>>a;
			if (a<0){
				cout<<"datos no validos";
				break;
			}cout<<"el entero de la raiz es: "<<fr_nueve(a,j)<<endl;
			break;
		case 10:
			cout<<"EJERCICIO - RAIZ N DE A"<<endl<<endl;
			cout<<"de cual numero quiere la raiz?: \n";
			cin>>a;
			if (a<0){
				cout<<"datos no validos";
				break;				
			}cout<<"de cual es la raiz?: \n";
			cin>>i;
			if (i<2){
				cout<<"datos no validos";
				break;				
			}cout<<"el entero de la raiz es: "<<fr_diez(a,j,i)<<endl;
			break;
		case 11:
			cout<<"EJERCICIO - M MOD N"<<endl<<endl;
			cout<<"ingrese un valor para m \n";
			cin>>m;
			if (m<0){
				cout<<"datos no validos";
				break;
			}cout<<"ingrese un valor para n \n";
			cin>>n;
			if (n<0){
				cout<<"datos no validos";
				break;
			}cout<<m<<" mod "<<n<<" es "<<fr_once(m,n)<<endl;
			break;
		case 12:
			cout<<"EJERCICIO - NUMERO POR DERECHA"<<endl<<endl;
			cout<<"digite un numero \n";
			cin>>n;
			if (n<0){
				cout<<"datos no validos";
				break;		
			}cout<<fr_doce(n);	
			break;
		case 13:
			cout<<"EJERCICIO - CANTIDAD DE NUMEROS"<<endl<<endl;
			cout<<"digite un numero \n";
			cin>>n;
			if (n<0){
				cout<<"datos no validos";
				break;
			}cout<<fr_13(n,i);
			break;
		case 14:
			cout<<"EJERCICIO - SUMA DE DIGITOS"<<endl<<endl;
			cout<<"digite un numero \n";
			cin>>n;
			if (n<0){
				cout<<"datos no validos";
				break;
			}cout<<fr_14(n,i);	
			break;
		case 15:
			cout<<"EJERCICIO - NUMERO POR IZQUIERDA"<<endl<<endl;
			cout<<"digite un numero \n";
			cin>>n;
			if (n<0){
				cout<<"datos no validos";
				break;
			}cout<<fr_15(n);
			break;
		case 16:
			cout<<"EJERCICIO - NUMERO INVERSO"<<endl<<endl;
			cout<<"digite un numero \n";
			cin>>n;
			if (n<0){
				cout<<"datos no validos";
				break;
			}cout<<fr_16(n);
			break;
		case 17:
			cout<<"EJERCICIO - NUMERO PALINDROMO"<<endl<<endl;
			cout<<"digite un numero \n";
			cin>>m;
			n=m,j=fr_17(n,j,m);
			if (m==j) cout<<"es palindromo"<<endl;
			else cout<<"no es palindromo"<<endl;
			break;
		case 18:
			cout<<"EJERCICIO - MINIMO COMUN MULTIPLO"<<endl<<endl;
			cout<<"ingrese un numero  \n";
			cin>>m;
			cout<<"ingrese un numero  \n";
			cin>>n;
			fr_18(n,m,x,y);
			break;
		default:
			cout<<"no se reviso ningun ejercicio";
			break;
	}cout<<"\n \n1 para repetir o 0 para salir"<<endl;
	cin>>k;
	}while (k==1);
	return 0;
}
