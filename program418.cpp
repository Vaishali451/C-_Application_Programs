#include<iostream>
using namespace std;

int Addition(int No1,int No2)
{
    int iAns=0;
    iAns=No1+No2;
    return iAns;
}

double Addition(double No1,double No2)
{
    double iAns=0;
    iAns=No1+No2;
    return iAns;
}

int main()
{
    int A=10 , B=11, Ret = 0;

    Ret=Addition(A,B);

    cout<<"Addition is:"<<Ret<<"\n";

    double X=25.7 , Y=11.11, Result = 0.0;

    Result=Addition(X,Y);

    cout<<"Addition is:"<<Result<<"\n";


    return 0;
}