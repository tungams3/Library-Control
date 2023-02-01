#pragma once
#include "children.h"
#include "adult.h"
#include<vector>
class lib
{
    private:
    vector<Reader *>list_reader; //declare 1D-array of base class. We use polymorphism to apply in inherited class.
    
    public:
    void Input();
    void Output();
    int cost_of_card();
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
        Reader *x;
        if (var==1)
        {
            x=new child_read;
            cout<< " Please Enter children data "<<endl;
            x->Input();
         //   x->KT=true;// incorrect because of encapsulatio
            x->set_KT(true);
            list_reader.push_back(x);
        }
        else if(var==2)
        {
            x=new adult_read;
            cout<< " Please Enter adult data "<<endl;
            x->set_KT(false);
            x->Input();
            x->set_KT(false);
            list_reader.push_back(x);
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
    cout<<"\n\n\t\t ==== LIST OF READER\n";
    for (int i=0;i<list_reader.size();i++)
    {
        if (list_reader[i]->get_KT()==true)
        {
        cout<<"\n\n\t The data of children reader- number "<<i+1;
        list_reader[i]->Output();
        }
        else
        {
        cout<<"\n\n\t The data of adult reader-number "<<i+1;
        list_reader[i]->Output();
        }

    }
}
int lib::cost_of_card()
{
    int sum=0;
    for(int i=0;i<list_reader.size();i++)
    {
        sum=sum+list_reader[i]->cost_of_card();
    }
    return sum;
}
lib :: lib(){ };
lib :: ~lib(){};