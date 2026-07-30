#include<iostream>
using namespace std;

int even(int a[],int n){
    int ec=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            ec++;
        }
    }
    return ec;
}
int odd(int a[],int n){
    int oc=0;
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            oc++;
        }
    }
    return oc;
}

int main(){
    int n,oc=0,ec=0;
    cout<<"enter size of array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"enter elements in the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //ec=even(a,n);
    //oc=odd(a,n);
    cout<<"even count= "<<even(a,n)<<endl;
    cout<<"odd count= "<<odd(a,n)<<endl;
    return 0;
}
