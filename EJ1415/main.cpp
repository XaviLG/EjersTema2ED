#include <iostream>
using namespace std;
int suma (int a,int b);
extern string mensaje;
extern int num1,num2;
int main() {
	cout << mensaje << endl;
	cout << suma (num1,num2) << endl;
	return 0;
}
