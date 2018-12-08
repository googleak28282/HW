#include <iostream>
using namespace std;
void newSet (){
    int n , i , Set[MAXSIZE] ;
    cin >> n ;
    for ( i = 0 ; i < n ; i ++ ) cin >> Set[i] ;

    int newSet[MAXSIZE] , j , k ;
    newSet[0] = Set[0] ;
    k = 1 ;
    for ( i = 1 ; i < n ; i ++ ){
        for ( j = i ; j > 0 ; j-- ){
            if ( Set[i] == Set[j - 1] ) break ;
        }
        if ( j == 0 ) {
            newSet[k] = Set[i] ;
            k ++ ;
        }
    }
    for ( i = 0 ; i < k ; i ++ ) cout << newSet[i] << " " ;
}

void add (){
    int i , n , Set[MAXSIZE] ;
    cin >> n ;
    for ( i = 0 ; i < n ; i ++ ) cin >> Set[i] ;
    int add ;
    cin >> add ;
    int j , k , num ;
    k = n ;
    for ( i = 0 ; i < add ; i ++ ){
        cin >> num ;
        for ( j = 0 ; j < k ; j ++ ){
            if ( num == Set[j] ) break ;
        }
        if ( j == k ){
            Set[k] = num ;
            k ++ ;
        }
    }
    for ( i = 0 ; i < k ; i ++ ) cout << Set[i] << " " ;
}

void fnd (){
    int i , n , Set[MAXSIZE] ;
    cin >> n ;
    for ( i = 0 ; i < n ; i ++ ) cin >> Set[i] ;
    int srch ;
    cin >> srch ;
    for ( i = 0 ; i < n ; i ++ ){
        if ( Set[i] == srch ){
            cout << srch << " " << i + 1 ;
            break ;
        }
    }
    if ( i == n ) cout << "no" ;
}

void intersection (){
    int an , bn , Seta[MAXSIZE] , Setb[MAXSIZE] , i , j ;
    cin >> an ;
    for ( i = 0 ; i < an ; i ++ ) cin >> Seta[i] ;
    cin >> bn ;
    for ( i = 0 ; i < bn ; i ++ ) cin >> Setb[i] ;

    int newSet[MAXSIZE] , k ;
    k = 0 ;
    for ( i = 0 ; i < an ; i ++ ){
        for ( j = 0 ; j < bn ; j ++ ){
            if ( Seta[i] == Setb[j]){
                newSet[k] = Seta[i] ;
                k ++ ;
                break ;
            }
        }
    }
    for ( i = 0 ; i < k ; i ++ ) cout << newSet[i] << " " ;
}

void unionSet (){
    int an , bn , Seta[MAXSIZE] , Setb[MAXSIZE] , i , j ;
    cin >> an ;
    for ( i = 0 ; i < an ; i ++ ) cin >> Seta[i] ;
    cin >> bn ;
    for ( i = 0 ; i < bn ; i ++ ) cin >> Setb[i] ;
    int newSet[MAXSIZE] , k ;
    for ( i = 0 , k = 0 ; i < an ; i ++ , k ++ ) {
        newSet[k] = Seta[i] ;
    }
    for ( i = 0 ; i < bn ; i ++ ){
        for ( j = k + i - 1 ; j > 0 ; j-- ){
            if ( Setb[i] == newSet[j - 1] ) break ;
        }
        if ( j == 0 ) {
            newSet[k] = Setb[i] ;
            k ++ ;
        }
    }
    for ( i = 0 ; i < k ; i ++ ) cout << newSet[i] << " " ;
}
int main(){
	cout<<"which function would you want to use?"<<endl;
	cout<<"(1)newstring"<<endl<<"(2)add"<<endl<<"(3)find"<<endl<<"(4)string matching"<<endl<<"(5)string union"<<endl;
	int n;
	cin>>n;
	int k;
	cin>>k;
	int arr1[50];
	int arr2[50];
	for(int i=0;i<k;i++){
		cin>>arr1[i];
		cin>>arr2[i];
	}
	if(n==1){
		newstr();
	}
	else if(n==2)
	else if(n==3)
	else if(n==4)
	else
}