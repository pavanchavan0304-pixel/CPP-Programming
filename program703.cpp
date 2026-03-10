 

#include<iostream>
using namespace std;

int CountDigits(int iNo)
{
    static int iCount=0;
   
 if (iNo!=0)
   {
    iCount++;
   // iNo=iNo/10;
    CountDigits(iNo/10);
   }
   return iCount;
}

int main()
{
    int iValue=0,iRet=0;

    cout<<"Enter number:\n";
    
    cin>>iValue;


   iRet=CountDigits(iValue);

    cout<<"number of digits are:"<<iRet<<"\n";

    return 0;
}