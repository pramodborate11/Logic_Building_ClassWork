#include<iostream>
using namespace std;

class ArrayX
{
    public :
        int *Arr;
        int iSize;

        ArrayX(int no)
        {
            cout<<"Inside Constructor \n";
            iSize = no;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            cout<<"Inside Destructor \n";
            delete [] Arr;
        }
};

int main()
{
    //step 2 :Allocate the memory
    ArrayX *aobj = new ArrayX(10);

    //step 2 :use the memory

    //step 3 :Dealocate the memory
    delete aobj;
    
    return 0;
}