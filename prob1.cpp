#include <iostream>
using namespace std;
int main()
{   //declarations
    string name1;
    string emotion;
    string animal;
    int num;
    char letter;
    float pi;
    string name2;

    //inputs
    cout<<"Welcome to MadLibs!\n";
    cout<<"Name: ";
    cin>>name1;
    cout<<"Emotion: ";
    cin>>emotion;
    cout<<"Animal: ";
    cin>>animal;
    cout<<"Number: ";
    cin>>num;
    cout<<"Letter: ";
    cin>>letter;
    cout<<"Floating point number between 0 and 100: ";
    cin>>pi;
    //check if float is between 0 and 100
    if (pi<=0 or pi>=100)
    {
        cout<<"floating point number out of bounds";
        return 0;
    }
    cout<<"Name: ";
    cin>>name2;
    cout<<"Dear "<<name1<<endl;
    cout<<"I am "<<emotion<<" that I was not able to complete my homework on time. My pet ";
    cout<<animal<<"\n ate my textbook, and I was only able to retrieve "<<num<<" pages from its jaws.\n";
    cout<<"I hope I can get at least a "<<letter<<" grade because I've done "<<pi<<"%"<<" of the work.\n";
    cout<<"Sincerely,\n"<<name2;
    return 0;
}