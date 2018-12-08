#include <iostream>
#include "complex.h"
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    Complex a1(A,B);
    cin>>A>>B;
    Complex a2(A,B);
    a1.show();
    cout<<" + ";
    a2.show();
    cout<<" = ";
    (a1+a2).show();
    cout<<endl;
    a1.show() ;
    cout<<" * ";
    a2.show();
    cout<<" = ";
    (a1*a2).show();
    cout<<endl;
    if(a1==a2){
        a1.show();
        cout<<" = ";
        a2.show();
    }
    if(a1!=a2){
        a1.show();
        cout<<" != ";
        a2.show();
    }
    return 0;
}
