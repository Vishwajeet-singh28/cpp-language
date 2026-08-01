#include<iostream>
using namespace std;

int reverse(int a[],int n){
    int c,i;
    for(int i=0;i<n/2;i++){
        c=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=c;
    }
    return 0;
}
int main(){
    int n;
    cout<<"enter size of the array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"enter elements in array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    reverse(a,n);
    
    cout<<"reserved array: "<<endl;
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    
    return 0;
}
