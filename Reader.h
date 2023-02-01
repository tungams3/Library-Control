#pragma once
#include<iostream>
using namespace std;
#include<string>
class Reader // base class
{
    protected:
    string name;
    string d_issue;
    int time_valid;
    bool KT;// if true: children, false: adult
    
    public:
    virtual void Input(); //enter data of reader
    virtual void Output(); // print the data
    virtual int cost_of_card()=0;
    bool get_KT();
    bool set_KT(bool kt);
    Reader(); //default constructor;
    ~Reader(); //default destructor;
};
void Reader::Input()
{
    fflush(stdin);
    cout<<"Enter the name of reader ";
    getline(cin,name);
    fflush(stdin);
    cout<<"Date of issue ";
    getline(cin,d_issue);
    cout<<"Month validation ";
    cin>>time_valid;
}
void Reader::Output()
{
    cout<<"\n Name of reader "<<name;
    cout<<"\n Date of issue "<<d_issue;
    cout<<"\n Month validation "<<time_valid;
}
bool Reader::get_KT()
{
    return KT;
}
bool Reader::set_KT(bool kt)
{
    KT=kt;
    return KT;
}
Reader::Reader()
{

}
Reader::~Reader()
{

}