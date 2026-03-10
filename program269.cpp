#include<iostream>
using namespace std;
float Summation(float Arr[],int iSize)
{
    int iCnt=0;
    float iSum=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum=iSum+Arr[iCnt];
    }
    return iSum;
}



int main()
{
    float Brr[]={10.2f,20.3f,30.3f,40.3f,50.3f};

    float fRet=0;

    fRet=Summation(Brr,5);

    cout<<"Summation is:"<<fRet<<"\n";


    return 0;
}