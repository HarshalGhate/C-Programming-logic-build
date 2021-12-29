#include<iostream>

using namespace std;

int Addition(int no1,int no2)
{
    int ans=0;
    ans=no1+no2;
    return ans;
}

int Substraction(int no1,int no2)
{
    return no1-no2;
}


int main()
{
    int iValue1=0,iValue2=0,iRet=0;
    cout<<"Enter the First number :";
    cin>>iValue1;

    cout<<"Enter the second number :";
    cin>>iValue2;

    iRet=Addition(iValue1,iValue2);
    cout<<"Addition is :"<<iRet<<endl;

    
    iRet=Substraction(iValue1,iValue2);
    cout<<"Substraction is :"<<iRet<<endl;

    return 0;
}