#include<iostream>
#include<climits>
#include<string>
using namespace std;

class student{
    private:
        string name;
        int roll;
        int marks;
        
    public:
    
        void setname(string n){
            name=n;
        }
        
        void setroll(int r){
            roll=r;
        }
        
        void setmarks(int m){
            marks=m;
        }
        
        
        string getname(){
            return name;
        }
        
        int getroll(){
            return roll;
        }
        
        int getmarks(){
            return marks;
        }
};

int main(){
    student s;
    
    string name;
    int roll;
    int marks;
    
    cout<<"enter student name: "<<endl;
    getline(cin,name);
    
    cout<<"enter student roll no : "<<endl;
    cin>>roll;
    
    cout<<"enter student marks: "<<endl;
    cin>>marks;
    
    s.setname(name);
    s.setroll(roll);
    s.setmarks(marks);
    
    cout<<"name: "<<s.getname()<<endl;
    cout<<"roll: "<<s.getroll()<<endl;
    cout<<"marks: "<<s.getmarks()<<endl;
    
    return 0;
}
