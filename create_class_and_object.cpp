#include<iostream>
#include<string>
using namespace std;

class book{
    public:
        string title;
        string author;
        int year;
};

int main(){
    book mybook1;
    mybook1.title="the giving tree" ;
    mybook1.author="shel silverstein" ;
    mybook1.year=1964;
    
    book mybook2;
    mybook2.title="matilda";
    mybook2.author="roald dahl";
    mybook2.year=1988;
    
    cout<<mybook1.title<<" "<<mybook1.author<<" "<<mybook1.year<< "\n";
    cout<<mybook2.title<<" "<< mybook2.author<<" "<<mybook2.year<<" \n";
    
    return 0;
}
