//John Doty
//CIS-1202
//12/6/2020
//Templated Functions

#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

template <class T>
T divide(T number) {
	return number / 2;
}



int main(){

	int a, b = 3;

	a = static_cast<float>(divide(b));

	cout << a << endl;

	float c, d = 5;

	c = divide(d);

	cout << c << endl;

	double e, f = 7;

	e = divide(f);

	cout << e << endl;

}