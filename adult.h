#pragma once
#include<iostream>
using namespace std;
#include<string>
#include "Reader.h"

class adult_read : public Reader
{
    public:
        void Input();
        void Output();
        int cost_of_card(); //method to calculate cost making card of children.
        adult_read();
        ~adult_read();
    private:
        string id;
};
void adult_read :: Input()
{
    //calling again of input function of base class;
    Reader::Input();
    cin.ignore();
    cout<<"\n ID number: ";
    getline(cin,id);
}
void adult_read :: Output()
{
    // calling again output func of base class;
    Reader ::Output();
    cout<<"\n Their ID number: "<<id;
}
int adult_read :: cost_of_card()
{
    return time_valid * 10;
}
adult_read::adult_read()
{

}
adult_read::~adult_read()
{
    
}