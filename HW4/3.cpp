#include <iostream>
using namespace std;
int t1 ( int line1[5] , int line2[5] ){
    int i , j ;
    int t1 ;
    t1 = 0 ;
    i = 0 ;
    j = 0 ;
    while ( line1[4] != 0 || line2[4] != 0){
        if ( i < 5 ) line1[i]-- ;
        if ( line1[i] == 0 ) i++ ;
        if ( j < 5 ) line2[j]-- ;
        if ( line2[j] == 0 ) j++ ;
        t1++ ;
    }
    return t1 ;
}
int t2 ( int line[10] ){
    int a , b , i ;
    int t2 ;
    bool flag ;
    a = 0 ;
    b = 1 ;
    t2 = 0 ;
    flag = 1 ;
    while ( flag ){
        if ( a < 10 ) line[a]-- ;
        if ( b < 10 ) line[b]-- ;
        while ( line[a] == 0 ) a++ ;
        while ( line[b] == 0 || b == a ) b++ ;
        t2++ ;
        for ( i = 0 ; i < 10 ; i ++ )
            if ( line[i] != 0 ) break ;
        if ( i == 10 ) flag = 0 ;
    }
    return t2 ;
}

int main(){
	int t1,t2;
	int arr1[5]={1,1,1,1,1},arr2[5]={1,1,1,1,1};
	int arr[10]={1,1,1,1,1,1,1,1,1,1};
	srand(time(NULL));
	k=rand()%10;
	arr[k]=5;
	k=
}