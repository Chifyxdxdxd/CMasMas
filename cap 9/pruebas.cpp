#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;

int fr_3(int n,int m, int x, int y){
	int j=0, i=0;
	i=m*x, j=n*y;
	if (i==j){
		cout<<"el minimo comun multiplo es "<<i<<endl;
		return i;
	}if (i<j){
		return fr_3(n,m,x+1,y);
	}if (j<i){
		return fr_3(n,m,x,y+1);
}}
int main(){
	int m, n, i, j=0, x, y;
	cout<<"num1  \n";
	cin>>m;
	cout<<"num2  \n";
	cin>>n;
	fr_3(n,m,x,y);
	return 0;
	
}
//	do{
//		cout<<"digite un numero para m";
//		cin>>m;
//		if(m<0) cout<<"\n digite un numero positivo y entero \n";
//	}while(m<0);
//	do{
//		cout<<"digite un numero para n";
//		cin>>n;
//		if(n<0) cout<<"\n digite un numero positivo y entero \n";
//		}while(n<0);
