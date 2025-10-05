#include <iostream>
#include <string>
using namespace std;

int main(){
    int day;
    cout<<"Enter a day (1-5): ";
    cin>>day;
    switch (day)
    {
    case 1: 
    cout<<"Monday"<<endl;
    break;
    
    case 2:
    cout<<"Tuesday"<<endl;
    break;

    case 3:
    cout<<"Wednesday"<<endl;
    break;

    case 4:
    cout<<"Thursday"<<endl;
    break;

    case 5:
    cout<<"Friday"<<endl;
    break;

    default:
    cout<<"Invalid number you fool!"<<endl;


    }


 return 0;
}