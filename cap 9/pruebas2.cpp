#include<iostream>
#include<cstdlib>
using namespace std;

int fibo(int n){
if(n == 0){
return 0;
}else if(n == 1){
return 1;
};
cout<< fibo(n - 1) + fibo(n - 2);
return fibo(n - 1) + fibo(n - 2);
}
int main(){
int n;
cout << "n? = ";
cin >> n;
cout << "Fibonacci(n) = ";
cout << fibo(n);
cout << "\n";
system("pause");
return EXIT_SUCCESS;
};
