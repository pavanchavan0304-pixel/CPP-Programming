#include<iostream>
using namespace std;
template <class T>
int CountFrequency(T Arr[],int iSize,T No)
{
    int iCnt=0;
    int iCount=0;


    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==No)
        {
            iCount++;
        }
    }
    return iCount;
}



int main()
{
    float Brr[]={10.3f,20.3f,30.3f,40.3f,50.3f,20.3f};

    int fRet=0;

    fRet=CountFrequency(Brr,6,20.3f);

    cout<<"frequency is :"<<fRet<<"\n";


    return 0;
}