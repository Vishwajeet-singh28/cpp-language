#include<iostream>
#include<cmath>
using namespace std;


int prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
        cout<<n<<" is not prime number "<<endl;
        }
        else{
            cout<<n<<" is prime number "<<endl;
        }
    return 0;
    }
}
int main(){
    int n;
    cout<<"enter number: "<<endl;
    cin>>n;
    prime(n);
    return 0;
}
