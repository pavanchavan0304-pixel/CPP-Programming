// input 7891 
//output 25

#include<iostream>
using namespace std;

 void DisplayFactors(int iNo)
 {
  int iCnt=0;
  for(iCnt=1;iCnt<=(iNo/2);iCnt++)
  {
    if(iNo%iCnt==0)
    {
      cout<<iCnt<<"\n";
    }
  }
 }

int main()
{
    int iValue=0,iRet=0;

    cout<<"Enter number:\n";
    
    cin>>iValue;

   iRet=DisplayFactors(iValue);

    cout<<"number of digits are:"<<iRet<<"\n";

    return 0;
}