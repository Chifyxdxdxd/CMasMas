#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;

int main(){
	int k,m,n,i,j,a,x,y;
	double A,B;
	do{
		cout<<"hasta que numero es la lista?"<<endl;
		cin>>x;
		cin>>n;
	}while (x<0||n<=0); 
	if (x==0) {cout<<"n=1"<<endl;return 0;}
	if (x==1) {cout<<"n="<<n<<endl;return 0;}
	m=n;
	while (x>1){
		m*=n,x--;
	}
	if (x!=0)cout<<"n="<<m<<endl;
	return 0;
}
