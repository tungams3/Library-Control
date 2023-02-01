#include "Reader.h"
#include "children.h"
#include "adult.h"
#include "library.h"

int main()
{
    lib *x=new lib;
    x->Input();
    x->Output();
    cout<<"\n\n\t The sum of making card for all readers: ";
    cout<< x->sum_of_cost();
    delete x;// free the memory 
    cout<<endl;
    system("pause");
    return 0;
}
