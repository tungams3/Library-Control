#include"library_poly.h"
using namespace  std;

int main()
{
    lib *x= new lib;
    x->Input();
    x->Output();
    cout<<"\n\t\t Sum of cost:"<<x->cost_of_card();
    
    delete x;
    system("pause");
    return 0;
}