#include<iostream>
#include<cmath>
using namespace std;

void max(int a , int b){
    if(a>b){
        cout<<"a is maximum "<<endl;
    }
    else if(b>a){
        cout<<"b is maximum "<<endl;
    }
    else{
        cout<<"enter diff numbers"<<endl;
    }
    return ;
}
int main(){
    int a,b;
    cout<<"enter a and b: "<<endl;
    cin>>a>>b;
    max(a,b);
    return 0;
}

