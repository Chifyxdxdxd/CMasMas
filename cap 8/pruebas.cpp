#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;
int leer_int(istream& is){
int a;
is >> a;
return a;
}ostream& escribir_int(ostream& os, int a){
os << a;
return os;
}ostream& escribir_char(ostream& os, char ch){
os << ch;
return os;
}bool leer_bool(istream& is){
bool h;
is >> h;
return h;
}ostream& escribir_bool(ostream& os, bool h){
os << h;
return os;
}
int main(){
ifstream ifs("entrada.txt");
ofstream ofs("salida.txt");
int xc, a;
bool h;
cin>>xc;
switch (xc) {
case 1:
	cout<<"putos todos";
	break;
case 2:
cout<<"boleanos";
escribir_char(escribir_bool(ofs, leer_bool(ifs)), '\t');
escribir_char(escribir_bool(ofs, leer_bool(ifs)), '\t');
escribir_char(escribir_bool(ofs, leer_bool(ifs)), '\t');
escribir_bool(ofs, leer_bool(ifs));
ofs.close();
ifs.close();
cout << endl;
break;	
default:
cout<<"enteros";
escribir_char(escribir_int(ofs, leer_int(ifs)), '\t');
escribir_char(escribir_int(ofs, leer_int(ifs)), '\t');
escribir_char(escribir_int(ofs, leer_int(ifs)), '\t');
escribir_int(ofs, leer_int(ifs));
ofs.close();
ifs.close();
cout << endl;
}system("pause");
return 0;
}
