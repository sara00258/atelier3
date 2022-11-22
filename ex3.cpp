#include<iostream>
#include<cmath>
using namespace std;

class complexe{
    double re;
    double img;
    public:
    complexe(double a=0, double b=0){
        re = a;
        img = b;
    }
    void afficher(){
        cout<<re;
        if(img>=0)
        cout<<"+";
        cout<<img<<"i"<<endl;
    }
    complexe operator+(complexe a){
        complexe somme;
        somme.re = re + a.re;
        somme.img = img + a.img;
        return somme;
    }
    complexe operator-(complexe a){
        complexe soustraction;
        soustraction.re = re - a.re;
        soustraction.img = img - a.img;
        return soustraction;
    }
    complexe operator*(complexe a){
        complexe produit;
        produit.re = re * a.re - img * a.img;
        produit.img = re * a.img + img * a.re;
        return produit;
    }
    complexe division(){
        complexe div;
        div.re = re;
        div.img = -img;
        return div;
    }
};
int main (){
    complexe a(1,3),b(2,4),c;
    cout<<"complexe A =";a.afficher();
    cout<<"la division de A est:";a.division().afficher();

    cout<<"A=";a.afficher();
    cout<<"B=";b.afficher();
    cout<<"A+B=";c=(a+b);c.afficher();
    cout<<"A-B=";c=(a-b);c.afficher();
    

}

