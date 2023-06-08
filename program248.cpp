// Accept number and accept position of bit if it is on then return off bit and if it is off then return on bit(ToggleBit)
#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo , UINT iPos)
{
   UINT iMask = 0X00000001;
   UINT iResult = 0;

   iResult = iNo ^ iMask;

   return iResult;

  
}
int main()
{
    UINT iValue = 0;
    UINT iBit = 0;
    UINT iRet = 0;
    
    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    cout<<"Enter position of bit which you want to off or ON : "<<"\n";
    cin>>iBit;
 
    iRet = ToggleBit(iValue , iBit );
    cout<<"Result is:"<<iRet<<"\n";
     
    return 0;
}

/*


*/




