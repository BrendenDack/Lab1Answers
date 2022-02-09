#include <iostream>
using namespace std;
int main()
{
    int mealCost;
    double tip;
    const double tax = 0.075;
    cout<<"Please input meal cost: "<<endl;
    cin>>mealCost;
    cout<<"Please input tip percent: "<<endl;
    cin>>tip;
    tip = tip/100;


    cout<<"restaurant Bill"<<endl;
    cout<<"====================\n";
    cout<<"Subtotal: $"<<mealCost*1.0;
    cout<<"\nTaxes: $"<<mealCost*tax;
    cout<<"\nTip: $"<<mealCost*tip;
    cout<<"\n====================\n";
    cout<<"Total: $"<<1.0*mealCost+(1.0*mealCost*tax)+(1.0*mealCost*tip);

    return 0;
}