#include <iostream>
#include<string>
using namespace std;

int main(){
int n;
cout<<"Enter number of Triangles: ";
cin>>n;

for (int t=1;t<=n;t++)
{
    int rows = t+1;
    cout<<"Triangle "<<t<<": "<<endl;
    for(int i=1;i<=rows;i++)
    {
        for(int s=1;s<=rows-i;s++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";

        }
        cout<<endl;

    }
    cout<<endl;


}


return 0;
}


