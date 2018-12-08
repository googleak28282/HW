#include <iostream>
using namespace std;
void add(char num1[128],char num2[128],char res[128]){
    char inte[128],inte1[128],inte2[128],deci[128],deci1[128],deci2[128],add[3];
    int p1=0,p2=0;
    bool c=0;
    while(num1[p1]!='.') p1++;
    while(num2[p2]!='.') p2++;
    int i,j;
    for(i=0;num1[p1+i]!='\0';i++) deci1[i]=num1[p1+i+1] ;
    for(j=0;num2[p2+j]!='\0';j++) deci2[j]=num2[p2+j+1] ;
    if(i>=j){
        while(i>=j){
            deci[i-1]=deci1[i-1];
            i--;
        }
        while(i!=0){
            k=c+deci1[i-1]-'0'+deci2[i-1]-'0';
            carry=0 ;
            if(k>=10){
                k-=10;
                carry=1;
            }
            deci[i-1]=k+'0';
            i--;
        }
    }
    else{
        while(j>=i){
            deci[j-1]=deci2[j-1];
            j--;
        }
        while(j!=0){
            k=c+deci2[j-1]-'0'+deci1[j-1]-'0';
            carry=0;
            if (k>=10){
                k-=10;
                c=1;
            }
            deci[j-1]=k+'0';
            j--;
        }
    }
    for(i=0;p1>=0;i++,p1--) inte1[i]=num1[p1];
    inte1[i]='\0';
    for(j=0;p2>=0;j++,p2--) inte2[j]=num2[p2] ;
    inte2[j]='\0';
    inte[0]=inte1[0];
    t=1;
    if(i>=j){
        while(t!=j){
            k=c+inte1[t]-'0'+inte2[t]-'0';
            c=0;
            if (k>=10){
                k-=10;
                c=1;
            }
            inte[t]=k+'0';
            t++ ;
        }
        while(t!=i){
            k=c+inte1[t]-'0';
            c=0;
            if(k>=10){
                k-=10;
                c=1;
            }
            inte[t]=k+'0';
            t++;
        }
        inte[t]='\0';
        if (c==1){
            inte[t]='1';
            t++;
            inte[t]='\0';
        }
    }
    else{
        while(t!=i){
            k=c+inte2[t]-'0'+inte1[t]-'0';
            c=0;
            if(k>=10){
                k-=10;
                c=1;
            }
            inte[t]=k+'0';
            t++;
        }
        while ( t != j ){
            k=carry+inte2[t]-'0';
            carry=0;
            if(k>=10){
                k-=10;
                carry=1;
            }
            inte[t]=k+'0';
            t++;
        }
        inte[t]='\0';
        if (carry==1){
            inte[t]='1';
            t++;
            inte[t]='\0';
        }
    }
    for (i=0;inte[i]!='\0';i++,t-- )res[i]=inte[t-1] ;
    for (j=0;deci[j]!='\0';j++,i++ )res[i]=deci[j] ;
    res[i]='\0';
}
int main(){
    char num1[128],num2[128],res[128];
    cout<<"Enter the first number:";
    cin>>num1;
    cout<<"Enter the second number:";
    cin>>num2;
    add(num1,num2,res);
    cout<<num1<<'+'<<num2<<'='<<res<<endl;
    return 0;
}

