#include "Complex.h"
#include <math.h>
#include <iostream>
using namespace std;
double Modul(Complex z) {
	return sqrt(pow(z.Re, 2) + pow(z.Im, 2));
}
Complex LienHop(Complex z) {
	Complex w;
	w.Re = z.Re;
	w.Im = -z.Im;
	return w;
}
Complex NghichDao(Complex z) {
	Complex w;
	w.Re = z.Re / Modul(z);
	w.Im = -z.Im / Modul(z);
	return w;
}
Complex Add(Complex z1, Complex z2) {
	Complex w;
	w.Re = z1.Re + z2.Re;
	w.Im = z1.Im + z2.Im;
	return w;
}
Complex Sub(Complex z1, Complex z2) {
	Complex w;
	w.Re = z1.Re - z2.Re;
	w.Im = z1.Im - z2.Im;
	return w;
}
Complex Mul(Complex z1, Complex z2) {
	Complex w;
	w.Re = z1.Re * z2.Re - z1.Im * z2.Im;
	w.Im = z1.Im * z2.Re + z1.Re * z2.Im;
	return w;
}
Complex Div(Complex z1, Complex z2) {
	Complex w;
	w = Add(z1, NghichDao(z2));
	return w;
}
void Nhap(Complex* z) {
	cout << "Phan thuc: ";
	cin >> z->Re;
	cout << "Phan ao: ";
	cin >> z->Im;
}
void Xuat(Complex z) {
	cout << z.Re << "+" << z.Im << "i" << endl;
}