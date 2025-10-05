#include <iostream>
#include <string>
using namespace std;
// To run the testcases, execute: g++ test.cpp -o test ; ./test
int main() {
    //start writing your code here
    int temp;
    bool rain;
    cin>>temp;
    cin>>rain;

    if (rain==1)
    {   if (temp<15)
        {
          cout<<"Wear a raincoat and a sweater";
        }
          else
        {  
          cout<<"\nCarry an umbrella";
        }
    }
    else 
    {
        if (temp<15)
        {
            cout<<"Wear a jacket"<<endl;
        }
        else
        {
            cout<<"Enjoy the sunshine!"<<endl;

        }
    }
    return 0;
}