#ifndef JOSEPH_H_INCLUDED
#define JOSEPH_H_INCLUDED

#include <iostream>

using namespace std ;

class joseph{
public :
    joseph(int n,int m){ num = n ; k = m ; } ;
    void simulate() ;
private :
    int num ;
    int k ;
    bool n[1000] = {0} ;
};

#endif // JOSEPH_H_INCLUDED
