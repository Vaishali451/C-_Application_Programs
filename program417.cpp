#include<iostream>
using namespace std;

int Addition(int No1,int No2)
{
    int iAns=0;
    iAns=No1+No2;
    return iAns;
}

int main()
{
    int A=10 , B=11, Ret = 0;

    Ret=Addition(A,B);

    cout<<"Addition is:"<<Ret<<"\n";


    return 0;
}