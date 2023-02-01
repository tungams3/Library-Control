#pragma once
#include "children.h"
#include "adult.h"
#include<vector>
class lib
{
    private:
    vector<child_read>list_child;
    vector<adult_read>list_adult;
    public:
    void Input();
    void Output();
    int sum_of_cost();
    lib();
    ~lib();
};
void lib:: Input()
{
    int var;
    while (true)
    {
        system("cls");
        cout<<"\n\n\t\t=========Library X=======";
        cout<<"\n\t 1. Children reader";
        cout<<"\n\t 2. Adult reader";
        cout<<"\n\t 0. Exit";
        cout<<"\n\n\t\t========= End ===========";

        cout<<"\nEnter the choice"<<endl;
        cin>>var;
        if (var==1)
        {
            child_read x;
            cout<< " Please Enter children data "<<endl;
            x.Input();
            list_child.push_back(x);

        }
        else if(var==2)
        {
            adult_read x;
            cout<< " Please Enter adult data\n ";
            x.Input();
            list_adult.push_back(x);
        }
        else if (var==0)
        {
        cout<<"List of readers";
        break;
        }
        else
        {
            cout<<"Invalid choice.Checking again\n";
            system("pause");
        }
    }
}
void lib:: Output()
{
    for (int i=0;i<list_child.size();i++)
    {
        cout<<"\n\n\t The data of child reader-number "<<i+1;
        list_child[i].Output();
    }
        for (int i=0;i<list_adult.size();i++)
    {

        cout<<"\n\n\t The data of adult reader-number "<<i+1;
        list_adult[i].Output();
    }
}
int lib::sum_of_cost()
{
    int sum=0;
    for(int i=0;i<list_child.size();i++)
    {
        sum=sum+list_child[i].cost_of_card();
    }
    for(int i=0;i<list_adult.size();i++)
    {
        sum=sum+list_adult[i].cost_of_card();
    }
    return sum;
}
lib :: lib(){ };
lib :: ~lib(){};