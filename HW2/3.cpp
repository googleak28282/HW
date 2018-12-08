#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int m,n,x,y,k;
    double dis,aver,t;
    cin>>n>>m;
    t = 0 ;
    for (int i=m;i>=1;i--){
        x = 0 ;
        y = 0 ;
        dis = 0 ; 
		srand(time(NULL)) ;
        for (int j=n;j>=1;j--){
            k = rand() % 4 ;
            switch (k){
                case 0:x+=1;break;
                case 1:y+=1;break;
                case 2:x-=1;break;
                case 3:y-=1;break;
            }
        }
        dis=sqrt(x*x+y*y) ;
        t+=dis;
    }
    aver=t/m;
    cout<<aver<<endl;
    return 0;
}