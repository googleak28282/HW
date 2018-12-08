//1,5,10,20,50 =>4.242
//1,5,16,23,33 =>4.152
#include <iostream>
using namespace std;
int main(){
	int t;
	int a=0;
	for (int i=1;i<=99;i++){
        int min = 99 ;
        int o,all=0;
        for (int j=0;j<=i/50;j++){
            t=(i-50*j) ;
            for(int k=0;k<=t/20;k++){
            	t-=k*20;
            	for(int m=0;m<=t/10;m++){
            		t-=m*10;
            		for(int n=0;n<=t/5;n++){
            			t-=n*5;
            			o=t;
            			all=j+k+m+n+o;
            			if(min>all) min=all;
            			t+=5*n;
            		}
            		t+=10*m;
            	}
            	t+=20*k;
            }
            t=i;
        }
        a+=min;
        cout<<i<<" "<<min<<endl;
    }
    cout<<a/99.0<<endl;
    a=0;
    for (int i=1;i<=99;i++){
        int min = 99 ;
        int o,all;
        for (int j=0;j<=i/33;j++){
            t=(i-33*j) ;
            for(int k=0;k<=t/23;k++){
            	t-=k*23;
            	for(int m=0;m<=t/16;m++){
            		t-=m*16;
            		for(int n=0;n<=t/5;n++){
            			t-=n*5;
            			o=t;
            			all=j+k+m+n+o;
            			if(min>all) min=all;
            			t+=5*n;
            		}
            		t+=16*m;
            	}
            	t+=23*k;
            }
            t=i;
        }
        a+=all;
        cout<<i<<" "<<min<<endl;
    }
    cout<<a/99.0<<endl; 
	return 0;
}