#ifndef JOSEPH_H_INCLUDED
#define JOSEPH_H_INCLUDED

#include <iostream>

using namespace std ;

class joseph{
public :
    joseph(int N , int M){ num = N ; m = M ; } ;
    void simulate() ;
private :
    int num ;
    int m ;
    bool n[1000] = {0} ;
};

#endif // JOSEPH_H_INCLUDED
