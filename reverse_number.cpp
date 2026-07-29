#include<iostream>
#include<cmath>
using namespace std;


int reverse(int x,int d){
    int rev=0;
    while(x>0){
    d=x%10;
    rev=rev*10+d;
    x=x/10;
    }
    cout<<"rversed number = "<<rev<<endl;
    return 0;
}
int main(){
    int x,d,rev=0;
    cout<<"enter value of x = "<<endl;
    cin>>x;
    reverse(x,d);
    return 0;
}
