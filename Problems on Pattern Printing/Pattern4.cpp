/*
4. Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 3 iCol = 4
Output :
* # * #
* # * #
* # * #

*/

#include<iostream>
using namespace std;

void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    if((iRow<0)||(iCol<0))
    {
        iRow=-iRow;
        iCol=-iCol;
    }
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
           if(j%2==0)
           {
               cout<<"#\t";
           }
           else
           {
               cout<<"*\t";
           }
        }
        cout<<endl;
    }
}
int main()
{
    int iValue1=0,iValue2=0;
    cout<<"Enter the nmber of Rows\n";
    cin>>iValue1;
    cout<<"Enter the number of Colums\n";
    cin>>iValue2;

    Pattern(iValue1,iValue2);
    return 0;
}