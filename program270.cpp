#include<iostream>
using namespace std;

template <class T>
T Summetion(T Arr[],int iSize)
{
    int iCnt = 0;
    float iSum = 0;
    
    for(iCnt = 0;iCnt <= Arr[iCnt];iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    float Brr[] ={10.1f,20.2f,30.3f,40.4f,50.5f};
    float iRet = 0.0f;

    iRet = Summetion(Brr,5);

    cout<<"Summetion is :"<<iRet<<"\n";
    return 0;
}