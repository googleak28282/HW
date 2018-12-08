#include "complex.h"
using namespace std;
Complex operator+(Complex A,Complex B){
    Complex temp;
    temp.r=A.r+B.r;
    temp.i=A.i+B.i;
    return temp ;
}

Complex operator* ( Complex A , Complex B ){
    Complex temp;
    temp.a=A.r*B.r-A.i*B.i;
    temp.b=A.r*B.i+B.r*A.i;
    return temp;
}

bool operator==(Complex A,Complex B){
    if (A.r==B.r&&A.i==B.i) return 1 ;
    else return 0 ;
}

bool operator!=(Complex A,Complex B){
    if ( A.r!= B.r||A.i!=B.i) return 1;
    else return 0 ;
}

void Complex::show(){
    cout<<a<<"+"<<b<<"i";
}
