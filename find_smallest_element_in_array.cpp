#include<iostream>
using namespace std;

int smallest(int a[],int n){
    int min=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
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
    cout<<"smallest element is:"<<smallest(a,n)<<endl;
    return 0;
}
