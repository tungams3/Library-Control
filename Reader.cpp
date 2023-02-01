#include "Reader.h"
void Reader::Input()
{
    fflush(stdin);
    cout<<"Enter the name of reader: ";
    getline(cin,name);
    fflush(stdin);
    cout<<"Date of issue: ";
    getline(cin,d_issue);
    cout<<"Month validation: ";
    cin>>time_valid;
}
void Reader::Output()
{
    cout<<"\n Name of reader: "<<name;
    cout<<"\n Date of issue: "<<d_issue;
    cout<<"\n Month validation: "<<time_valid;
}
void Reader::Reader()
{

}
void Reader::~Reader()
{

}