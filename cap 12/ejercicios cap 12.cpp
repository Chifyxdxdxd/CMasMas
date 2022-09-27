#include <iostream>
using namespace std;



   	    	
int main(){
	int ejercicio,x,q,e,b=0;
	char c, t[30], g[30], y[60];
	do{	
	cout<<"cual ejercicio desea ver?"<<endl;
	cin>>ejercicio;
	
	switch(ejercicio){
		case 1:
			cout<<"cual es la longitud de la cadena?"<<endl;
			cin>>x;
			cout<<"Cual letra se evaluara?"<<endl;
			cin>>c;
		    cout<<"Cual es la cadena "<<endl;
			for(int p=0;p<x;p++){
				cin>>t[p];
			}for(int p=0;p<x;p++){
				if(t[p]==c){
	 			 	b++;
			}}cout<<"La letra "<<c<<" esta "<<b<<" veces en la cadena"<<endl;
			break;
		case 2:
			cout<<"cual es la longitud de la cadena?"<<endl;
			cin>>x;
		   	cout<<"cual es la cadena "<<endl;
			for(int p=0;p<x;p++){
				cin>>t[p];
			}for(int p=0;p<x;p++){
				if(isalpha(t[p])==0){
			  	b++;
				}}if(b!=0){
					cout<<"No todos los elementos son letras"<<endl;
				}else{
					cout<<"Todos los elementos son letras"<<endl;
			}break;
		case 3:
			cout<<"Cual es la longitud de la cadena?"<<endl;
			cin>>x;
		    cout<<"Cual es la cadena "<<endl;
        	for(int p=0;p<x;p++){
				cin>>t[p];
			}for(int p=0;p<x;p++){
			if (t[p]=='a'||t[p]=='e'||t[p]=='i'||t[p]=='o'|| t[p]=='u'||t[p]=='A'||t[p]=='E'||t[p]=='I'||t[p]=='O'||t[p]=='U'){
				b++;
			}} if(b!=0){
				cout<<"No todos los elementos son consonantes"<<endl;
			}else{
				cout<<"Todos los elementos son consonantes"<<endl;
			}break;
		case 4:
			cout<<"Cual es la longitud de la primera cadena?"<<endl;
  		 	cin>>x;
		    cout<<"cual es la primera cadena "<<endl;
     		for(int p=0;p<x;p++){
				cin>>t[p];
			}cout<<"cual es la longitud de la segunda cadena?"<<endl;
			cin>>e;
			cout<<"cual es la segunda cadena "<<endl;
			for(int p=0;p<e;p++){
				cin>>y[p];
			}if(x==e){
				for(int p=0;p<x;p++){
					if(t[p]!=y[p]){
						b++;
					}}if(b==0){
						cout<<"Las cadenas son iguales"<<endl;
					}else{
						cout<<"Las cadenas son diferentes"<<endl;
			}}else{
				cout<<"Las cadenas son diferentes"<<endl;
			}break;
		case 5:
			cout<<"Cual es la longitud de la primera cadena?"<<endl;
			cin>>x;
		    cout<<"Cual es la primera cadena "<<endl;
	    	for(int p=0;p<x;p++){
				cin>>t[p];
			}cout<<"Cual es la longitud de la segunda cadena?"<<endl;
			cin>>e;
			cout<<"Cual es la segunda cadena "<<endl;
   			for(int p=0;p<e;p++){
				cin>>y[p];
			}for(int p=0;p<x;p++){
				g[p]=t[p];
			}q=x+e;
 			for(int p=x;p<q;p++){
				g[p]=y[p-x];
			}for(int p=0;p<q;p++){
	      		cout<<g[p];
			}break;
		case 6:
			cout<<"Cual es la longitud de la cadena?"<<endl;
			cin>>x;
	    	cout<<"Cual es la cadena "<<endl;
			for(int p=0;p<x;p++){
 		     		cin>>t[p];
			}for (int p=x;p>=0;p--){
				cout<<t[p];
			}break;
		case 7:
			cout<<"Cual es la longitud de la cadena?"<<endl;
			cin>>x;
			cout<<"Cual es la cadena "<<endl;
			for(int p=0;p<x;p++){
				cin>>t[p];
			}if(x%2!=0){
				for(int p=0;p<x;p++){
					if(t[p]!=t[(x-1)-p]){
					b++;
				}}if(b==0){
					cout<<"Es palindrome"<<endl;	
				}else{
					cout<<"No es palindrome"<<endl;
			}}else{
				cout<<"No es palindrome"<<endl;
			}break;
		case 8:
			cout<<"Cual es la longitud de la cadena?"<<endl;
			cin>>x;
			cout<<"Cual es la cadena "<<endl;
			for(int p=0;p<x;p++){
				cin>>t[p];
			}for(int p=0;p<(x-1);p++){
				y[p]=t[p+1];
				cout<<y[p];
			}cout<<t[0]<<endl;
			break;
		case 9:
			cout<<"Cual es la longitud de la primera cadena?"<<endl;
			cin>>x;
			cout<<"Cual es la primera cadena "<<endl;
			for(int p=0;p<x;p++){
				cin>>t[p];
			}cout<<"Cual es la longitud de la segunda cadena?"<<endl;
			cin>>e;
			cout<<"Cual es la segunda cadena "<<endl;
			for(int p=0;p<e;p++){
				cin>>y[p];
			}if(x>=e){
				for(int p=0;p<=(x-e);p++){
					for(int q=0;q<e;q++){
						if(t[q+p]!=y[q]){
							b++;
					}}if(b==0){
		 				cout<<"La segunda esta contenida en la primera"<<endl;
					}}if(b!=0) {
						cout<<"La segunda no esta contenida en la primera"<<endl;
			}}break;
		default:
		cout<<"Numero invalido"<<endl;
	
		}cout<<"1 para repetir"<<endl;
		cin>>ejercicio;
	}while (ejercicio==1);
		
	return 0;
}
