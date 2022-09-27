#include <iostream>
using namespace std;


int main  () {
int x;
cout<<"ingrese un caracter \n";
cin>>x;
switch(x){
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
}return 0;
}
