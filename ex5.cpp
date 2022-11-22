#include<iostream>
using namespace std;

class Animal{
    public:
    const char*name;
    int age;
    Animal(const char*myname) : name(myname){};
    void set_value(int age_value){age = age_value};
};

class zebra : public Animal{
    public:
    const char*origin,
    Zebra (const char*myname, const char*myorigin) : Animal(myname),origin(myorigin){};
    void display_info(){cout<<"je suis:"<<name<<" , mon age est:"<<age<<" et je viens de:"<<origin<<endl;};
};

class Dolphin : public Animal{
     public:
    const char*origin,
    Dolphin (const char*myname, const char*myorigin) : Animal(myname),origin(myorigin){};
    void display_info(){cout<<"je suis:"<<name<<" , mon age est:"<<age<<" et je viens de:"<<origin<<endl;};
};

int main()
{
    const char*name = "lou";
    const char*origin = "pampo";
    zebra zeb(name ,origin);
    zeb.set_value(23);
    zeb.display_info();
    return 0;
}
