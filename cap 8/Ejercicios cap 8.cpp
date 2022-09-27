#include<iostream>
#include<cstdlib>
#include<fstream>
#include<math.h>
using namespace std;

double leer_double(istream& is){
	double a;
	is>>a;
	return a;
}ostream& escribir_double(ostream& os, double a){
	os << a;
	return os;
}char leer_char(istream& is){
	char o;
	is>>o;
	return o;
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
}int leer_int(istream& is){
	int a;
	is >> a;
	return a;
}ostream& escribir_int(ostream& os, int a){
	os << a;
	return os;
}


int main (){
	int num_e;
	double a, b;
	bool h;
	char o, p, q, r, s, t;
	cout<<"numero del ejercicio";
	cin>>num_e;	
	ifstream ifs("input.txt");
	ofstream ofs("output.txt");
	switch (num_e){
		case 1:
			cout<<"la funcion diseñada es: \n double leer_double(istream& is){ \n \t double a; \n \t is>>a; \n \t retrun a; \n } \n";
			break;
		case 2:
			cout<<"la funcion diseñana es: \n ostream& escribir_double(ostream& os, double a){ \n \t os << a; \n \t return os; \n } \n";
			break;
		case 3:
			cout<<"digite un numero real: \n";
			a=leer_double(cin), b=a*(-1);
			cout<<"el opuesto aditivo del numero escrito es:";
			escribir_double(cout, b);
			cout<<endl;
			break;
		case 4:
			a=leer_double(ifs), b=a*(-1);
			escribir_double(ofs, b);
			ofs.close();
			ifs.close();
			cout << endl;
			break;
		case 5:
			cout<<"la funcion diseñada es: \n bool leer_bool(istream& is){ \n \t bool h; \n \t is >> h; \n \t return h;\n } \n";
			break;
		case 6:
			cout<<"la funcion diseñada es: \n ostream& escribir_bool(ostream& os, bool h){ \n \t os << h; \n \t return os; \n } \n";
			break;
		case 7:
			cout<<"digite un dato tipo boleano:";
			h=leer_bool(cin);
			cout<<"el dato boleano leido es ";
			escribir_bool(cout, h);
			cout<<endl;
			break;
		case 8:
			escribir_bool(ofs, leer_bool(ifs));
			ofs.close();
			ifs.close();
			cout<<endl;
			break;
		case 9:
			escribir_char(escribir_int(cout, leer_int(ifs)), '\t');
			escribir_char(escribir_int(ofs, leer_int(ifs)), '\t');
			escribir_char(escribir_int(cout, leer_int(ifs)), '\t');
			escribir_int(ofs, leer_int(ifs));
			ofs.close();
			ifs.close();
			cout << endl;
			break;
		case 10:
			escribir_char(escribir_int(cout, leer_int(ifs)), '\t');
			escribir_char(escribir_int(ofs, leer_int(ifs)), '\t');
			escribir_int(ofs, leer_int(ifs));
			ofs.close();
			ifs.close();
			cout << endl;
			break;
		case 11:
			a=leer_int(ifs);
			escribir_char(escribir_int(cout, a), '\t');
			escribir_char(escribir_int(ofs, a), '\t');
			a=leer_int(ifs);
			escribir_char(escribir_int(cout, a), '\t');
			escribir_char(escribir_int(ofs, a), '\t');
			a=leer_int(ifs);
			escribir_char(escribir_int(cout, a), '\t');
			escribir_char(escribir_int(ofs, a), '\t');
			a=leer_int(ifs);
			escribir_int(cout, a);
			escribir_int(ofs, a);
			ofs.close();
			ifs.close();
			cout << endl;
		case 12:
			cout<<"la funcion diseñada es: \n char leer_char(istream& is){ \n \t char o; \n \t is>>o; \n \t return o; \n } \n";
			break;
		case 13:
			cout<<"la funcion diseñada es: \n ostream& escribir_char(ostream& os, char ch){ \n \t os << ch; \n \t return os; \n } \n";
			break;
		case 14:
			o=leer_char(ifs);
			p=leer_char(ifs);
			q=leer_char(ifs);
			r=leer_char(ifs);
			s=leer_char(ifs);
			escribir_char(escribir_char(ofs, s), '\t');
			escribir_char(escribir_char(ofs, r), '\t');
			escribir_char(escribir_char(ofs, q), '\t');	
			escribir_char(escribir_char(ofs, p), '\t');
			escribir_char(escribir_char(ofs, o), '\t');
			ofs.close();
			ifs.clear();
			cout<<endl;
			break;
		default:
			cout<<"saliendo del programa"<<endl;
			break;
	}
	system ("pause");
	return 0;		
}
