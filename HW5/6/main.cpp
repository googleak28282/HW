#include <iostream>
#include "joseph.h"
using namespace std;
int main()
{
    int n , m ;
    cout << "people and interval:" ;
    cin >> n >> m ;
    joseph a(n,m) ;
    a.simulate();
    return 0;
}
