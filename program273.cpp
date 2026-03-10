#include<iostream>
using namespace std;
template <class T>
T Maximum(T Arr[],int iSize)
{
    int iCnt=0;
    T iMax;
    iMax=Arr[0];

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(iMax<Arr[iCnt])
        {
            iMax=Arr[iCnt];
        }
    }
    return iMax;
}



int main()
{
    float Brr[]={10.3f,20.3f,30.3f,40.3f,50.3f};

    float fRet=0;

    fRet=Maximum(Brr,5);

    cout<<"Maximum is:"<<fRet<<"\n";


    return 0;
}