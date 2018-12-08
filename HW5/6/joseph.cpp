#include "joseph.h"
using namespace std;
void joseph::simulate(){
    int i , j , k ;
    j = 1 ;
    for ( i = num ; i > 0 ; i-- ){
        while ( m > i ) m -= i ;
        k = 0 ;
        while (true){
            if ( n[j] == 0 ) k++ ;
            if ( k == m ){
                n[j] = 1 ;
                cout << j << " " ;
                j++ ;
                if ( j > num ) j -= num ;
                break ;
            }
            j++ ;
            if ( j > num ) j -= num ;
        }
    }
}
