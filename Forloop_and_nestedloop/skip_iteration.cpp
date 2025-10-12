#include <iostream>
#include <string>
using namespace std;

int main()
{
    int rows,cols,aisle;
    cout<<"Enter Rows(1-20): ";cin>>rows;
    cout<<"Enter Columns(2-20): ";cin>>cols;
    cout<<"Enter Aisle Column: ";cin>>aisle;

    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=cols;j++)
        {
            if(j==aisle)
            {
                continue;
            }
            else{
                cout<<"R"<<i<<"C"<<j<<" ";
            }
        }
        cout<<endl;
    }
    
    
    
    
    
    
    return 0;
}