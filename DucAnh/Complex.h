#pragma once
struct Complex
{
	double Re;
	double Im;
};
double Modul(Complex);
Complex LienHop(Complex);
Complex NghichDao(Complex);
Complex Add(Complex, Complex);
Complex Sub(Complex, Complex);
Complex Mul(Complex, Complex);
Complex Div(Complex, Complex);
void Nhap(Complex*);
void Xuat(Complex);

