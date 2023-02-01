#pragma once
#include<iostream>
using namespace std;
#include<string>
#include "Reader.h"

class child_read : public Reader
{
    public:
        child_read();
        ~child_read();
        void Input(); //the function name should be the same
        void Output();
        int cost_of_card(); //method to calculate cost making card of children.
    private:
        string parent;
};
void child_read :: Input()
{
    //calling again of input function of base class;
    Reader::Input();
    cin.ignore();
    cout<<"\n Parent name: ";
    getline(cin,parent);
}
void child_read :: Output()
{
    // calling again output func of base class;
    Reader ::Output();
    cout<<"\n Their Parent name: "<<parent;
}
int child_read :: cost_of_card()
{
    return time_valid * 5;
}
child_read::child_read()
{

}
child_read::~child_read()
{
    
}