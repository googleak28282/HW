#include <iostream>
using namespace std;
bool getdate(int d,int &month,int &date){
    int day[12]={31,28,31,30,31,30,31,31,30,31,30,31} ;
    int i ;
    if (d>365) return 0;
    else{
        for(i=0;i<12;i++){
            if(d>day[i]) d-=day[i] ;
        }
        month=i+1;
        date=d;
        return 1;
    }
}
int main()
{
    int d,month,date,res;
    cout<<"Please enter the number of days:";
    cin>>d;
    res=getdate(d,month,date);
    if(res)
        cout<<"month="<<month<<"\tdate="<<date<<endl;
    else
        cout<<"wrong number!"<<endl;
    return 1;
}
