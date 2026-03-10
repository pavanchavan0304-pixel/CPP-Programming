// input 7891 
//output 25

#include<iostream>
using namespace std;

int SumDigits(int iNo)
{
   
static int iSum=0;
   
 if (iNo!=0)
   {
    
    iSum=iSum+(iNo%10);
    SumDigits(iNo/10);
   }
   return iSum;
}

int main()
{
    int iValue=0,iRet=0;

    cout<<"Enter number:\n";
    
    cin>>iValue;

   iRet=SumDigits(iValue);

    cout<<"number of digits are:"<<iRet<<"\n";

    return 0;
}