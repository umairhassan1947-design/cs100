#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int randnum ;
    do
    {
      
      randnum= rand()%100+1;
      cout<<"Your random number is "<<randnum<<endl;
      if (randnum<=50)
      {
        cout<<"Your number is less than 50 ( "<<randnum<<" ), you need to exit.."<<endl;
        break;

      }

    } while (true);
    
    
























    return 0;
}