#include<iostream>
using namespace std;

int sum(int a[],int n){
    int s=0;
    for(int i=0;i<n;i++){
        s=s+a[i];
    }
    return s;
}
int main(){
    int n;
    cout<<"enter no. of elements in array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter elemnts in array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"sum of array element= "<<sum(a,n)<<endl;
    return 0;
}
