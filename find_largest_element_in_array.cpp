#include<iostream>
#include<cmath>
using namespace std;

int largest(int a[ ],int n){
    int max=a[0];
    for(int i=1;i<n;i++){
    if(a[i]>max){
        max=a[i];
    }
    }
    return max;
}
int main(){
    int n;
    cout<<"enter size of the array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"enter elements in the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"largest element is:"<<largest(a,n)<<endl;
    return 0;
}
