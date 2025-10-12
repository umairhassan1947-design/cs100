#include <iostream>
#include<string>
using namespace std;
int main()
{
int rows,cols;
cols=5;
cout<<"Enter number of rows: ";
cin>>rows;


for(int i=1;i<=rows;i++)
{
    if(i%2==0)
    {
        cout<<"#.#.#";
        cout<<endl;
    }
    
    else if(i%2!=0)
    {
        cout<<".#.#."<<endl;
    }

}

return 0;
}


