#include<iostream>
using namespace std;

class Animal
{
    public:
        void eat(string x)
        {
            cout<<x<<" eats food";
        }
};

class Fish
{
    public:
        void swims(string x)
        {
            cout<<x<<" swims";
        }
};

class dog:public Animal
{
    public:
        void run(string x)
        {
            cout<<x<<" runs";
        }
};

class cat:public Fish
{
    public:
        void eatfish(string x)
        {
            cout<<x<<" eats fish";
        }
};

class whale:public dog
{

};

class goat:public cat,public dog
{

};

int main()
{
    whale w;
    string x;
    cin>>x;
    w.eat(x);

    return 0;
}

//singe: 1 base 1 derived
//multiple: multi base multi derived
//multilevel: derived class inherits from base and then again more derived  class can be derived from that derived class
//Hybrid: multi base 1 derived
//