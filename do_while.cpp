#include <iostream>
#include <string>
using namespace std;

int main()
{
    string pass;
    string correctpass = "lums123";
    do
    {
        cout<<"Enter the password(Write 'no' to exit): ";
        cin>>pass;
        if (pass==correctpass)
        {
            cout<<"Correct Password! Welcome!";
            break;
        }
        if (pass=="no")
        {
            cout<<"Exiting Program"<<endl;
            break;
        }


    } while (true);
    

















    return 0;
}