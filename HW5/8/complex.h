#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

#include <iostream>

using namespace std;

class Complex{
    friend Complex operator+(Complex A,Complex B);
    friend Complex operator*(Complex A,Complex B);
    friend bool operator==(Complex A,Complex B);
    friend bool operator!= (Complex A,Complex B);
public:
    Complex(double A=0,double B=0){r=a;i=b;};
    void show();
private:
    double r;
    double i;
};


#endif // COMPLEX_H_INCLUDED
