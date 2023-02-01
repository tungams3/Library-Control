#include "adult.h"
void adult_read :: Input()
{
    //calling again of input function of base class;
    Reader::Input();
    cin.ignore();
    cout<<"\n ID number:";
    getline(cin,id);
}
void child_read :: Output()
{
    // calling again output func of base class;
    Reader ::Output();
    cout<<"\n Their ID number: "<<id;
}
int child_read :: cost_of_card()
{
    return time_valid * 10;
}
void adult_read::child_read()
{

}
void adult_read::~child_read()
{
    
}
