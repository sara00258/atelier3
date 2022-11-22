#include<iostream>
using namespace std;

class MyClass{
    private:
    MyClass();
    ~MyClass();
};
MyClass::~MyClass(){
    cout<<"ceci est un destructeur"<<endl;
}
MyClass::MyClass(){
    cout<<"ceci est un constructeur"<<endl;
}

int main(){
    MyClass box;
}