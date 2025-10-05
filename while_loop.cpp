#include <iostream>
#include <string>
using namespace std;

int main(){
    int a,sum =0;

    while(true)
    {
        cout<<"Enter number to sum(-ve number to exit): ";
        cin>>a;
        if (a<0)
        {
            cout<<"Exiting Program..."<<endl;
            break;
        }
        sum +=a;
    }
    cout<<"Your total sum is "<<sum<<endl;















    return 0;
}