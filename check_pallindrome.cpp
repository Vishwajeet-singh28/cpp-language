#include<iostream>
#include<cmath>
using namespace std;

int pallin(int x){
    int rev=0,d;
    while(x>0){
        d=x%10;
        rev=rev*10+d;
        x=x/10;
    }
    return rev;
}

int pallind(int x){
    if(x==pallin(x)){
        cout<<"its pallindrome"<<endl;
    }
    else{
        cout<<"not pallindrom"<<endl;
    }
    return 0;
}
int main(){
    int x,d,rev=0;
    cout<<"enter x: "<<endl;
    cin>>x;
    pallind(x);
    return 0;
}
