#include <iostream>
using namespace std;
void realign (int n,char c[30],char cc[30][30],int k){
    int i ;
    for ( i = 0 ; i < n && a[k+k+i] != '\0' ; i ++ ) z[i][k]=a[k+k+i];
    if (i==n) for (i=2;i<n&&a[n+k+k+i-2]!='\0';i++) z[n-i][i+k-1]=a[n+k+k+i-2];
    k+=n-1;
    if (i==n) realign(n,a,z,k) ;
}

int main()
{
    int n,k;
    char c[30];
    char cc[30][30]={'\0'};
    k=0;
    cin>>n>>c;
    realign(n,c,cc,k) ;
    for (int i=0;i<n;i++)
        for (int j=0;j<30;j++)
            if (cc[i][j]!='\0') cout<<cc[i][j];
    return 0;
}
