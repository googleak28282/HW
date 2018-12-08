#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

#include <iostream>

using namespace std ;

class orderArray{
public :
    orderArray(int s){ S=s;p=new int[s];} ;
    void add(int a) ;
    void show() ;
    int find(int a) ;
    ~orderArray(){ delete []p ; } ;
private :
    int *p;
    int S;
    int i=0;

};

#endif // ARRAY_H_INCLUDED
