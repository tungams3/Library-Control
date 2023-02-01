#include "children.h"
void child_read :: Input()
{
    //calling again of input function of base class;
    Reader::Input();
    cin.ignore();
    cout<<"\n Parent name:";
    getline(cin,parent);
}
void child_read :: Output()
{
    // calling again output func of base class;
    Reader ::Output();
    cout<<"\nTheir Parent name: "<<parent;
}
int child_read :: cost_of_card()
{
    return time_valid * 5;
}
void child_read::child_read()
{

}
void child_read::~child_read()
{
    
}