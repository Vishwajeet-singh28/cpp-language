#include<iostream>
using namespace std;

int main(){
    string str;
    char ch;
    int i;
    
    cout<<"enter string: "<<endl;
    getline(cin,str);
    
    cout<<"enter character to remove: "<<endl;
    cin>>ch;
    
    string result=" ";
    
    for(i=0;i< str.length();i++){
        if(str[i]!=ch){
            result=result+str[i];
        }
    }
    cout<<"string after deletion: "<<result<<endl;
}
