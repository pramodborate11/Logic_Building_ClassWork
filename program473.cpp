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

        void Accept()
        {
            int iCnt =0;
            cout<<"Enter the Element :\n";

            for(iCnt = 0; iCnt < iSize ;iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0;
            cout<<"Elemets are : \n";

            for(iCnt = 0; iCnt < iSize ;iCnt++)
             {
                cout<<Arr[iCnt]<<"\t";
             }
             cout<<"\n";
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter the number of elements : \n";
    cin>>iValue;

    //step 2 :Allocate the memory
    ArrayX *aobj = new ArrayX(iValue);

    //step 2 :use the memory
    aobj ->Accept();
    aobj ->Display();
    
    //step 3 :Dealocate the memory
    delete aobj;
    
    return 0;
}