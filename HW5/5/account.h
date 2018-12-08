#ifndef SAVINGACCOUNT_H_INCLUDED
#define SAVINGACCOUNT_H_INCLUDED

#include <iostream>
#include <cstring>
using namespace std ;

class SavingAccount{
public :
    SavingAccount(double money = 0){} ;
    void create();
    static void setrate (double newrate) ;
    void newm () ;
    void show() ;
private :
    int ac = 0 ;
    double moneyS = 0;
    char date[20] = "2018/01/01";
    static double InterestRateM ;
};

#endif // SAVINGACCOUNT_H_INCLUDED
