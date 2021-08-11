#include <iostream>
#include <cmath>
#include <conio.h>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {
	double b = 2.1, c = 4.2;
	long double lda = 9.4, hasil;

	hasil = fma(lda, c, b);
	cout << "fma(lda, c, b)=" << hasil << endl;
	
	_getch();
	return 0;
}
