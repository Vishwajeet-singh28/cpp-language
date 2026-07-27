#include<iostream>
#include<cmath>
using namespace std;

int fact(int x,int f=1){
    for(int i=1;i<=x;i++){
    f=f*i;
    }
    cout<<"factorial is:"<<f<<endl;
    return f;
}
int main(){
    int x,f=1;
    cout<<"enter number: "<<endl;
    cin>>x;
    fact(x,f);
    return 0;
}
