#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input,output;
    char x;
    cout<<"Enter a String: ";
    getline(cin,input);
    int i=0;
    while (i<input.length())
    {
        x=input[i];
        if(x>=65&&x<=90)
        {
            x=x+32;
        }
        output+=x;
        if((x=='a'||x=='e'||x=='i'||x=='o'||x=='u')&&i+1<input.length())
        {
            output+=input[i+1];
            i+=2;
        }
        else{
            i++;

        }

    }
    cout<<"Encrypted String: "<<output<<endl;




return 0;
}
