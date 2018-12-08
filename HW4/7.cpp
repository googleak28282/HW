#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int i , j , n = 0 ;
    char *city[30] , str[30] , *temp ;
    cout  << "Please input the names of several cities, one city per line(@--end).\n" ;
    cin >> str ;
    while ( str[0] != '@' ){
        city[n] = new char[sizeof(char)*(strlen(str)+1)] ;
        strcpy(city[n++],str) ;
        cin >> str ;
    }
    for ( i = 1 ; i < n ; i++ ){
        for ( j = i - 1 ; j >= 0 ; j-- ){
            if ( strcmp(city[j],city[i]) == 1 ){
                temp = city[j] ;
                city[j] = city[j+1] ;
                city[j+1] = temp ;
            }
        }
    }
    for ( i = 0 ; i < n ; i ++ ){
        cout << city[i] << endl ;
        delete[]city[i] ;
    }
    return 0;
}
