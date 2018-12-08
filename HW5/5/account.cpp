#include "savingaccount.h"

double SavingAccount::InterestRateM = 0 ;

void account::create(){
    static int n = 1 ;
    double money ;
    char d[20] ;
    ac = n ;
    cout << "money :" ;
    cin >> money ;
    moneyS = money ;
    cout << "date :" ;
    cin >> d ;
    strcpy(date,d) ;
    n++ ;
}

void SavingAccount::setrate (double newrate){
    InterestRateM = newrate ;
}

void SavingAccount::newm (){
    moneyS += moneyS * InterestRateM ;
}

void SavingAccount::show(){
    cout << moneyS << endl ;
}
