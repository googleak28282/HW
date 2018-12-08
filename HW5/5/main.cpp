#include "savingaccount.h"

int main()
{
    SavingAccount a[100];
    int n = 1 , choose , i ;
    cout << "1 ---add" << endl ;
    cout << "2 ---show" << endl ;
    cout << "3 ---change Rate" << endl ;
    cout << "4 ---pass a month" << endl ;
    cout << "0 ---exit" << endl ;
    do{
        cin >> choose ;
        if ( choose == 1 ){
            a[n].create() ;
            n ++ ;
        }
        if ( choose == 2 ){
            int srch ;
            cin >> srch ;
            a[srch].showmoney() ;
        }
        if ( choose == 3 ){
            double newrate ;
            cout << "new rate :" ;
            cin >> newrate ;
            SavingAccount::changeRate(newrate) ;
        }
        if ( choose == 4 ){
            for ( i = 1 ; i < n ; i++ ) a[i].newmoney() ;
        }
    }while ( choose != 0 ) ;

    return 0;
}
