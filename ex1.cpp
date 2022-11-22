#include<iostream>
using namespace std;

class mere{
public:
void display()
{
cout<<"je suis la classe mere"<<endl;
}
};

class fille: public mere{
    public:
    void display()
        {
            cout<<"je suis la classe fille"<<endl;
        }
};

int main()
{
    fille Fille;
    Fille.display();
    return 0;
}

