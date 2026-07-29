#include<iostream>
#include<cmath>
using namespace std;


int prime(int n){

     if (n <= 1)
    {
        cout << n << " is not a prime number";
        return 0;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
        cout<<n<<" is not prime number "<<endl;
        return 0;
        }
    }
    cout<<n<<" is prime number "<<endl;
    return 0;
    }
int main(){
    int n;
    cout<<"enter number: "<<endl;
    cin>>n;
    prime(n);
    return 0;
}
