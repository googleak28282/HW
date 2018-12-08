#include "array.h"
using namespace std;
void orderArray::add(int a){
    if (S>i){
        p[i]=a;
        i++;
    }
    else{
        int *temp;
        S++;
        temp=new int[S];
        for (int j=0;j<i;j++) temp[j]=p[j];
        temp[i]=a;
        i++;
        delete []p;
        p=temp;
    }
}
void orderArray::show(){
    for(int j=0;j<i;j++) cout<<p[j]<<" ";
}
int orderArray::find(int a){
    return p[a];
}
