#include <iostream>
#define MAXSIZE 2000
using namespace std;
char *mystrrchr ( char *str , char ch ){
    int i ;
    char *temp ;
    for (i=0;*(str+i)!='\0';i++)
        if (*(str+i)==ch)temp=str+i;
    return temp ;
}


int main()
{
    char str[MAXSIZE] ,ch ;
    cin >> str ;
    cin >> ch ;
    cout << mystrrchr(str,ch) ;
    return 0;
}
