#include<iostream>
using namespace std;

void Display()
{ 
    static int iCnt = 1; 
    auto i = 1;

    if( iCnt <= 3)
    {
      cout<<"Jay Ganesh..."<<iCnt<<" "<<i<<"\n";
      iCnt++;
      i++;
      Display();               //Recursion Call
    }
}

int main()
{
    cout<<"Inside Main Function \n";
    Display();
    cout<<"End of main Function";
    return 0;
}